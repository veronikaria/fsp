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
 * @ingroup SCE_PROC
 * @addtogroup SCE_PROC_RSA
 * @{
 ***********************************************************************************************************************/

#ifndef HW_SCE_RSA_PRIVATE_H
#define HW_SCE_RSA_PRIVATE_H

/**********************************************************************************************************************
 * Includes
 ***********************************************************************************************************************/
#include "bsp_api.h"
#include "hw_sce_common.h"

fsp_err_t HW_SCE_RSA_2048PublicKeyEncrypt(const uint32_t * InData_Text,
                                       const uint32_t * InData_PublicKey,
                                       const uint32_t * InData_N,
                                       uint32_t       * OutData_Text);

fsp_err_t HW_SCE_RSA_2048PrivateKeyDecrypt(const uint32_t * InData_Text,
                                           const uint32_t * InData_PrivateKey,
                                           const uint32_t * InData_N,
                                           uint32_t       * OutData_Text);

fsp_err_t HW_SCE_RSA_2048PrivateCrtKeyDecrypt(const uint32_t * InData_Text,
                                              const uint32_t * InData_DomainParam,
                                              uint32_t       * OutData_Text);

fsp_err_t HW_SCE_RSA_1024PublicKeyEncrypt(const uint32_t * InData_Text,
                                       const uint32_t * InData_PublicKey,
                                       const uint32_t * InData_N,
                                       uint32_t       * OutData_Text);

fsp_err_t HW_SCE_RSA_1024PrivateKeyDecrypt(const uint32_t * InData_Text,
                                           const uint32_t * InData_PrivateKey,
                                           const uint32_t * InData_N,
                                           uint32_t       * OutData_Text);

fsp_err_t HW_SCE_RSA_1024PrivateCrtKeyDecrypt(const uint32_t * InData_Text,
                                              const uint32_t * InData_DomainParam,
                                              uint32_t       * OutData_Text);

fsp_err_t HW_SCE_RSA_2048KeyGenerate(uint32_t   num_tries,
                                     uint32_t * OutData_PrivateKey,
                                     uint32_t * OutData_N,
                                     uint32_t * OutData_DomainParam);

fsp_err_t HW_SCE_RSA_1024KeyGenerate(uint32_t   num_words,
                                     uint32_t * OutData_PrivateKey,
                                     uint32_t * OutData_N,
                                     uint32_t * OutData_DomainParam);

#endif                                 /* HW_SCE_TRNG_PRIVATE_H */

/*******************************************************************************************************************//**
 * @} (end addtogroup SCE)
 ***********************************************************************************************************************/
