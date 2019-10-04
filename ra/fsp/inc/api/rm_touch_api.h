/***********************************************************************************************************************
 * Copyright [2019] Renesas Electronics Corporation and/or its affiliates.  All Rights Reserved.
 *
 * This software is supplied by Renesas Electronics America Inc. and may only be used with products of Renesas
 * Electronics Corp. and its affiliates ("Renesas").  No other uses are authorized.  This software is protected under
 * all applicable laws, including copyright laws. Renesas reserves the right to change or discontinue this software.
 * THE SOFTWARE IS DELIVERED TO YOU "AS IS," AND RENESAS MAKES NO REPRESENTATIONS OR WARRANTIES, AND TO THE FULLEST
 * EXTENT PERMISSIBLE UNDER APPLICABLE LAW,DISCLAIMS ALL WARRANTIES, WHETHER EXPLICITLY OR IMPLICITLY, INCLUDING
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, AND NONINFRINGEMENT, WITH RESPECT TO THE SOFTWARE.
 * TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT WILL RENESAS BE LIABLE TO YOU IN CONNECTION WITH THE SOFTWARE
 * (OR ANY PERSON OR ENTITY CLAIMING RIGHTS DERIVED FROM YOU) FOR ANY LOSS, DAMAGES, OR CLAIMS WHATSOEVER, INCLUDING,
 * WITHOUT LIMITATION, ANY DIRECT, CONSEQUENTIAL, SPECIAL, INDIRECT, PUNITIVE, OR INCIDENTAL DAMAGES; ANY LOST PROFITS,
 * OTHER ECONOMIC DAMAGE, PROPERTY DAMAGE, OR PERSONAL INJURY; AND EVEN IF RENESAS HAS BEEN ADVISED OF THE POSSIBILITY
 * OF SUCH LOSS, DAMAGES, CLAIMS OR COSTS.
 **********************************************************************************************************************/

/*******************************************************************************************************************//**
 * @ingroup RENESAS_INTERFACES
 * @defgroup TOUCH_API Touch Middleware Interface
 * @brief Interface for Touch Middleware functions.
 *
 * @section TOUCH_API_Summary Summary
 * The TOUCH interface provides TOUCH functionality.
 *
 * The TOUCH interface can be implemented by:
 * - @ref TOUCH
 *
 * @{
 **********************************************************************************************************************/

#ifndef RM_TOUCH_API_H
#define RM_TOUCH_API_H

/***********************************************************************************************************************
 * Includes
 **********************************************************************************************************************/

/* Register definitions, common services and error codes. */
#include "bsp_api.h"
#include "r_ctsu_api.h"

/* Common macro for FSP header files. There is also a corresponding FSP_FOOTER macro at the end of this file. */
FSP_HEADER

/**********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/
#define TOUCH_API_VERSION_MAJOR    (1U)
#define TOUCH_API_VERSION_MINOR    (0U)

/**********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/** Control block.  Allocate an instance specific control block to pass into the API calls.
 * @par Implemented as
 * - touch_instance_ctrl_t
 */
typedef void touch_ctrl_t;

/** Configuration of each button */
typedef struct st_touch_button_cfg
{
    uint8_t       elem_index;   ///< Element number used by this button.
    uint16_t      threshold;    ///< Touch/non-touch judgment threshold
    uint16_t      hysteresis;   ///< Threshold hysteresis for chattering prevention.
} touch_button_cfg_t;

/** Configuration of each slider */
typedef struct st_touch_slider_cfg
{
    uint8_t const *p_elem_index;    ///< Element number array used by this slider.
    uint8_t       num_elements;     ///< Number of elements used by this slider.
    uint16_t      threshold;        ///< Position calculation start threshold value.
} touch_slider_cfg_t;

/** Configuration of each wheel */
typedef struct st_touch_wheel_cfg_t
{
    uint8_t const *p_elem_index;    ///< Element number array used by this wheel.
    uint8_t       num_elements;     ///< Number of elements used by this wheel.
    uint16_t      threshold;        ///< Position calculation start threshold value.
} touch_wheel_cfg_t;

