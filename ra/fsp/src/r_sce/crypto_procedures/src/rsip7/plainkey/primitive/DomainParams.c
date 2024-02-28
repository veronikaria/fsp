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

uint32_t const DomainParam_NIST_P192[] =
{
#ifndef __ARMEB__   /* Little endian */
    0x6b27a0a2, 0x06c30ad0, 0xbc4488f8, 0x85ba9523, 
    0xa4bbc7ab, 0x54e55344, 0x046b2e6d, 0x3d0a9d4a,
    0x0f028c91, 0x82829d85, 0xea1bb2b3, 0xd066ab69,
    0x0626118c, 0x2b92d309, 0xf839aba7, 0xf9707a09,
    0xa958657d, 0x8d1c4bd7, 0x161330fb, 0xdae35b80,
    0xb9d1468c, 0xe256973a, 0x81151c52, 0x67ea2f7e,
    0xbe73b2ad, 0x998c32e5, 0x165ed2c3, 0xe2906b51,
    0x22c391c6, 0x6f72b24a, 0x91f2995a, 0x787f505b,
    0x4e60be80, 0x76d83d97, 0xbf096ed7, 0x84b0c455,
    0x2deea5b0, 0x717eccc3, 0x556cdc2e, 0xd16d8d63,
    0xcf37deb5, 0xb27afc09, 0xfdbdd1f3, 0xfc2d5241,
    0x7472f9fb, 0xe02a83b6, 0xae6e1d1b, 0xefb10c9d,
    0xef71e35b, 0x27028987, 0x4faddb26, 0x3dfdc2c9,
    0x844b666a, 0xbbe7e5f9, 0xa4bd432d, 0xcb03c2b7,
    0xea674d4c, 0xce4c1bef, 0xb960a15c, 0x634ac15e,
    0x141d4c99, 0x4a1d2fe8, 0xee41186e, 0xbbfec82c,
    0x268a8c09, 0x8fe242f3, 0x8e69b6bb, 0x59abb962,
    0x9d807b9c, 0x49255edd, 0x07cbf040, 0x897de163

#else               /* Big endian */
    0xa2a0276b, 0xd00ac306, 0xf88844bc, 0x2395ba85, 
    0xabc7bba4, 0x4453e554, 0x6d2e6b04, 0x4a9d0a3d,
    0x918c020f, 0x859d8282, 0xb3b21bea, 0x69ab66d0,
    0x8c112606, 0x09d3922b, 0xa7ab39f8, 0x097a70f9,
    0x7d6558a9, 0xd74b1c8d, 0xfb301316, 0x805be3da,
    0x8c46d1b9, 0x3a9756e2, 0x521c1581, 0x7e2fea67,
    0xadb273be, 0xe5328c99, 0xc3d25e16, 0x516b90e2,
    0xc691c322, 0x4ab2726f, 0x5a99f291, 0x5b507f78,
    0x80be604e, 0x973dd876, 0xd76e09bf, 0x55c4b084,
    0xb0a5ee2d, 0xc3cc7e71, 0x2edc6c55, 0x638d6dd1,
    0xb5de37cf, 0x09fc7ab2, 0xf3d1bdfd, 0x41522dfc,
    0xfbf97274, 0xb6832ae0, 0x1b1d6eae, 0x9d0cb1ef,
    0x5be371ef, 0x87890227, 0x26dbad4f, 0xc9c2fd3d,
    0x6a664b84, 0xf9e5e7bb, 0x2d43bda4, 0xb7c203cb,
    0x4c4d67ea, 0xef1b4cce, 0x5ca160b9, 0x5ec14a63,
    0x994c1d14, 0xe82f1d4a, 0x6e1841ee, 0x2cc8febb,
    0x098c8a26, 0xf342e28f, 0xbbb6698e, 0x62b9ab59,
    0x9c7b809d, 0xdd5e2549, 0x40f0cb07, 0x63e17d89
#endif  /* defined __ARMEB__ */
};

uint32_t const DomainParam_NIST_P224[] =
{
#ifndef __ARMEB__   /* Little endian */
    0xe9be3802, 0x90796634, 0xcffeb5da, 0x0fc3a8ad, 
    0x1d343257, 0xc287c137, 0xe454ad5c, 0x22dc184a,
    0x8d004fb8, 0xbf351b1a, 0xe2b495bb, 0x7ad715ec,
    0xbcf2626b, 0x63d000fb, 0x55df8518, 0x5498af42,
    0x9576e995, 0x93dc9c6d, 0x02f0a5fb, 0xd02c362f,
    0x4080199d, 0x6e000422, 0xf6d5cdf8, 0x1823883d,
    0xa5aeb6e8, 0x4aae7d06, 0xac1a7a81, 0x057daf57,
    0x8a59c175, 0x1ec74c3a, 0xdeb98b1e, 0xd0c81758,
    0x6b9f371b, 0x051038ca, 0xdcdf6141, 0x41afd3e5,
    0x4eb7eb28, 0x2e6db21e, 0x84ba2871, 0xf23f18b1,
    0xa61aa210, 0xf5da7d15, 0x74e610fe, 0x62643380,
    0x30337d81, 0x83fa408e, 0x11ba665e, 0x570b5820,
    0x544e3bd9, 0x94c4b5ea, 0x1248124f, 0xffb700b7,
    0xf652b383, 0x94e6752a, 0x34a2b6fe, 0x56d44674,
    0x35f81c5f, 0x4b341590, 0x1e05b531, 0x733dc637,
    0xe94070ab, 0x0711157a, 0x3510f6f5, 0xd278861e,
    0x2dd16729, 0xcb1506e9, 0xf9fc19bd, 0xe254035f,
    0xa331c089, 0xebebe6ba, 0x1ef423f2, 0x84f0d6a5

#else               /* Big endian */
    0x0238bee9, 0x34667990, 0xdab5fecf, 0xada8c30f, 
    0x5732341d, 0x37c187c2, 0x5cad54e4, 0x4a18dc22,
    0xb84f008d, 0x1a1b35bf, 0xbb95b4e2, 0xec15d77a,
    0x6b62f2bc, 0xfb00d063, 0x1885df55, 0x42af9854,
    0x95e97695, 0x6d9cdc93, 0xfba5f002, 0x2f362cd0,
    0x9d198040, 0x2204006e, 0xf8cdd5f6, 0x3d882318,
    0xe8b6aea5, 0x067dae4a, 0x817a1aac, 0x57af7d05,
    0x75c1598a, 0x3a4cc71e, 0x1e8bb9de, 0x5817c8d0,
    0x1b379f6b, 0xca381005, 0x4161dfdc, 0xe5d3af41,
    0x28ebb74e, 0x1eb26d2e, 0x7128ba84, 0xb1183ff2,
    0x10a21aa6, 0x157ddaf5, 0xfe10e674, 0x80336462,
    0x817d3330, 0x8e40fa83, 0x5e66ba11, 0x20580b57,
    0xd93b4e54, 0xeab5c494, 0x4f124812, 0xb700b7ff,
    0x83b352f6, 0x2a75e694, 0xfeb6a234, 0x7446d456,
    0x5f1cf835, 0x9015344b, 0x31b5051e, 0x37c63d73,
    0xab7040e9, 0x7a151107, 0xf5f61035, 0x1e8678d2,
    0x2967d12d, 0xe90615cb, 0xbd19fcf9, 0x5f0354e2,
    0x89c031a3, 0xbae6ebeb, 0xf223f41e, 0xa5d6f084
#endif  /* defined __ARMEB__ */
};

