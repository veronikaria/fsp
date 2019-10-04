/***********************************************************************************************************************
 * Copyright [2015] Renesas Electronics Corporation and/or its licensors. All Rights Reserved.
 *
 * This file is part of Renesas RA Flex Software Package (FSP)
 *
 * The contents of this file (the "contents") are proprietary and confidential to Renesas Electronics Corporation
 * and/or its licensors ("Renesas") and subject to statutory and contractual protections.
 *
 * This file is subject to a Renesas FSP license agreement. Unless otherwise agreed in an FSP license agreement with
 * Renesas: 1) you may not use, copy, modify, distribute, display, or perform the contents; 2) you may not use any name
 * or mark of Renesas for advertising or publicity purposes or in connection with your use of the contents; 3) RENESAS
 * MAKES NO WARRANTY OR REPRESENTATIONS ABOUT THE SUITABILITY OF THE CONTENTS FOR ANY PURPOSE; THE CONTENTS ARE PROVIDED
 * "AS IS" WITHOUT ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE, AND NON-INFRINGEMENT; AND 4) RENESAS SHALL NOT BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, OR
 * CONSEQUENTIAL DAMAGES, INCLUDING DAMAGES RESULTING FROM LOSS OF USE, DATA, OR PROJECTS, WHETHER IN AN ACTION OF
 * CONTRACT OR TORT, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THE CONTENTS. Third-party contents
 * included in this file may be subject to different terms.
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * File Name    : board.h
 * Description  : Includes and API function available for this board.
 **********************************************************************************************************************/

/*******************************************************************************************************************//**
 * @ingroup BSP_Boards
 * @defgroup BOARD_RA6M1_EK for the EK-RA6M1 Board
 * @brief BSP for the EK-RA6M1 Board
 *
 * The EK-RA6M1 is a development kit for the Renesas RA Flex RA6M1 microcontroller.
 *
 * @{
 **********************************************************************************************************************/

#ifndef BOARD_H
#define BOARD_H

/***********************************************************************************************************************
 * Includes   <System Includes> , "Project Includes"
 **********************************************************************************************************************/

/* BSP Board Specific Includes. */
#include "board_init.h"
#include "board_leds.h"

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/
#define BOARD_RA6M1_EK

/* Except for BSP_CLOCK_CFG_SUBCLOCK_POPULATED, these are just default settings, not based on the board design. */
#define BSP_CLOCK_CFG_MAIN_OSC_WAIT                (9)
#define BSP_CLOCK_CFG_MAIN_OSC_CLOCK_SOURCE        (0)
#define BSP_CLOCK_CFG_SUBCLOCK_POPULATED           (1)
#define BSP_CLOCK_CFG_SUBCLOCK_DRIVE               (0)
#define BSP_CLOCK_CFG_SUBCLOCK_STABILIZATION_MS    (1000U)

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Exported global variables
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Exported global functions (to be accessed by other files)
 **********************************************************************************************************************/

/** @} (end defgroup BOARD_RA6M1_EK) */

#endif