/** Callback function parameter data */
typedef struct st_ctsu_callback_args touch_callback_args_t;

/** User configuration structure, used in open function */
typedef struct st_touch_cfg
{
    touch_button_cfg_t const * p_buttons;   ///< Pointer to array of button configuration.
    touch_slider_cfg_t const * p_sliders;   ///< Pointer to array of slider configuration.
    touch_wheel_cfg_t const * p_wheels; ///< Pointer to array of wheel configuration.
    uint8_t         num_buttons;        ///< Number of buttons.
    uint8_t         num_sliders;        ///< Number of sliders.
    uint8_t         num_wheels;         ///< Number of wheels.
    uint8_t         on_freq;            ///< The cumulative number of determinations of ON.
    uint8_t         off_freq;           ///< The cumulative number of determinations of OFF.
    uint16_t        drift_freq;         ///< Base value drift frequency. [0 : no use]
    uint16_t        cancel_freq;        ///< Maximum continuous ON. [0 : no use]
    ctsu_instance_t const * p_ctsu_instance;  ///< Pointer to CTSU instance.
    void const * p_context;             ///< User defined context passed into callback function.
    void const * p_extend;              ///< Pointer to extended configuration by instance of interface.
} touch_cfg_t;

/** Functions implemented at the HAL layer will follow this API. */
typedef struct st_touch_api
{
    /** Open driver.
     * @par Implemented as
     * - RM_TOUCH_Open()
     *
     * @param[in]  p_ctrl       Pointer to control structure.
     * @param[in]  p_cfg        Pointer to pin configuration structure.
     */
    fsp_err_t (* open)(touch_ctrl_t * const p_ctrl, touch_cfg_t const * const p_cfg);

    /** Scan start.
     * @par Implemented as
     * - RM_TOUCH_ScanStart()
     *
     * @param[in]  p_ctrl       Pointer to control structure.
     */
    fsp_err_t (* scanStart)(touch_ctrl_t * const p_ctrl);

    /** Data get.
     * @par Implemented as
     * - RM_TOUCH_DataGet()
     *
     * @param[in]  p_ctrl       Pointer to control structure.
     * @param[out] p_buton_status     Pointer to get data bitmap.
     * @param[out] p_slider_position  Pointer to get data array.
     * @param[out] p_wheel_position   Pointer to get data array.
     */
    fsp_err_t (* dataGet)(touch_ctrl_t * const p_ctrl, uint64_t *p_button_status, uint16_t *p_slider_position, uint16_t *p_wheel_position);

    /** Close driver.
     * @par Implemented as
     * - RM_TOUCH_Close()
     *
     * @param[in]  p_ctrl       Pointer to control structure.
     */
    fsp_err_t (* close)(touch_ctrl_t * const p_ctrl);

    /** Return the version of the driver.
     * @par Implemented as
     * - RM_TOUCH_VersionGet()
     *
     * @param[in]  p_ctrl       Pointer to control structure.
     * @param[out] p_data       Memory address to return version information to.
     */
    fsp_err_t (* versionGet)(fsp_version_t * const p_data);
} touch_api_t;

/** This structure encompasses everything that is needed to use an instance of this interface. */
typedef struct st_touch_instance
{
    touch_ctrl_t      * p_ctrl;          ///< Pointer to the control structure for this instance
    touch_cfg_t const * p_cfg;           ///< Pointer to the configuration structure for this instance
    touch_api_t const * p_api;           ///< Pointer to the API structure for this instance
} touch_instance_t;

/* Common macro for FSP header files. There is also a corresponding FSP_HEADER macro at the top of this file. */
FSP_FOOTER

#endif                                 /* RM_TOUCH_API_H */

/*******************************************************************************************************************//**
 * @} (end addtogroup TOUCH_API)
 **********************************************************************************************************************/