uint32_t const DomainParam_NIST_P256[] =
{
#ifndef __ARMEB__   /* Little endian */
    0xee730d17, 0x4f76f309, 0x230a4ed3, 0x762fc229, 
    0x81f05cff, 0x158bf887, 0xeb797082, 0xcdc4b233,
    0x2a95bcc6, 0xca31ae95, 0xa08b0641, 0xf7afd5c3,
    0xe897fe64, 0x8f4b6700, 0xbdc16cb3, 0xcbd1f21c,
    0x010dc4db, 0x7564ee3c, 0x4f72e548, 0x2eb570be,
    0xb9a591cd, 0xb0464c00, 0x403a220e, 0xdba99ade,
    0xde2f3296, 0xf52435ec, 0xf1cad50f, 0xab7f1d23,
    0xd5b39959, 0x386e283c, 0xa05b3100, 0x4fbe5996,
    0xbb843f3e, 0xb5201b7f, 0x58128d14, 0x76dc989a,
    0xe22cb087, 0x5e35abff, 0x4e78da65, 0x9b52b9d3,
    0xdfaab4ec, 0x88fc21b3, 0x962c95db, 0x57f03c10,
    0x715b215b, 0xb21e8b61, 0x33e407c4, 0xbb47e2ad,
    0x00f66ba8, 0x6d9938a2, 0x8a5a2463, 0x533c8f1b,
    0x29a86ded, 0x3f9db30c, 0xad4d6c99, 0xdd49bbde,
    0xf2c5f2e1, 0xdfdabd6d, 0x7f2c0b19, 0xcc530e26,
    0xd6cc02da, 0x9be9c049, 0x32696ef0, 0x10249045,
    0x740358e3, 0x5e5897b9, 0xfde98d91, 0x6fb03f8b,
    0x00ed5554, 0x32682ea8, 0x7a4f8c67, 0x278298b2

#else               /* Big endian */
    0x170d73ee, 0x09f3764f, 0xd34e0a23, 0x29c22f76, 
    0xff5cf081, 0x87f88b15, 0x827079eb, 0x33b2c4cd,
    0xc6bc952a, 0x95ae31ca, 0x41068ba0, 0xc3d5aff7,
    0x64fe97e8, 0x00674b8f, 0xb36cc1bd, 0x1cf2d1cb,
    0xdbc40d01, 0x3cee6475, 0x48e5724f, 0xbe70b52e,
    0xcd91a5b9, 0x004c46b0, 0x0e223a40, 0xde9aa9db,
    0x96322fde, 0xec3524f5, 0x0fd5caf1, 0x231d7fab,
    0x5999b3d5, 0x3c286e38, 0x00315ba0, 0x9659be4f,
    0x3e3f84bb, 0x7f1b20b5, 0x148d1258, 0x9a98dc76,
    0x87b02ce2, 0xffab355e, 0x65da784e, 0xd3b9529b,
    0xecb4aadf, 0xb321fc88, 0xdb952c96, 0x103cf057,
    0x5b215b71, 0x618b1eb2, 0xc407e433, 0xade247bb,
    0xa86bf600, 0xa238996d, 0x63245a8a, 0x1b8f3c53,
    0xed6da829, 0x0cb39d3f, 0x996c4dad, 0xdebb49dd,
    0xe1f2c5f2, 0x6dbddadf, 0x190b2c7f, 0x260e53cc,
    0xda02ccd6, 0x49c0e99b, 0xf06e6932, 0x45902410,
    0xe3580374, 0xb997585e, 0x918de9fd, 0x8b3fb06f,
    0x5455ed00, 0xa82e6832, 0x678c4f7a, 0xb2988227
#endif  /* defined __ARMEB__ */
};

