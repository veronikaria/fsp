/***********************************************************************************************************************
 * Copyright [2020-2024] Renesas Electronics Corporation and/or its affiliates.  All Rights Reserved.
 *
 * This software and documentation are supplied by Renesas Electronics America Inc. and may only be used with products
 * of Renesas Electronics Corp. and its affiliates ("Renesas").  No other uses are authorized.  Renesas products are
 * sold pursuant to Renesas terms and conditions of sale.  Purchasers are solely responsible for the selection and use
 * of Renesas products and Renesas assumes no liability.  No license, express or implied, to any intellectual property
 * right is granted by Renesas. This software is protected under all applicable laws, including copyright laws. Renesas
 * reserves the right to change or discontinue this software and/or this documentation. THE SOFTWARE AND DOCUMENTATION
 * IS DELIVERED TO YOU "AS IS," AND RENESAS MAKES NO REPRESENTATIONS OR WARRANTIES, AND TO THE FULLEST EXTENT
 * PERMISSIBLE UNDER APPLICABLE LAW, DISCLAIMS ALL WARRANTIES, WHETHER EXPLICITLY OR IMPLICITLY, INCLUDING WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, AND NONINFRINGEMENT, WITH RESPECT TO THE SOFTWARE OR
 * DOCUMENTATION.  RENESAS SHALL HAVE NO LIABILITY ARISING OUT OF ANY SECURITY VULNERABILITY OR BREACH.  TO THE MAXIMUM
 * EXTENT PERMITTED BY LAW, IN NO EVENT WILL RENESAS BE LIABLE TO YOU IN CONNECTION WITH THE SOFTWARE OR DOCUMENTATION
 * (OR ANY PERSON OR ENTITY CLAIMING RIGHTS DERIVED FROM YOU) FOR ANY LOSS, DAMAGES, OR CLAIMS WHATSOEVER, INCLUDING,
 * WITHOUT LIMITATION, ANY DIRECT, CONSEQUENTIAL, SPECIAL, INDIRECT, PUNITIVE, OR INCIDENTAL DAMAGES; ANY LOST PROFITS,
 * OTHER ECONOMIC DAMAGE, PROPERTY DAMAGE, OR PERSONAL INJURY; AND EVEN IF RENESAS HAS BEEN ADVISED OF THE POSSIBILITY
 * OF SUCH LOSS, DAMAGES, CLAIMS OR COSTS.
 **********************************************************************************************************************/

/**
  * @file    iaq_2nd_gen.h
  * @author  Renesas Electronics Corporation
  * @version 3.2.0
  * @brief   This file contains the data structure definitions and
  *          the function definitions for the 2nd generation IAQ algorithm.
  * @details The library contains an algorithm to calculate an EtOH, TVOC and
  *          IAQ index from ZMOD4410 measurements.
  *          The implementation is made to allow more than one sensor.
  *
  */

#ifndef IAQ_2ND_GEN_H_
#define IAQ_2ND_GEN_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <math.h>

#if TEST_RM_ZMOD4XXX  // For RA FSP test
 #include "../../../../../fsp/src/rm_zmod4xxx/zmod4xxx_types.h"
#else
 #include "../zmod4xxx_types.h"
#endif

/** \addtogroup RetCodes Return codes of the algorithm functions.
 *  @{
 */
#define IAQ_2ND_GEN_OK            (0) /**< everything okay */
#define IAQ_2ND_GEN_STABILIZATION (1) /**< sensor in stabilization */
#define IAQ_2ND_GEN_DAMAGE        (-102) /**< sensor damaged */
/** @}*/

/**
* @brief Variables that describe the sensor or the algorithm state.
*/

typedef struct {
    float log_rcda[9]; /**< log10 of CDA resistances. */
    float rh_cda;
    float t_cda;
    uint32_t sample_counter;
    float tvoc_smooth;
    float tvoc_deltafilter;
    float acchw;
    float accow;
    float eco2;
    float etoh;
    float iaq;
    uint8_t need_filter_init;
} iaq_2nd_gen_handle_t;

/**
* @brief Variables that receive the algorithm outputs.
*/
typedef struct {
    float rmox[13]; /**< MOx resistance. */
    float log_rcda; /**< log10 of CDA resistance. */
    float rhtr; /**< heater resistance. */
    float temperature; /**< ambient temperature (degC). */
    float iaq; /**< IAQ index. */
    float tvoc; /**< TVOC concentration (mg/m^3). */
    float etoh; /**< EtOH concentration (ppm). */
    float eco2; /**< eCO2 concentration (ppm). */
} iaq_2nd_gen_results_t;

/**
* @brief Variables that are needed for algorithm
 * @param   [in] adc_result Value from read_adc_result function
 * @param   [in] humidity_pct relative ambient humidity (%)
 * @param   [in] temperature_degc ambient temperature (degC)
*/
typedef struct {
    uint8_t *adc_result;
    float humidity_pct;
    float temperature_degc;
} iaq_2nd_gen_inputs_t;

/**
 * @brief   calculates algorithm results from present sample.
 * @param   [in] handle Pointer to algorithm state variable.
 * @param   [in] dev Pointer to the device.
 * @param   [in] algo_input Structure containing inputs required for algo calculation.
 * @param   [out] results Pointer for storing the algorithm results.
 * @return  error code.
 */
int8_t calc_iaq_2nd_gen(iaq_2nd_gen_handle_t *handle, const zmod4xxx_dev_t *dev,
                        const iaq_2nd_gen_inputs_t *algo_input,
                        iaq_2nd_gen_results_t *results);

/**
 * @brief   Initializes the algorithm.
 * @param   [out] handle Pointer to algorithm state variable.
 * @return  error code.
*/
int8_t init_iaq_2nd_gen(iaq_2nd_gen_handle_t *handle);

#ifdef __cplusplus
}
#endif

#endif /* IAQ_2ND_GEN_H_ */

