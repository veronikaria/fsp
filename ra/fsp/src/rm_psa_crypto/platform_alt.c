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

#if !defined(MBEDTLS_CONFIG_FILE)
 #include "mbedtls/config.h"
#else
 #include MBEDTLS_CONFIG_FILE
#endif

#if defined(MBEDTLS_PLATFORM_SETUP_TEARDOWN_ALT)
 #include "platform.h"
 #include "hw_sce_private.h"

 #if defined(RM_PSA_CRYPTO_BIG_ENDIAN)
  #error "Big endian not supported in current HW accelerator code"
 #endif

/*******************************************************************************************************************//**
 * @addtogroup RM_PSA_CRYPTO 
 * @{
 **********************************************************************************************************************/
/*******************************************************************************************************************//**
 * Initializes the SCE. Implements mbedtls_platform_setup function.
 *
 * Example:
 * @snippet rm_psa_crypto_example.c PSA_CRYPTO-SHA256
 *
 * @retval 0                             Initialization was successful.
 * @retval MBEDTLS_ERR_PLATFORM_HW_ACCEL_FAILED    SCE Initialization error.
 **********************************************************************************************************************/
int mbedtls_platform_setup( mbedtls_platform_context *ctx )
{
    (void) ctx;

    uint32_t iret = FSP_ERR_CRYPTO_SCE_FAIL;

    // power on the SCE module
    HW_SCE_PowerOn();

    HW_SCE_SoftReset();
    iret = HW_SCE_Initialization1();

    if (FSP_SUCCESS == iret)
    {
        iret = HW_SCE_Initialization2();
        if (FSP_SUCCESS == iret)
        {
            iret = HW_SCE_secureBoot();
        }
    }

    if (FSP_SUCCESS == iret)
    {
 #if defined(RM_PSA_CRYPTO_BIG_ENDIAN)
        HW_SCE_EndianSetBig();
 #else
        HW_SCE_EndianSetLittle();
 #endif
    }

    if (iret != FSP_SUCCESS)
    {
        return (MBEDTLS_ERR_PLATFORM_HW_ACCEL_FAILED);
    }

    return 0;
}

/*******************************************************************************************************************//**
 * This is a placeholder function. Implements mbedtls_platform_teardown function.
 *
 * Example:
 * @snippet rm_psa_crypto_example.c PSA_CRYPTO-SHA256
 *
 * @retval  N/A
 **********************************************************************************************************************/
void mbedtls_platform_teardown( mbedtls_platform_context *ctx )
{
    (void) ctx;

    // Nothing to do to close the SCE
    // Nothing to do to close the TRNG
}

/*******************************************************************************************************************//**
 * @} (end addtogroup RM_PSA_CRYPTO)
 **********************************************************************************************************************/

#endif  /* MBEDTLS_PLATFORM_SETUP_TEARDOWN_ALT */