uint32_t const DomainParam_NIST_P384[] =
{
#ifndef __ARMEB__   /* Little endian */
    0x11296620, 0x37d2d827, 0x832f6bb8, 0x851b9fda, 
    0xac78c049, 0x4741660c, 0x2562c4c7, 0x8d6084fd,
    0x49cd08e4, 0x5216df79, 0x90ab8ac8, 0x75f11260,
    0xa4479a71, 0x30f1c0dd, 0xd4fd02ef, 0x7c6261f4,
    0x481f0394, 0x1dd3e399, 0x8d186637, 0xb80b74b5,
    0x7779c554, 0x3e528b01, 0x6833a961, 0x8a606c5f,
    0x4c69b595, 0xa4460ee7, 0xf9b90146, 0xe39f674e,
    0x33eb34fa, 0xc9671029, 0xa1cbd84b, 0x13414da3,
    0xb737ca61, 0xd6b9350a, 0xe7304d09, 0xe3e8fbae,
    0x63dc5e6d, 0x76257731, 0x5e80208f, 0x476b22e5,
    0xf8ac2367, 0xeadd85f3, 0x5d571889, 0x982f7132,
    0xebfc9ac8, 0xf214633a, 0xb023efb7, 0x952b4086,
    0xb886c81c, 0xd255f5d0, 0x41f08f64, 0x5e218efd,
    0x3116a9f2, 0x9dea7e8b, 0x26f6b324, 0x5b497baa,
    0x6370fd01, 0xe490f76d, 0x78481f39, 0xf5da7981,
    0x37268740, 0xb4403434, 0x044a6553, 0x5fdafee8,
    0xd9410ec2, 0xf719a281, 0x0ea4a312, 0x99686113,
    0xd3ec543c, 0x50ec7001, 0x10157efd, 0xee2f670a,
    0xbafc17e1, 0x3d18ddcb, 0xe245b888, 0x14e97e11,
    0xd62931eb, 0x95bc0362, 0x84c8c67b, 0xfec11642,
    0x76ba2423, 0xc6b26d69, 0xd8d5f21f, 0xe8d5c5d4,
    0x32e59438, 0xd53cd657, 0xaac468e3, 0x195cedd2,
    0xb6308766, 0xb248621e, 0x58ceb77f, 0x95091c29,
    0x783a0d93, 0xd1b7bf05, 0xfad79ca2, 0xb345de4f,
    0xccb9b316, 0x29100335, 0x579e38c3, 0x8d8d9792,
    0x49885605, 0xa925977c, 0x9233ce16, 0x8e216279

#else               /* Big endian */
    0x20662911, 0x27d8d237, 0xb86b2f83, 0xda9f1b85, 
    0x49c078ac, 0x0c664147, 0xc7c46225, 0xfd84608d,
    0xe408cd49, 0x79df1652, 0xc88aab90, 0x6012f175,
    0x719a47a4, 0xddc0f130, 0xef02fdd4, 0xf461627c,
    0x94031f48, 0x99e3d31d, 0x3766188d, 0xb5740bb8,
    0x54c57977, 0x018b523e, 0x61a93368, 0x5f6c608a,
    0x95b5694c, 0xe70e46a4, 0x4601b9f9, 0x4e679fe3,
    0xfa34eb33, 0x291067c9, 0x4bd8cba1, 0xa34d4113,
    0x61ca37b7, 0x0a35b9d6, 0x094d30e7, 0xaefbe8e3,
    0x6d5edc63, 0x31772576, 0x8f20805e, 0xe5226b47,
    0x6723acf8, 0xf385ddea, 0x8918575d, 0x32712f98,
    0xc89afceb, 0x3a6314f2, 0xb7ef23b0, 0x86402b95,
    0x1cc886b8, 0xd0f555d2, 0x648ff041, 0xfd8e215e,
    0xf2a91631, 0x8b7eea9d, 0x24b3f626, 0xaa7b495b,
    0x01fd7063, 0x6df790e4, 0x391f4878, 0x8179daf5,
    0x40872637, 0x343440b4, 0x53654a04, 0xe8feda5f,
    0xc20e41d9, 0x81a219f7, 0x12a3a40e, 0x13616899,
    0x3c54ecd3, 0x0170ec50, 0xfd7e1510, 0x0a672fee,
    0xe117fcba, 0xcbdd183d, 0x88b845e2, 0x117ee914,
    0xeb3129d6, 0x6203bc95, 0x7bc6c884, 0x4216c1fe,
    0x2324ba76, 0x696db2c6, 0x1ff2d5d8, 0xd4c5d5e8,
    0x3894e532, 0x57d63cd5, 0xe368c4aa, 0xd2ed5c19,
    0x668730b6, 0x1e6248b2, 0x7fb7ce58, 0x291c0995,
    0x930d3a78, 0x05bfb7d1, 0xa29cd7fa, 0x4fde45b3,
    0x16b3b9cc, 0x35031029, 0xc3389e57, 0x92978d8d,
    0x05568849, 0x7c9725a9, 0x16ce3392, 0x7962218e
#endif  /* defined __ARMEB__ */
};

