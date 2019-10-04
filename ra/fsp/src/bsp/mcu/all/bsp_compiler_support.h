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
 * @addtogroup BSP_MCU
 * @{
 **********************************************************************************************************************/

#ifndef BSP_COMPILER_SUPPORT_H
#define BSP_COMPILER_SUPPORT_H

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/
#if   defined(__GNUC__)                /* GCC or AC6 Compiler */
 #define BSP_SECTION_HEAP                  ".heap"
 #define BSP_DONT_REMOVE
 #define BSP_ATTRIBUTE_STACKLESS           __attribute__((naked))
#elif defined(__ICCARM__)              /* IAR Compiler */
 #define BSP_SECTION_HEAP                  "HEAP"
 #define BSP_DONT_REMOVE                   __root
 #define BSP_ATTRIBUTE_STACKLESS           __stackless
#endif

#define BSP_SECTION_STACK                  ".stack"
#define BSP_SECTION_FIXED_VECTORS          ".fixed_vectors"
#define BSP_SECTION_APPLICATION_VECTORS    ".application_vectors"
#define BSP_SECTION_ROM_REGISTERS          ".rom_registers"
#define BSP_SECTION_ID_CODE                ".id_code"

/* Compiler neutral macros. */
#define BSP_PLACE_IN_SECTION(x)    __attribute__((section(x))) __attribute__((__used__))

#define BSP_ALIGN_VARIABLE(x)      __attribute__((aligned(x)))

#define BSP_PACKED             __attribute__((aligned(1)))

#define BSP_WEAK_REFERENCE     __attribute__((weak))

/** Stacks (and heap) must be sized and aligned to an integer multiple of this number. */
#define BSP_STACK_ALIGNMENT    (8)

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Exported global variables
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Exported global functions (to be accessed by other files)
 **********************************************************************************************************************/

/** @} (end of addtogroup BSP_MCU) */

#endif
