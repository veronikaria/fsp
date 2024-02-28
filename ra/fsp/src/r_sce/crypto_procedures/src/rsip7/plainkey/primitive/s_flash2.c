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

#include "hw_sce_ra_private.h"

uint32_t const S_FLASH2[] =
 {
#ifndef __ARMEB__   /* Little endian */

    0xc5ec05a5, 0xc8ca236c, 0xc44ad334, 0x7e02d9e1,
    0xf4400e92, 0x946e7917, 0x6c48056d, 0x91dc38dd,
    0xf863d885, 0x3f3b5872, 0x163e495b, 0x7bcbd88f,
    0xd679aa1d, 0x67e38d5f, 0x73ff9fb5, 0x12afb738,
    0x5164cae7, 0xdadbbfdd, 0x1c090801, 0xb01f0939,
    0x6c02a2a3, 0xecf004a3, 0x3b7a9a41, 0x15a1721a,
    0x4566d9e3, 0x8585af51, 0x132a82a9, 0x75c1d73e,
    0x59367cda, 0x1b6e3d41, 0x21185036, 0x45a3869d,
    0x4d89b4d0, 0x0c252e62, 0xb1f775e0, 0x25fe6461,
    0x6ea557ca, 0x72de24da, 0x7afe7167, 0xf903c177,
    0xfb3b5df6, 0x53ae314e, 0x12b3c269, 0x410530f9,
    0xefb12775, 0xd9f9b5a8, 0xc65bb923, 0x974a487a,
    0x8f22da37, 0x7a5e01b4, 0x62fa524f, 0x52935264,
    0x33566bf9, 0x81cdadf8, 0x486aca16, 0x44c554a8,
    0x29154ec7, 0xda27a364, 0x5572e97c, 0x6ba66481,
    0x444a0976, 0x31fddee2, 0xc83d9f6b, 0xdf64aba6,
    0xf1899c17, 0x0f5ac882, 0x14fef665, 0xadc18fd5,
    0x12c87422, 0xd46b3903, 0x27d81e56, 0xb2152aa1,
    0x8c125d4e, 0x50c9789f, 0x58cfa12c, 0xd9d713fd,
    0x0a7eadbd, 0xa8ec8502, 0x2c4c2782, 0xd6ab6211,
    0x26ffd388, 0x9e32fc4e, 0x907b3da4, 0xd2da4a5e,
    0x1852d599, 0xe275c3cb, 0x0199c46d, 0x84362043,
    0xb943e1c1, 0x07caf7fd, 0xd1e76143, 0x69f45753,
    0x3ed9e32f, 0x094a146d, 0x350d62cd, 0x0e4e82ec,
    0x046a72ad, 0x260a7cfe, 0xcf1b1b01, 0x0c47e3b7,
    0x39d8b04d, 0x12b7f841, 0xdb817c0b, 0xf6eddea9,
    0x5ae7e99a, 0x6b14bcff, 0xa218a9d3, 0x26ddce0e,
    0xa181cf83, 0xf397776d, 0xcd658f3d, 0x2dc20acd,
    0x1cdadd8f, 0xc3162f29, 0x0c2e8ea5, 0x68ac7a34,
    0x907be502, 0x30e36c33, 0x2be0152c, 0x07313162,
    0x4aa04ea1, 0x41ab4f70, 0xf081c972, 0x40236060,
    0x8e12abf4, 0x87011de0, 0x23e9a233, 0x69196db9,

#else               /* Big endian */
    0xa505ecc5, 0x6c23cac8, 0x34d34ac4, 0xe1d9027e,
    0x920e40f4, 0x17796e94, 0x6d05486c, 0xdd38dc91,
    0x85d863f8, 0x72583b3f, 0x5b493e16, 0x8fd8cb7b,
    0x1daa79d6, 0x5f8de367, 0xb59fff73, 0x38b7af12,
    0xe7ca6451, 0xddbfdbda, 0x0108091c, 0x39091fb0,
    0xa3a2026c, 0xa304f0ec, 0x419a7a3b, 0x1a72a115,
    0xe3d96645, 0x51af8585, 0xa9822a13, 0x3ed7c175,
    0xda7c3659, 0x413d6e1b, 0x36501821, 0x9d86a345,
    0xd0b4894d, 0x622e250c, 0xe075f7b1, 0x6164fe25,
    0xca57a56e, 0xda24de72, 0x6771fe7a, 0x77c103f9,
    0xf65d3bfb, 0x4e31ae53, 0x69c2b312, 0xf9300541,
    0x7527b1ef, 0xa8b5f9d9, 0x23b95bc6, 0x7a484a97,
    0x37da228f, 0xb4015e7a, 0x4f52fa62, 0x64529352,
    0xf96b5633, 0xf8adcd81, 0x16ca6a48, 0xa854c544,
    0xc74e1529, 0x64a327da, 0x7ce97255, 0x8164a66b,
    0x76094a44, 0xe2defd31, 0x6b9f3dc8, 0xa6ab64df,
    0x179c89f1, 0x82c85a0f, 0x65f6fe14, 0xd58fc1ad,
    0x2274c812, 0x03396bd4, 0x561ed827, 0xa12a15b2,
    0x4e5d128c, 0x9f78c950, 0x2ca1cf58, 0xfd13d7d9,
    0xbdad7e0a, 0x0285eca8, 0x82274c2c, 0x1162abd6,
    0x88d3ff26, 0x4efc329e, 0xa43d7b90, 0x5e4adad2,
    0x99d55218, 0xcbc375e2, 0x6dc49901, 0x43203684,
    0xc1e143b9, 0xfdf7ca07, 0x4361e7d1, 0x5357f469,
    0x2fe3d93e, 0x6d144a09, 0xcd620d35, 0xec824e0e,
    0xad726a04, 0xfe7c0a26, 0x011b1bcf, 0xb7e3470c,
    0x4db0d839, 0x41f8b712, 0x0b7c81db, 0xa9deedf6,
    0x9ae9e75a, 0xffbc146b, 0xd3a918a2, 0x0ecedd26,
    0x83cf81a1, 0x6d7797f3, 0x3d8f65cd, 0xcd0ac22d,
    0x8fddda1c, 0x292f16c3, 0xa58e2e0c, 0x347aac68,
    0x02e57b90, 0x336ce330, 0x2c15e02b, 0x62313107,
    0xa14ea04a, 0x704fab41, 0x72c981f0, 0x60602340,
    0xf4ab128e, 0xe01d0187, 0x33a2e923, 0xb96d1969,
#endif  /* defined __ARMEB__ */
};