uint32_t const DomainParam_NIST_P521[] =
{
#ifndef __ARMEB__   /* Little endian */
    0xbb2dacbf, 0x5bebd870, 0x7cb24760, 0x549d633a, 
    0x0f4c3073, 0x5b291739, 0x2898f98e, 0x9da196d6,
    0x99e2ceed, 0xe73d2862, 0xc1b888b7, 0xcc7a4be7,
    0x9533d4b0, 0x743c4b0e, 0xbd956640, 0x5f4bee9c,
    0x52c7e7f6, 0xe7939211, 0x02adf5bd, 0xeb7474cc,
    0x2595d910, 0xe5bb3450, 0xe9ef73e4, 0xfdee31f9,
    0xc9fc4af9, 0x73c6146e, 0x114a1886, 0x951ffda8,
    0x47527801, 0x4c6d7318, 0x04084f88, 0x9cd54119,
    0xe338b72c, 0xeecbef0a, 0x3b239d1d, 0x90fb59fc,
    0x3a34983c, 0x0399530f, 0x8082622e, 0x3f88b59c,
    0x7d42358c, 0xd49a0b4e, 0xbd6448c6, 0x12790e7a,
    0x14a1289f, 0x4a9254e0, 0x8dce08db, 0xe028f15c,
    0x92bfc22d, 0x7126b931, 0xa20e4b32, 0x3d4490a1,
    0xd2782790, 0x9ba62cd5, 0x412c5365, 0xd4da688b,
    0xebe54bbe, 0x2072bbfb, 0xe3b9f9aa, 0xc74eaa7e,
    0x11686f30, 0xd16b5eea, 0x101e34a9, 0xad67eaeb,
    0xf4270864, 0xec48dbd5, 0xd721d62f, 0x825dac1d,
    0x1d47483e, 0x1b77d264, 0xe8a377e7, 0xf87f5507,
    0x1f86b80e, 0x5e7a72aa, 0x0590c0cc, 0x880671ca,
    0x74cbe820, 0x515a490f, 0xe84f0908, 0x680c4d66,
    0x48ab1a6d, 0xee76c420, 0x5167b090, 0x22edd2a2,
    0xe7cbd936, 0x067475a0, 0xed376b1d, 0xa27789ef,
    0x6d0e3287, 0x3378e79f, 0x75eec67c, 0xd8763174,
    0x457722c3, 0x0c24138c, 0xaf6a5b6a, 0x18de8027,
    0x8b4aab64, 0x8f941c60, 0x86e1139c, 0xbf933f85,
    0x320f7acb, 0xa2f15469, 0x920bac0b, 0x767525e4,
    0x442c7330, 0x019b4724, 0x021fdb7e, 0x4dd8eb46,
    0x6cfbfcb7, 0x6ccc49eb, 0x62fa83a4, 0xce0001ac,
    0x25e8d0d2, 0x3f13db90, 0x436d0158, 0x28af7681,
    0xe823940b, 0xb0ab1540, 0x4cf64341, 0x632e81aa,
    0x1e0fa8f4, 0xfbfe12c3, 0x19ff0563, 0xb8a8da95,
    0xc72db188, 0x97cdc50e, 0x0b4fa832, 0x4e701009,
    0x13b707a0, 0x14b608b4, 0x33304e41, 0xc935ae8b,
    0x57f495f1, 0x850b3117, 0x25d217b6, 0x38b9f25e,
    0x87c6abad, 0x3c5d1438, 0x24fe34a6, 0xc3a9edae,
    0xa3274c62, 0x7ac0fdd2, 0xc17a551d, 0x75cc9499,
    0x34b9fac9, 0x344835af, 0x098d8328, 0x1ea621cc,
    0xc23e2822, 0xc227d7ca, 0x9220c07c, 0xa6f83db4,
    0x95c0f54d, 0x4ec39d38, 0x2796dbc1, 0x8ee3a2bb,
    0xe9be030b, 0x664319d0, 0x46fa2f02, 0x2c777f4a,
    0x17d50776, 0xf24d9bd5, 0xc8ef9a1b, 0x5a7a4209,
    0xbf6a8d1a, 0xe662c92c, 0x0f9a0d4e, 0xcd550b8a

#else               /* Big endian */
    0xbfac2dbb, 0x70d8eb5b, 0x6047b27c, 0x3a639d54, 
    0x73304c0f, 0x3917295b, 0x8ef99828, 0xd696a19d,
    0xedcee299, 0x62283de7, 0xb788b8c1, 0xe74b7acc,
    0xb0d43395, 0x0e4b3c74, 0x406695bd, 0x9cee4b5f,
    0xf6e7c752, 0x119293e7, 0xbdf5ad02, 0xcc7474eb,
    0x10d99525, 0x5034bbe5, 0xe473efe9, 0xf931eefd,
    0xf94afcc9, 0x6e14c673, 0x86184a11, 0xa8fd1f95,
    0x01785247, 0x18736d4c, 0x884f0804, 0x1941d59c,
    0x2cb738e3, 0x0aefcbee, 0x1d9d233b, 0xfc59fb90,
    0x3c98343a, 0x0f539903, 0x2e628280, 0x9cb5883f,
    0x8c35427d, 0x4e0b9ad4, 0xc64864bd, 0x7a0e7912,
    0x9f28a114, 0xe054924a, 0xdb08ce8d, 0x5cf128e0,
    0x2dc2bf92, 0x31b92671, 0x324b0ea2, 0xa190443d,
    0x902778d2, 0xd52ca69b, 0x65532c41, 0x8b68dad4,
    0xbe4be5eb, 0xfbbb7220, 0xaaf9b9e3, 0x7eaa4ec7,
    0x306f6811, 0xea5e6bd1, 0xa9341e10, 0xebea67ad,
    0x640827f4, 0xd5db48ec, 0x2fd621d7, 0x1dac5d82,
    0x3e48471d, 0x64d2771b, 0xe777a3e8, 0x07557ff8,
    0x0eb8861f, 0xaa727a5e, 0xccc09005, 0xca710688,
    0x20e8cb74, 0x0f495a51, 0x08094fe8, 0x664d0c68,
    0x6d1aab48, 0x20c476ee, 0x90b06751, 0xa2d2ed22,
    0x36d9cbe7, 0xa0757406, 0x1d6b37ed, 0xef8977a2,
    0x87320e6d, 0x9fe77833, 0x7cc6ee75, 0x743176d8,
    0xc3227745, 0x8c13240c, 0x6a5b6aaf, 0x2780de18,
    0x64ab4a8b, 0x601c948f, 0x9c13e186, 0x853f93bf,
    0xcb7a0f32, 0x6954f1a2, 0x0bac0b92, 0xe4257576,
    0x30732c44, 0x24479b01, 0x7edb1f02, 0x46ebd84d,
    0xb7fcfb6c, 0xeb49cc6c, 0xa483fa62, 0xac0100ce,
    0xd2d0e825, 0x90db133f, 0x58016d43, 0x8176af28,
    0x0b9423e8, 0x4015abb0, 0x4143f64c, 0xaa812e63,
    0xf4a80f1e, 0xc312fefb, 0x6305ff19, 0x95daa8b8,
    0x88b12dc7, 0x0ec5cd97, 0x32a84f0b, 0x0910704e,
    0xa007b713, 0xb408b614, 0x414e3033, 0x8bae35c9,
    0xf195f457, 0x17310b85, 0xb617d225, 0x5ef2b938,
    0xadabc687, 0x38145d3c, 0xa634fe24, 0xaeeda9c3,
    0x624c27a3, 0xd2fdc07a, 0x1d557ac1, 0x9994cc75,
    0xc9fab934, 0xaf354834, 0x28838d09, 0xcc21a61e,
    0x22283ec2, 0xcad727c2, 0x7cc02092, 0xb43df8a6,
    0x4df5c095, 0x389dc34e, 0xc1db9627, 0xbba2e38e,
    0x0b03bee9, 0xd0194366, 0x022ffa46, 0x4a7f772c,
    0x7607d517, 0xd59b4df2, 0x1b9aefc8, 0x09427a5a,
    0x1a8d6abf, 0x2cc962e6, 0x4e0d9a0f, 0x8a0b55cd
#endif  /* defined __ARMEB__ */
};

uint32_t const DomainParam_NIST_Ed25519[] =
{
#ifndef __ARMEB__   /* Little endian */
    0x8a5168e3, 0x1f15bfb2, 0xc6058792, 0xa566131b,  
    0xb1227aec, 0x7369ceb9, 0xa4507daa, 0x5906f0b2,
    0x4e5bfa64, 0x3f0bf39d, 0x957795e6, 0xa92f7fba,
    0x64f39eeb, 0x56ffee6c, 0x59c6c52c, 0x06b8166f,
    0x9a5f30a0, 0xfbcc7f32, 0x6d6e5e18, 0xb2395952,
    0xfc250f89, 0x8841a96e, 0x269f5e10, 0xa8fa36fc,
    0xcec9308d, 0x8f39d79f, 0x00067775, 0x11807349,
    0xb2c2c1f8, 0xd2466dbf, 0x3edacc6b, 0x40357b3f,
    0xcfff52e2, 0x7b54ec71, 0x4c117868, 0xe647bdf1,
    0x75fb886a, 0x4099ef27, 0x02bce13e, 0x35c81aa2,
    0x6c693185, 0xb21794b7, 0x499d36b9, 0x584bd342,
    0x25e09886, 0x22e9d319, 0xd792573f, 0xfdae3a22,
    0xa73e3a7d, 0x840f34fe, 0x2ed895bf, 0x7d3eaf97,
    0x86c47e32, 0x51f5a045, 0x61c7ffab, 0x8562cd9f,
    0xe5209ccf, 0x631029fe, 0xa1617eae, 0x43b0c7b3,
    0xe2a1f52a, 0x6148da3d, 0xae933aa4, 0x4dc39302,
    0x1db2274a, 0xdf7d09ac, 0x164fc2f4, 0x41ee7a2e,
    0x1fbcce15, 0x102e106a, 0x133ceec2, 0xf6cc8102,
    0x65084667, 0x3c5e690e, 0x8a8f587b, 0x9811f94b

#else               /* Big endian */
    0xe368518a, 0xb2bf151f, 0x928705c6, 0x1b1366a5,  
    0xec7a22b1, 0xb9ce6973, 0xaa7d50a4, 0xb2f00659,
    0x64fa5b4e, 0x9df30b3f, 0xe6957795, 0xba7f2fa9,
    0xeb9ef364, 0x6ceeff56, 0x2cc5c659, 0x6f16b806,
    0xa0305f9a, 0x327fccfb, 0x185e6e6d, 0x525939b2,
    0x890f25fc, 0x6ea94188, 0x105e9f26, 0xfc36faa8,
    0x8d30c9ce, 0x9fd7398f, 0x75770600, 0x49738011,
    0xf8c1c2b2, 0xbf6d46d2, 0x6bccda3e, 0x3f7b3540,
    0xe252ffcf, 0x71ec547b, 0x6878114c, 0xf1bd47e6,
    0x6a88fb75, 0x27ef9940, 0x3ee1bc02, 0xa21ac835,
    0x8531696c, 0xb79417b2, 0xb9369d49, 0x42d34b58,
    0x8698e025, 0x19d3e922, 0x3f5792d7, 0x223aaefd,
    0x7d3a3ea7, 0xfe340f84, 0xbf95d82e, 0x97af3e7d,
    0x327ec486, 0x45a0f551, 0xabffc761, 0x9fcd6285,
    0xcf9c20e5, 0xfe291063, 0xae7e61a1, 0xb3c7b043,
    0x2af5a1e2, 0x3dda4861, 0xa43a93ae, 0x0293c34d,
    0x4a27b21d, 0xac097ddf, 0xf4c24f16, 0x2e7aee41,
    0x15cebc1f, 0x6a102e10, 0xc2ee3c13, 0x0281ccf6,
    0x67460865, 0x0e695e3c, 0x7b588f8a, 0x4bf91198
#endif  /* defined __ARMEB__ */
};

uint32_t const DomainParam_Brainpool_256r1[] =
{
#ifndef __ARMEB__   /* Little endian */
    0xd43432bd, 0x5fb5391b, 0x77b3ee64, 0x993475b2, 
    0xacd60cfe, 0x5d29b7a4, 0xfcd90541, 0x1bd605cc,
    0x644818e9, 0x3c70f039, 0x95b6c48f, 0xbc996b75,
    0xe0d26366, 0xbf745df8, 0x5b25ac82, 0x97fb1f3c,
    0x12278a9a, 0xf6468512, 0x19302bac, 0xe40dbc1d,
    0x3000f8af, 0x29e72ce0, 0x94473f6c, 0xfc953c2b,
    0x2e510d85, 0x854ee094, 0x1ff29d32, 0x273ee4a2,
    0x6a8a3111, 0x90081e2d, 0xba4cf2fb, 0x09787a35,
    0x0eac960c, 0x26c72a4d, 0x215fc5f4, 0xeb7cdaa6,
    0xf9f12153, 0xe2612ad4, 0x87d59c40, 0xbe547721,
    0xb97a79af, 0x84275cb2, 0x90a8043e, 0xf399eeb0,
    0xed4f0140, 0xabf06984, 0xb1c986bc, 0xc52a097c,
    0x6ab39eb2, 0x10b839d3, 0x1d4f8421, 0xe0acc983,
    0x642a48d3, 0x55477c83, 0xdb6a434a, 0xe16a144b,
    0x54f798a2, 0x5c4bb893, 0x7430ff0d, 0x0c148990,
    0x1dcf7a77, 0xe5eccdc8, 0x6b89978d, 0x59611b9d,
    0x7f152a6c, 0xceaf0993, 0x603f3294, 0x490493f6,
    0xfa21b3b4, 0x6eac05dc, 0xf445927a, 0x27d27aad

#else               /* Big endian */
    0xbd3234d4, 0x1b39b55f, 0x64eeb377, 0xb2753499, 
    0xfe0cd6ac, 0xa4b7295d, 0x4105d9fc, 0xcc05d61b,
    0xe9184864, 0x39f0703c, 0x8fc4b695, 0x756b99bc,
    0x6663d2e0, 0xf85d74bf, 0x82ac255b, 0x3c1ffb97,
    0x9a8a2712, 0x128546f6, 0xac2b3019, 0x1dbc0de4,
    0xaff80030, 0xe02ce729, 0x6c3f4794, 0x2b3c95fc,
    0x850d512e, 0x94e04e85, 0x329df21f, 0xa2e43e27,
    0x11318a6a, 0x2d1e0890, 0xfbf24cba, 0x357a7809,
    0x0c96ac0e, 0x4d2ac726, 0xf4c55f21, 0xa6da7ceb,
    0x5321f1f9, 0xd42a61e2, 0x409cd587, 0x217754be,
    0xaf797ab9, 0xb25c2784, 0x3e04a890, 0xb0ee99f3,
    0x40014fed, 0x8469f0ab, 0xbc86c9b1, 0x7c092ac5,
    0xb29eb36a, 0xd339b810, 0x21844f1d, 0x83c9ace0,
    0xd3482a64, 0x837c4755, 0x4a436adb, 0x4b146ae1,
    0xa298f754, 0x93b84b5c, 0x0dff3074, 0x9089140c,
    0x777acf1d, 0xc8cdece5, 0x8d97896b, 0x9d1b6159,
    0x6c2a157f, 0x9309afce, 0x94323f60, 0xf6930449,
    0xb4b321fa, 0xdc05ac6e, 0x7a9245f4, 0xad7ad227
#endif  /* defined __ARMEB__ */
};

uint32_t const DomainParam_Brainpool_384r1[] =
{
#ifndef __ARMEB__   /* Little endian */
    0x3c6ecb49, 0xfed8c21f, 0x03abb3fb, 0x36053db2, 
    0x0b56acc2, 0xe42c3a13, 0x8e3eda55, 0x3c0303b8,
    0x6d10a1ea, 0x056c5fb0, 0xeae73bd4, 0x1b210654,
    0x6b4158d3, 0x2f5cbcd3, 0x10a2526a, 0x2192b8f4,
    0x3fe8a26e, 0xe1633585, 0xc999beaf, 0xa47fbde8,
    0x86749a43, 0x3d589a94, 0x24b48495, 0xc300cd16,
    0x67e0d514, 0xc32f2e04, 0x5251537d, 0xf97ad3de,
    0x526db56d, 0xecb36dbc, 0xdaf8cfdc, 0x8fc8023a,
    0xd9761a13, 0xc328a3fa, 0xcb40468e, 0x1c034b70,
    0x4fed5260, 0x37f3949b, 0xebbd66bf, 0x3e098c74,
    0x9b46d2d3, 0x7f50df4e, 0x09e1d50c, 0x3e9e7fe9,
    0x3a6d8044, 0x5ffc8eca, 0x0a379483, 0xa631f53b,
    0xb31c40ec, 0x68f6049a, 0xa2874420, 0x675b6dfc,
    0x0f678b6e, 0x1713ae7b, 0x983740f7, 0x8517a68a,
    0x634368b8, 0x456f0ef4, 0x8825dc99, 0x43228040,
    0x057ad0e3, 0x9a3fcf9b, 0xf5edf5ec, 0x6907b863,
    0x4bbbdb88, 0x8285df62, 0x92a72a6f, 0xbae4db92,
    0x03c8140c, 0x190ca181, 0x498626d7, 0x341735de,
    0xda7a1c38, 0x2cde8027, 0x3ee499d8, 0xbac79e65,
    0xed6327ed, 0x02b0fae6, 0x9b7e7d27, 0xe20cd851,
    0x8d3c6cbe, 0xf73efa7c, 0x0ae22cad, 0x02655922,
    0xbb39e248, 0x12c5ad75, 0xc9bf9fd2, 0x7aab9ede,
    0x9d4ad3b9, 0xbd86bed0, 0xd195dd59, 0x3f40c949,
    0x170fc4ed, 0x67e8b251, 0x27cfb5bb, 0x878e086e,
    0x26978ef1, 0x5641ce60, 0x35ed9ee2, 0xf1573d78,
    0xb38c597c, 0x26eaca4a, 0x7cbb1ffc, 0x97ab5665

#else               /* Big endian */
    0x49cb6e3c, 0x1fc2d8fe, 0xfbb3ab03, 0xb23d0536, 
    0xc2ac560b, 0x133a2ce4, 0x55da3e8e, 0xb803033c,
    0xeaa1106d, 0xb05f6c05, 0xd43be7ea, 0x5406211b,
    0xd358416b, 0xd3bc5c2f, 0x6a52a210, 0xf4b89221,
    0x6ea2e83f, 0x853563e1, 0xafbe99c9, 0xe8bd7fa4,
    0x439a7486, 0x949a583d, 0x9584b424, 0x16cd00c3,
    0x14d5e067, 0x042e2fc3, 0x7d535152, 0xded37af9,
    0x6db56d52, 0xbc6db3ec, 0xdccff8da, 0x3a02c88f,
    0x131a76d9, 0xfaa328c3, 0x8e4640cb, 0x704b031c,
    0x6052ed4f, 0x9b94f337, 0xbf66bdeb, 0x748c093e,
    0xd3d2469b, 0x4edf507f, 0x0cd5e109, 0xe97f9e3e,
    0x44806d3a, 0xca8efc5f, 0x8394370a, 0x3bf531a6,
    0xec401cb3, 0x9a04f668, 0x204487a2, 0xfc6d5b67,
    0x6e8b670f, 0x7bae1317, 0xf7403798, 0x8aa61785,
    0xb8684363, 0xf40e6f45, 0x99dc2588, 0x40802243,
    0xe3d07a05, 0x9bcf3f9a, 0xecf5edf5, 0x63b80769,
    0x88dbbb4b, 0x62df8582, 0x6f2aa792, 0x92dbe4ba,
    0x0c14c803, 0x81a10c19, 0xd7268649, 0xde351734,
    0x381c7ada, 0x2780de2c, 0xd899e43e, 0x659ec7ba,
    0xed2763ed, 0xe6fab002, 0x277d7e9b, 0x51d80ce2,
    0xbe6c3c8d, 0x7cfa3ef7, 0xad2ce20a, 0x22596502,
    0x48e239bb, 0x75adc512, 0xd29fbfc9, 0xde9eab7a,
    0xb9d34a9d, 0xd0be86bd, 0x59dd95d1, 0x49c9403f,
    0xedc40f17, 0x51b2e867, 0xbbb5cf27, 0x6e088e87,
    0xf18e9726, 0x60ce4156, 0xe29eed35, 0x783d57f1,
    0x7c598cb3, 0x4acaea26, 0xfc1fbb7c, 0x6556ab97
#endif  /* defined __ARMEB__ */
};


uint32_t const DomainParam_Brainpool_512r1[] =
{
#ifndef __ARMEB__   /* Little endian */
    0xf77f3895, 0xe75e3cd1, 0xa1539199, 0x2f95841b, 
    0xc1c9f557, 0x0cc092d7, 0x0198ab46, 0xc715c99c,
    0xf32ea94a, 0xd238ab3c, 0xbbc72b3e, 0xd5f0c114,
    0x245069f6, 0x5b038f4e, 0xa02cefaf, 0x0d6d00ef,
    0xec0997a0, 0xebd8154a, 0xe61c2dbc, 0x03df4ad7,
    0x7691e287, 0x587c8e64, 0x26a9357b, 0xf749f82b,
    0xfd616b96, 0xee2052ba, 0xc40641cb, 0x97349e2b,
    0xbbf18705, 0xcd3b419d, 0x590d24aa, 0x20c062cb,
    0xbba6b8ad, 0x447d93ee, 0x027d5cde, 0x0b9c23e2,
    0xe3900004, 0xedaaab8b, 0xd7b38db6, 0xba844d4d,
    0x92558f8a, 0xfe621e13, 0x213cb29c, 0x29993007,
    0xb438d781, 0x0fc20d8c, 0xa09f0015, 0x3c07197c,
    0x0cefeaac, 0xd4de71e7, 0xdb26ec49, 0xc2df8c07,
    0x028fae43, 0x209ccc99, 0xa2da8940, 0xf877bfed,
    0x63a09535, 0xe1644b8f, 0x073af648, 0xf6514463,
    0x57435bcd, 0x9751d9d2, 0xd689317c, 0xf48f7e2b,
    0xa76a5318, 0x3e0af0a2, 0x61cdae90, 0x2627309c,
    0x29803090, 0xca240a7e, 0x8727b59f, 0x84a937ef,
    0x4c328f24, 0xaf8745fa, 0x3f0d11e8, 0xc5cf0654,
    0x60ff52f6, 0xfd2acc06, 0xbde069f3, 0x057ab2a2,
    0xab858324, 0x165f0e76, 0xe5cbb35c, 0xfbee56df,
    0xc38ecdbf, 0x199d6427, 0xdc225664, 0x529f5559,
    0x18a3ad06, 0x76c3beb0, 0x26f5977a, 0x9d4cda55,
    0x9b56d5fd, 0x6523056b, 0x7efd4a07, 0x76a20158,
    0xa442251f, 0x45bcf18c, 0xcf7775bc, 0x243b9895,
    0xb6a684f9, 0x9affd53c, 0x72dee665, 0xa1d56f3f,
    0x81999ff3, 0x0f24f2f2, 0x1dbc12ca, 0x3b3200c5,
    0x299738a1, 0x8b666079, 0xfa30a81a, 0x187d74b3,
    0x2b6df7c9, 0xeea35aa4, 0x2fc5e5e1, 0xb8012839,
    0x5af6c5f6, 0xf799bbe4, 0xce094606, 0x30b33ffc,
    0xb44886b1, 0xdbf56004, 0x0c40a419, 0xa0ab4bfd,
    0x124c455d, 0x61ec6909, 0x018870b3, 0xc39f9766,
    0x963872f8, 0xd42bc6d0, 0xf67f9879, 0x02cd871d,
    0xc1d5637a, 0xd6c96978, 0x529741ed, 0x44be5dd0

#else               /* Big endian */
    0x95387ff7, 0xd13c5ee7, 0x999153a1, 0x1b84952f, 
    0x57f5c9c1, 0xd792c00c, 0x46ab9801, 0x9cc915c7,
    0x4aa92ef3, 0x3cab38d2, 0x3e2bc7bb, 0x14c1f0d5,
    0xf6695024, 0x4e8f035b, 0xafef2ca0, 0xef006d0d,
    0xa09709ec, 0x4a15d8eb, 0xbc2d1ce6, 0xd74adf03,
    0x87e29176, 0x648e7c58, 0x7b35a926, 0x2bf849f7,
    0x966b61fd, 0xba5220ee, 0xcb4106c4, 0x2b9e3497,
    0x0587f1bb, 0x9d413bcd, 0xaa240d59, 0xcb62c020,
    0xadb8a6bb, 0xee937d44, 0xde5c7d02, 0xe2239c0b,
    0x040090e3, 0x8babaaed, 0xb68db3d7, 0x4d4d84ba,
    0x8a8f5592, 0x131e62fe, 0x9cb23c21, 0x07309929,
    0x81d738b4, 0x8c0dc20f, 0x15009fa0, 0x7c19073c,
    0xaceaef0c, 0xe771ded4, 0x49ec26db, 0x078cdfc2,
    0x43ae8f02, 0x99cc9c20, 0x4089daa2, 0xedbf77f8,
    0x3595a063, 0x8f4b64e1, 0x48f63a07, 0x634451f6,
    0xcd5b4357, 0xd2d95197, 0x7c3189d6, 0x2b7e8ff4,
    0x18536aa7, 0xa2f00a3e, 0x90aecd61, 0x9c302726,
    0x90308029, 0x7e0a24ca, 0x9fb52787, 0xef37a984,
    0x248f324c, 0xfa4587af, 0xe8110d3f, 0x5406cfc5,
    0xf652ff60, 0x06cc2afd, 0xf369e0bd, 0xa2b27a05,
    0x248385ab, 0x760e5f16, 0x5cb3cbe5, 0xdf56eefb,
    0xbfcd8ec3, 0x27649d19, 0x645622dc, 0x59559f52,
    0x06ada318, 0xb0bec376, 0x7a97f526, 0x55da4c9d,
    0xfdd5569b, 0x6b052365, 0x074afd7e, 0x5801a276,
    0x1f2542a4, 0x8cf1bc45, 0xbc7577cf, 0x95983b24,
    0xf984a6b6, 0x3cd5ff9a, 0x65e6de72, 0x3f6fd5a1,
    0xf39f9981, 0xf2f2240f, 0xca12bc1d, 0xc500323b,
    0xa1389729, 0x7960668b, 0x1aa830fa, 0xb3747d18,
    0xc9f76d2b, 0xa45aa3ee, 0xe1e5c52f, 0x392801b8,
    0xf6c5f65a, 0xe4bb99f7, 0x064609ce, 0xfc3fb330,
    0xb18648b4, 0x0460f5db, 0x19a4400c, 0xfd4baba0,
    0x5d454c12, 0x0969ec61, 0xb3708801, 0x66979fc3,
    0xf8723896, 0xd0c62bd4, 0x79987ff6, 0x1d87cd02,
    0x7a63d5c1, 0x7869c9d6, 0xed419752, 0xd05dbe44
#endif  /* defined __ARMEB__ */
};

uint32_t const DomainParam_Koblitz_secp256k1[] =
{
#ifndef __ARMEB__   /* Little endian */
    0xf3ec45eb, 0x9f376f69, 0x6973eaba, 0x25b0dba7, 
    0x0637fda1, 0x8cb68991, 0xac46cb0a, 0x565158e1,
    0xb28f7c57, 0x3eb4f15a, 0x72950c88, 0x6a619bad,
    0x148b76dc, 0xa09ea3e4, 0x9c193546, 0xa25b117a,
    0x37f8bc08, 0xfd64f530, 0xcd68fc93, 0xb9e0ddd1,
    0xb5b6ff25, 0xabe2f486, 0x996a37c6, 0x7d4dce22,
    0x387fb3f5, 0x52aa26db, 0x68974e38, 0x33565eb1,
    0xb8c8da3e, 0xb6738101, 0xb4649e75, 0xcf40f52d,
    0xf284c2f5, 0x32a88e0d, 0x1c0ac5eb, 0xe7278fe9,
    0xefa1a48d, 0x86548057, 0x1b5eee70, 0xc7ae86f9,
    0xce9cc7b8, 0x051e2c9d, 0xdd51ab4b, 0xcd958b36,
    0x6684eec9, 0x36c0818b, 0x731ef23f, 0x484eb066,
    0x971ecdbc, 0x8f62ca15, 0x887b3c1f, 0x23a530f0,
    0xb8571c8d, 0xfd2e203f, 0xa4d9b532, 0x3670b7e5,
    0x48aca979, 0x5c6da253, 0xda40e623, 0xccd03cf2,
    0x7195a73c, 0x9c14664c, 0x96edf703, 0x978068ac,
    0x4de690d5, 0x82477b24, 0x0b0bbb57, 0xda6cca18,
    0x3b27980b, 0xf3420afe, 0xfe948a75, 0xc7f4bbf7

#else               /* Big endian */
    0xeb45ecf3, 0x696f379f, 0xbaea7369, 0xa7dbb025, 
    0xa1fd3706, 0x9189b68c, 0x0acb46ac, 0xe1585156,
    0x577c8fb2, 0x5af1b43e, 0x880c9572, 0xad9b616a,
    0xdc768b14, 0xe4a39ea0, 0x4635199c, 0x7a115ba2,
    0x08bcf837, 0x30f564fd, 0x93fc68cd, 0xd1dde0b9,
    0x25ffb6b5, 0x86f4e2ab, 0xc6376a99, 0x22ce4d7d,
    0xf5b37f38, 0xdb26aa52, 0x384e9768, 0xb15e5633,
    0x3edac8b8, 0x018173b6, 0x759e64b4, 0x2df540cf,
    0xf5c284f2, 0x0d8ea832, 0xebc50a1c, 0xe98f27e7,
    0x8da4a1ef, 0x57805486, 0x70ee5e1b, 0xf986aec7,
    0xb8c79cce, 0x9d2c1e05, 0x4bab51dd, 0x368b95cd,
    0xc9ee8466, 0x8b81c036, 0x3ff21e73, 0x66b04e48,
    0xbccd1e97, 0x15ca628f, 0x1f3c7b88, 0xf030a523,
    0x8d1c57b8, 0x3f202efd, 0x32b5d9a4, 0xe5b77036,
    0x79a9ac48, 0x53a26d5c, 0x23e640da, 0xf23cd0cc,
    0x3ca79571, 0x4c66149c, 0x03f7ed96, 0xac688097,
    0xd590e64d, 0x247b4782, 0x57bb0b0b, 0x18ca6cda,
    0x0b98273b, 0xfe0a42f3, 0x758a94fe, 0xf7bbf4c7
#endif  /* defined __ARMEB__ */
};

