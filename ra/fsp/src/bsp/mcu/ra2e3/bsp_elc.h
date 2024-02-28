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

#ifndef BSP_ELC_H
#define BSP_ELC_H

/*******************************************************************************************************************//**
 * @addtogroup BSP_MCU_RA2E3
 * @{
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Macro definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Typedef definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Exported global variables
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Exported global functions (to be accessed by other files)
 **********************************************************************************************************************/

/* UNCRUSTIFY-OFF */

/** Sources of event signals to be linked to other peripherals or the CPU
 * @note This list is device specific.
 * */
typedef enum e_elc_event_ra2e3
{
    ELC_EVENT_NONE                          = (0x0),   // Link disabled
    ELC_EVENT_ICU_IRQ0                      = (0x001), // External pin interrupt 0
    ELC_EVENT_ICU_IRQ1                      = (0x002), // External pin interrupt 1
    ELC_EVENT_ICU_IRQ2                      = (0x003), // External pin interrupt 2
    ELC_EVENT_ICU_IRQ3                      = (0x004), // External pin interrupt 3
    ELC_EVENT_ICU_IRQ4                      = (0x005), // External pin interrupt 4
    ELC_EVENT_ICU_IRQ5                      = (0x006), // External pin interrupt 5
    ELC_EVENT_ICU_IRQ6                      = (0x007), // External pin interrupt 6
    ELC_EVENT_ICU_IRQ7                      = (0x008), // External pin interrupt 7
    ELC_EVENT_DTC_COMPLETE                  = (0x009), // DTC transfer complete
    ELC_EVENT_DTC_END                       = (0x00A), // DTC transfer end
    ELC_EVENT_ICU_SNOOZE_CANCEL             = (0x00B), // Canceling from Snooze mode
    ELC_EVENT_FCU_FRDYI                     = (0x00C), // Flash ready interrupt
    ELC_EVENT_LVD_LVD1                      = (0x00D), // Voltage monitor 1 interrupt
    ELC_EVENT_LVD_LVD2                      = (0x00E), // Voltage monitor 2 interrupt
    ELC_EVENT_CGC_MOSC_STOP                 = (0x00F), // Main Clock oscillation stop
    ELC_EVENT_LPM_SNOOZE_REQUEST            = (0x010), // Snooze entry
    ELC_EVENT_AGT0_INT                      = (0x011), // AGT interrupt
    ELC_EVENT_AGT0_COMPARE_A                = (0x012), // Compare match A
    ELC_EVENT_AGT0_COMPARE_B                = (0x013), // Compare match B
    ELC_EVENT_AGT1_INT                      = (0x014), // AGT interrupt
    ELC_EVENT_AGT1_COMPARE_A                = (0x015), // Compare match A
    ELC_EVENT_AGT1_COMPARE_B                = (0x016), // Compare match B
    ELC_EVENT_IWDT_UNDERFLOW                = (0x017), // IWDT underflow
    ELC_EVENT_WDT_UNDERFLOW                 = (0x018), // WDT0 underflow
    ELC_EVENT_RTC_ALARM                     = (0x019), // Alarm interrupt
    ELC_EVENT_RTC_PERIOD                    = (0x01A), // Periodic interrupt
    ELC_EVENT_RTC_CARRY                     = (0x01B), // Carry interrupt
    ELC_EVENT_ADC0_SCAN_END                 = (0x01C), // End of A/D scanning operation
    ELC_EVENT_ADC0_SCAN_END_B               = (0x01D), // A/D scan end interrupt for group B
    ELC_EVENT_ADC0_WINDOW_A                 = (0x01E), // Window A Compare match interrupt
    ELC_EVENT_ADC0_WINDOW_B                 = (0x01F), // Window B Compare match interrupt
    ELC_EVENT_ADC0_COMPARE_MATCH            = (0x020), // Compare match
    ELC_EVENT_ADC0_COMPARE_MISMATCH         = (0x021), // Compare mismatch
    ELC_EVENT_IIC0_RXI                      = (0x027), // Receive data full
    ELC_EVENT_IIC0_TXI                      = (0x028), // Transmit data empty
    ELC_EVENT_IIC0_TEI                      = (0x029), // Transmit end
    ELC_EVENT_IIC0_ERI                      = (0x02A), // Transfer error
    ELC_EVENT_IIC0_WUI                      = (0x02B), // Wakeup interrupt
    ELC_EVENT_KEY_INT                       = (0x033), // Key interrupt
    ELC_EVENT_DOC_INT                       = (0x034), // Data operation circuit interrupt
    ELC_EVENT_CAC_FREQUENCY_ERROR           = (0x035), // Frequency error interrupt
    ELC_EVENT_CAC_MEASUREMENT_END           = (0x036), // Measurement end interrupt
    ELC_EVENT_CAC_OVERFLOW                  = (0x037), // Overflow interrupt
    ELC_EVENT_IOPORT_EVENT_1                = (0x03D), // Port 1 event
    ELC_EVENT_IOPORT_EVENT_2                = (0x03E), // Port 2 event
    ELC_EVENT_ELC_SOFTWARE_EVENT_0          = (0x03F), // Software event 0
    ELC_EVENT_ELC_SOFTWARE_EVENT_1          = (0x040), // Software event 1
    ELC_EVENT_POEG0_EVENT                   = (0x041), // Port Output disable 0 interrupt
    ELC_EVENT_POEG1_EVENT                   = (0x042), // Port Output disable 1 interrupt
    ELC_EVENT_GPT0_CAPTURE_COMPARE_A        = (0x046), // Capture/Compare match A
    ELC_EVENT_GPT0_CAPTURE_COMPARE_B        = (0x047), // Capture/Compare match B
    ELC_EVENT_GPT0_COMPARE_C                = (0x048), // Compare match C
    ELC_EVENT_GPT0_COMPARE_D                = (0x049), // Compare match D
    ELC_EVENT_GPT0_COUNTER_OVERFLOW         = (0x04A), // Overflow
    ELC_EVENT_GPT0_COUNTER_UNDERFLOW        = (0x04B), // Underflow
    ELC_EVENT_GPT4_CAPTURE_COMPARE_A        = (0x05E), // Capture/Compare match A
    ELC_EVENT_GPT4_CAPTURE_COMPARE_B        = (0x05F), // Capture/Compare match B
    ELC_EVENT_GPT4_COMPARE_C                = (0x060), // Compare match C
    ELC_EVENT_GPT4_COMPARE_D                = (0x061), // Compare match D
    ELC_EVENT_GPT4_COUNTER_OVERFLOW         = (0x062), // Overflow
    ELC_EVENT_GPT4_COUNTER_UNDERFLOW        = (0x063), // Underflow
    ELC_EVENT_GPT5_CAPTURE_COMPARE_A        = (0x064), // Capture/Compare match A
    ELC_EVENT_GPT5_CAPTURE_COMPARE_B        = (0x065), // Capture/Compare match B
    ELC_EVENT_GPT5_COMPARE_C                = (0x066), // Compare match C
    ELC_EVENT_GPT5_COMPARE_D                = (0x067), // Compare match D
    ELC_EVENT_GPT5_COUNTER_OVERFLOW         = (0x068), // Overflow
    ELC_EVENT_GPT5_COUNTER_UNDERFLOW        = (0x069), // Underflow
    ELC_EVENT_GPT6_CAPTURE_COMPARE_A        = (0x06A), // Capture/Compare match A
    ELC_EVENT_GPT6_CAPTURE_COMPARE_B        = (0x06B), // Capture/Compare match B
    ELC_EVENT_GPT6_COMPARE_C                = (0x06C), // Compare match C
    ELC_EVENT_GPT6_COMPARE_D                = (0x06D), // Compare match D
    ELC_EVENT_GPT6_COUNTER_OVERFLOW         = (0x06E), // Overflow
    ELC_EVENT_GPT6_COUNTER_UNDERFLOW        = (0x06F), // Underflow
    ELC_EVENT_GPT_UVWEDGE                   = (0x070), // UVW edge event
    ELC_EVENT_SCI0_RXI                      = (0x071), // Receive data full
    ELC_EVENT_SCI0_TXI                      = (0x072), // Transmit data empty
    ELC_EVENT_SCI0_TEI                      = (0x073), // Transmit end
    ELC_EVENT_SCI0_ERI                      = (0x074), // Receive error
    ELC_EVENT_SCI0_AM                       = (0x075), // Address match event
    ELC_EVENT_SCI0_RXI_OR_ERI               = (0x076), // Receive data full/Receive error
    ELC_EVENT_SCI1_RXI                      = (0x077), // Receive data full
    ELC_EVENT_SCI1_TXI                      = (0x078), // Transmit data empty
    ELC_EVENT_SCI1_TEI                      = (0x079), // Transmit end
    ELC_EVENT_SCI1_ERI                      = (0x07A), // Receive error
    ELC_EVENT_SCI1_AM                       = (0x07B), // Address match event
    ELC_EVENT_SCI9_RXI                      = (0x07C), // Receive data full
    ELC_EVENT_SCI9_TXI                      = (0x07D), // Transmit data empty
    ELC_EVENT_SCI9_TEI                      = (0x07E), // Transmit end
    ELC_EVENT_SCI9_ERI                      = (0x07F), // Receive error
    ELC_EVENT_SCI9_AM                       = (0x080), // Address match event
    ELC_EVENT_SPI0_RXI                      = (0x081), // Receive buffer full
    ELC_EVENT_SPI0_TXI                      = (0x082), // Transmit buffer empty
    ELC_EVENT_SPI0_IDLE                     = (0x083), // Idle
    ELC_EVENT_SPI0_ERI                      = (0x084), // Error
    ELC_EVENT_SPI0_TEI                      = (0x085), // Transmission complete event
    ELC_EVENT_SCI2_RXI                      = (0x08E), // Receive data full
    ELC_EVENT_SCI2_TXI                      = (0x08F), // Transmit data empty
    ELC_EVENT_SCI2_TEI                      = (0x090), // Transmit end
    ELC_EVENT_SCI2_ERI                      = (0x091), // Receive error
    ELC_EVENT_SCI2_AM                       = (0x092), // Address match event
    ELC_EVENT_GPT7_CAPTURE_COMPARE_A        = (0x098), // Capture/Compare match A
    ELC_EVENT_GPT7_CAPTURE_COMPARE_B        = (0x099), // Capture/Compare match B
    ELC_EVENT_GPT7_COMPARE_C                = (0x09A), // Compare match C
    ELC_EVENT_GPT7_COMPARE_D                = (0x09B), // Compare match D
    ELC_EVENT_GPT7_COUNTER_OVERFLOW         = (0x09C), // Overflow
    ELC_EVENT_GPT7_COUNTER_UNDERFLOW        = (0x09D), // Underflow
    ELC_EVENT_GPT8_CAPTURE_COMPARE_A        = (0x09E), // Capture/Compare match A
    ELC_EVENT_GPT8_CAPTURE_COMPARE_B        = (0x09F), // Capture/Compare match B
    ELC_EVENT_GPT8_COMPARE_C                = (0x0A0), // Compare match C
    ELC_EVENT_GPT8_COMPARE_D                = (0x0A1), // Compare match D
    ELC_EVENT_GPT8_COUNTER_OVERFLOW         = (0x0A2), // Overflow
    ELC_EVENT_GPT8_COUNTER_UNDERFLOW        = (0x0A3), // Underflow
    ELC_EVENT_GPT9_CAPTURE_COMPARE_A        = (0x0A4), // Capture/Compare match A
    ELC_EVENT_GPT9_CAPTURE_COMPARE_B        = (0x0A5), // Capture/Compare match B
    ELC_EVENT_GPT9_COMPARE_C                = (0x0A6), // Compare match C
    ELC_EVENT_GPT9_COMPARE_D                = (0x0A7), // Compare match D
    ELC_EVENT_GPT9_COUNTER_OVERFLOW         = (0x0A8), // Overflow
    ELC_EVENT_GPT9_COUNTER_UNDERFLOW        = (0x0A9)  // Underflow
} elc_event_t;

/** Events to be used with the IELSR register to link interrupt events to the NVIC
 * @note This list is device specific.
 * */
typedef enum e_icu_event_ra2e3
{
    ICU_EVENT_ADC0_COMPARE_MATCH_GROUP0     = (0x08), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_ADC0_COMPARE_MATCH_GROUP4     = (0x08), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_ADC0_COMPARE_MISMATCH_GROUP1  = (0x06), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_ADC0_COMPARE_MISMATCH_GROUP5  = (0x06), // group5 (IELSR[5, 13, 21, 29])
    ICU_EVENT_ADC0_SCAN_END_GROUP0          = (0x07), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_ADC0_SCAN_END_GROUP4          = (0x07), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_ADC0_SCAN_END_B_GROUP1        = (0x05), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_ADC0_WINDOW_A_GROUP2          = (0x05), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_ADC0_WINDOW_A_GROUP6          = (0x05), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_ADC0_WINDOW_B_GROUP3          = (0x05), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_ADC0_WINDOW_B_GROUP7          = (0x05), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_AGT0_COMPARE_A_GROUP0         = (0x16), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_AGT0_COMPARE_B_GROUP1         = (0x13), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_AGT0_INT_GROUP3               = (0x11), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_AGT1_COMPARE_A_GROUP1         = (0x03), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_AGT1_COMPARE_A_GROUP5         = (0x03), // group5 (IELSR[5, 13, 21, 29])
    ICU_EVENT_AGT1_COMPARE_B_GROUP2         = (0x03), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_AGT1_COMPARE_B_GROUP6         = (0x03), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_AGT1_INT_GROUP0               = (0x05), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_AGT1_INT_GROUP4               = (0x05), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_CAC_FREQUENCY_ERROR_GROUP1    = (0x0B), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_CAC_FREQUENCY_ERROR_GROUP5    = (0x0B), // group5 (IELSR[5, 13, 21, 29])
    ICU_EVENT_CAC_MEASUREMENT_END_GROUP2    = (0x08), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_CAC_MEASUREMENT_END_GROUP6    = (0x08), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_CAC_OVERFLOW_GROUP3           = (0x08), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_CAC_OVERFLOW_GROUP7           = (0x08), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_CGC_MOSC_STOP_GROUP6          = (0x14), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_DOC_INT_GROUP1                = (0x0A), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_DOC_INT_GROUP5                = (0x0A), // group5 (IELSR[5, 13, 21, 29])
    ICU_EVENT_DTC_COMPLETE_GROUP0           = (0x02), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_DTC_COMPLETE_GROUP4           = (0x02), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_ELC_SOFTWARE_EVENT_0_GROUP2   = (0x0A), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_ELC_SOFTWARE_EVENT_0_GROUP6   = (0x0A), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_ELC_SOFTWARE_EVENT_1_GROUP3   = (0x0A), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_ELC_SOFTWARE_EVENT_1_GROUP7   = (0x0A), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_FCU_FRDYI_GROUP2              = (0x02), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_FCU_FRDYI_GROUP6              = (0x02), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_GPT0_CAPTURE_COMPARE_A_GROUP0 = (0x0E), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_GPT0_CAPTURE_COMPARE_A_GROUP4 = (0x0E), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_GPT0_CAPTURE_COMPARE_B_GROUP1 = (0x0D), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_GPT0_CAPTURE_COMPARE_B_GROUP5 = (0x0D), // group5 (IELSR[5, 13, 21, 29])
    ICU_EVENT_GPT0_COMPARE_C_GROUP2         = (0x0C), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_GPT0_COMPARE_C_GROUP6         = (0x0C), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_GPT0_COMPARE_D_GROUP3         = (0x0C), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_GPT0_COMPARE_D_GROUP7         = (0x0C), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_GPT0_COUNTER_OVERFLOW_GROUP0  = (0x0F), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_GPT0_COUNTER_OVERFLOW_GROUP4  = (0x0F), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_GPT0_COUNTER_UNDERFLOW_GROUP1 = (0x0E), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_GPT0_COUNTER_UNDERFLOW_GROUP5 = (0x0E), // group5 (IELSR[5, 13, 21, 29])
    ICU_EVENT_GPT4_CAPTURE_COMPARE_A_GROUP0 = (0x1B), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_GPT4_CAPTURE_COMPARE_B_GROUP1 = (0x18), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_GPT4_COMPARE_C_GROUP2         = (0x15), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_GPT4_COMPARE_D_GROUP3         = (0x13), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_GPT4_COUNTER_OVERFLOW_GROUP6  = (0x16), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_GPT4_COUNTER_UNDERFLOW_GROUP7 = (0x13), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_GPT5_CAPTURE_COMPARE_A_GROUP4 = (0x1A), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_GPT5_CAPTURE_COMPARE_B_GROUP5 = (0x17), // group5 (IELSR[5, 13, 21, 29])
    ICU_EVENT_GPT5_COMPARE_C_GROUP6         = (0x17), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_GPT5_COMPARE_D_GROUP7         = (0x14), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_GPT5_COUNTER_OVERFLOW_GROUP2  = (0x16), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_GPT5_COUNTER_UNDERFLOW_GROUP3 = (0x14), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_GPT6_CAPTURE_COMPARE_A_GROUP0 = (0x1C), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_GPT6_CAPTURE_COMPARE_B_GROUP1 = (0x19), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_GPT6_COMPARE_C_GROUP2         = (0x17), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_GPT6_COMPARE_D_GROUP3         = (0x15), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_GPT6_COUNTER_OVERFLOW_GROUP6  = (0x18), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_GPT6_COUNTER_UNDERFLOW_GROUP7 = (0x15), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_GPT7_CAPTURE_COMPARE_A_GROUP4 = (0x1B), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_GPT7_CAPTURE_COMPARE_B_GROUP5 = (0x18), // group5 (IELSR[5, 13, 21, 29])
    ICU_EVENT_GPT7_COMPARE_C_GROUP6         = (0x19), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_GPT7_COMPARE_D_GROUP7         = (0x16), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_GPT7_COUNTER_OVERFLOW_GROUP2  = (0x18), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_GPT7_COUNTER_UNDERFLOW_GROUP3 = (0x16), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_GPT8_CAPTURE_COMPARE_A_GROUP0 = (0x1D), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_GPT8_CAPTURE_COMPARE_B_GROUP1 = (0x1A), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_GPT8_COMPARE_C_GROUP2         = (0x19), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_GPT8_COMPARE_D_GROUP3         = (0x17), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_GPT8_COUNTER_OVERFLOW_GROUP6  = (0x1A), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_GPT8_COUNTER_UNDERFLOW_GROUP7 = (0x17), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_GPT9_CAPTURE_COMPARE_A_GROUP4 = (0x1C), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_GPT9_CAPTURE_COMPARE_B_GROUP5 = (0x19), // group5 (IELSR[5, 13, 21, 29])
    ICU_EVENT_GPT9_COMPARE_C_GROUP6         = (0x1B), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_GPT9_COMPARE_D_GROUP7         = (0x18), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_GPT9_COUNTER_OVERFLOW_GROUP2  = (0x1A), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_GPT9_COUNTER_UNDERFLOW_GROUP3 = (0x18), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_GPT_UVWEDGE_GROUP0            = (0x11), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_GPT_UVWEDGE_GROUP4            = (0x11), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_ICU_IRQ0_GROUP0               = (0x01), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_ICU_IRQ0_GROUP4               = (0x01), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_ICU_IRQ1_GROUP1               = (0x01), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_ICU_IRQ1_GROUP5               = (0x01), // group5 (IELSR[5, 13, 21, 29])
    ICU_EVENT_ICU_IRQ2_GROUP2               = (0x01), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_ICU_IRQ2_GROUP6               = (0x01), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_ICU_IRQ3_GROUP3               = (0x01), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_ICU_IRQ3_GROUP7               = (0x01), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_ICU_IRQ4_GROUP4               = (0x16), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_ICU_IRQ5_GROUP5               = (0x13), // group5 (IELSR[5, 13, 21, 29])
    ICU_EVENT_ICU_IRQ6_GROUP6               = (0x13), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_ICU_IRQ7_GROUP7               = (0x11), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_ICU_SNOOZE_CANCEL_GROUP0      = (0x03), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_ICU_SNOOZE_CANCEL_GROUP4      = (0x03), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_IIC0_ERI_GROUP3               = (0x06), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_IIC0_ERI_GROUP7               = (0x06), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_IIC0_RXI_GROUP0               = (0x0A), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_IIC0_RXI_GROUP4               = (0x0A), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_IIC0_TEI_GROUP2               = (0x06), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_IIC0_TEI_GROUP6               = (0x06), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_IIC0_TXI_GROUP1               = (0x08), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_IIC0_TXI_GROUP5               = (0x08), // group5 (IELSR[5, 13, 21, 29])
    ICU_EVENT_IIC0_WUI_GROUP0               = (0x0B), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_IIC0_WUI_GROUP4               = (0x0B), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_IOPORT_EVENT_1_GROUP1         = (0x15), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_IOPORT_EVENT_2_GROUP2         = (0x13), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_IWDT_UNDERFLOW_GROUP3         = (0x03), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_IWDT_UNDERFLOW_GROUP7         = (0x03), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_KEY_INT_GROUP0                = (0x18), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_LPM_SNOOZE_REQUEST_GROUP3     = (0x02), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_LPM_SNOOZE_REQUEST_GROUP7     = (0x02), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_LVD_LVD1_GROUP0               = (0x04), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_LVD_LVD1_GROUP4               = (0x04), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_LVD_LVD2_GROUP1               = (0x02), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_LVD_LVD2_GROUP5               = (0x02), // group5 (IELSR[5, 13, 21, 29])
    ICU_EVENT_POEG0_EVENT_GROUP2            = (0x0B), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_POEG0_EVENT_GROUP6            = (0x0B), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_POEG1_EVENT_GROUP3            = (0x0B), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_POEG1_EVENT_GROUP7            = (0x0B), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_RTC_ALARM_GROUP1              = (0x04), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_RTC_ALARM_GROUP5              = (0x04), // group5 (IELSR[5, 13, 21, 29])
    ICU_EVENT_RTC_CARRY_GROUP3              = (0x04), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_RTC_CARRY_GROUP7              = (0x04), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_RTC_PERIOD_GROUP2             = (0x04), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_RTC_PERIOD_GROUP6             = (0x04), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_SCI0_AM_GROUP0                = (0x13), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_SCI0_AM_GROUP4                = (0x13), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_SCI0_ERI_GROUP3               = (0x0F), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_SCI0_ERI_GROUP7               = (0x0F), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_SCI0_RXI_GROUP0               = (0x12), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_SCI0_RXI_GROUP4               = (0x12), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_SCI0_TEI_GROUP2               = (0x0F), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_SCI0_TEI_GROUP6               = (0x0F), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_SCI0_TXI_GROUP1               = (0x10), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_SCI0_TXI_GROUP5               = (0x10), // group5 (IELSR[5, 13, 21, 29])
    ICU_EVENT_SCI1_AM_GROUP5                = (0x1A), // group5 (IELSR[5, 13, 21, 29])
    ICU_EVENT_SCI1_ERI_GROUP3               = (0x19), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_SCI1_RXI_GROUP0               = (0x1E), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_SCI1_TEI_GROUP2               = (0x1B), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_SCI1_TXI_GROUP1               = (0x1B), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_SCI2_AM_GROUP1                = (0x1C), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_SCI2_ERI_GROUP7               = (0x19), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_SCI2_RXI_GROUP4               = (0x1D), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_SCI2_TEI_GROUP6               = (0x1C), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_SCI2_TXI_GROUP5               = (0x1B), // group5 (IELSR[5, 13, 21, 29])
    ICU_EVENT_SCI9_AM_GROUP3                = (0x1B), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_SCI9_ERI_GROUP7               = (0x1A), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_SCI9_RXI_GROUP4               = (0x1E), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_SCI9_TEI_GROUP6               = (0x1E), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_SCI9_TXI_GROUP5               = (0x1C), // group5 (IELSR[5, 13, 21, 29])
    ICU_EVENT_SPI0_ERI_GROUP3               = (0x10), // group3 (IELSR[3, 11, 19, 27])
    ICU_EVENT_SPI0_ERI_GROUP7               = (0x10), // group7 (IELSR[7, 15, 23, 31])
    ICU_EVENT_SPI0_IDLE_GROUP2              = (0x10), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_SPI0_IDLE_GROUP6              = (0x10), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_SPI0_RXI_GROUP0               = (0x14), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_SPI0_RXI_GROUP4               = (0x14), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_SPI0_TEI_GROUP2               = (0x11), // group2 (IELSR[2, 10, 18, 26])
    ICU_EVENT_SPI0_TEI_GROUP6               = (0x11), // group6 (IELSR[6, 14, 22, 30])
    ICU_EVENT_SPI0_TXI_GROUP1               = (0x11), // group1 (IELSR[1, 9, 17, 25])
    ICU_EVENT_SPI0_TXI_GROUP5               = (0x11), // group5 (IELSR[5, 13, 21, 29])
    ICU_EVENT_WDT_UNDERFLOW_GROUP0          = (0x06), // group0 (IELSR[0, 8, 16, 24])
    ICU_EVENT_WDT_UNDERFLOW_GROUP4          = (0x06), // group4 (IELSR[4, 12, 20, 28])
    ICU_EVENT_ADC0_COMPARE_MATCH            = (0x08), // DEPRECATED, do not use
    ICU_EVENT_ADC0_COMPARE_MISMATCH         = (0x06), // DEPRECATED, do not use
    ICU_EVENT_ADC0_SCAN_END                 = (0x07), // DEPRECATED, do not use
    ICU_EVENT_ADC0_SCAN_END_B               = (0x05), // DEPRECATED, do not use
    ICU_EVENT_ADC0_WINDOW_A                 = (0x05), // DEPRECATED, do not use
    ICU_EVENT_ADC0_WINDOW_B                 = (0x05), // DEPRECATED, do not use
    ICU_EVENT_AGT0_COMPARE_A                = (0x16), // DEPRECATED, do not use
    ICU_EVENT_AGT0_COMPARE_B                = (0x13), // DEPRECATED, do not use
    ICU_EVENT_AGT0_INT                      = (0x11), // DEPRECATED, do not use
    ICU_EVENT_AGT1_COMPARE_A                = (0x03), // DEPRECATED, do not use
    ICU_EVENT_AGT1_COMPARE_B                = (0x03), // DEPRECATED, do not use
    ICU_EVENT_AGT1_INT                      = (0x05), // DEPRECATED, do not use
    ICU_EVENT_CAC_FREQUENCY_ERROR           = (0x0B), // DEPRECATED, do not use
    ICU_EVENT_CAC_MEASUREMENT_END           = (0x08), // DEPRECATED, do not use
    ICU_EVENT_CAC_OVERFLOW                  = (0x08), // DEPRECATED, do not use
    ICU_EVENT_CGC_MOSC_STOP                 = (0x14), // DEPRECATED, do not use
    ICU_EVENT_DOC_INT                       = (0x0A), // DEPRECATED, do not use
    ICU_EVENT_DTC_COMPLETE                  = (0x02), // DEPRECATED, do not use
    ICU_EVENT_ELC_SOFTWARE_EVENT_0          = (0x0A), // DEPRECATED, do not use
    ICU_EVENT_ELC_SOFTWARE_EVENT_1          = (0x0A), // DEPRECATED, do not use
    ICU_EVENT_FCU_FRDYI                     = (0x02), // DEPRECATED, do not use
    ICU_EVENT_GPT0_CAPTURE_COMPARE_A        = (0x0E), // DEPRECATED, do not use
    ICU_EVENT_GPT0_CAPTURE_COMPARE_B        = (0x0D), // DEPRECATED, do not use
    ICU_EVENT_GPT0_COMPARE_C                = (0x0C), // DEPRECATED, do not use
    ICU_EVENT_GPT0_COMPARE_D                = (0x0C), // DEPRECATED, do not use
    ICU_EVENT_GPT0_COUNTER_OVERFLOW         = (0x0F), // DEPRECATED, do not use
    ICU_EVENT_GPT0_COUNTER_UNDERFLOW        = (0x0E), // DEPRECATED, do not use
    ICU_EVENT_GPT4_CAPTURE_COMPARE_A        = (0x1B), // DEPRECATED, do not use
    ICU_EVENT_GPT4_CAPTURE_COMPARE_B        = (0x18), // DEPRECATED, do not use
    ICU_EVENT_GPT4_COMPARE_C                = (0x15), // DEPRECATED, do not use
    ICU_EVENT_GPT4_COMPARE_D                = (0x13), // DEPRECATED, do not use
    ICU_EVENT_GPT4_COUNTER_OVERFLOW         = (0x16), // DEPRECATED, do not use
    ICU_EVENT_GPT4_COUNTER_UNDERFLOW        = (0x13), // DEPRECATED, do not use
    ICU_EVENT_GPT5_CAPTURE_COMPARE_A        = (0x1A), // DEPRECATED, do not use
    ICU_EVENT_GPT5_CAPTURE_COMPARE_B        = (0x17), // DEPRECATED, do not use
    ICU_EVENT_GPT5_COMPARE_C                = (0x17), // DEPRECATED, do not use
    ICU_EVENT_GPT5_COMPARE_D                = (0x14), // DEPRECATED, do not use
    ICU_EVENT_GPT5_COUNTER_OVERFLOW         = (0x16), // DEPRECATED, do not use
    ICU_EVENT_GPT5_COUNTER_UNDERFLOW        = (0x14), // DEPRECATED, do not use
    ICU_EVENT_GPT6_CAPTURE_COMPARE_A        = (0x1C), // DEPRECATED, do not use
    ICU_EVENT_GPT6_CAPTURE_COMPARE_B        = (0x19), // DEPRECATED, do not use
    ICU_EVENT_GPT6_COMPARE_C                = (0x17), // DEPRECATED, do not use
    ICU_EVENT_GPT6_COMPARE_D                = (0x15), // DEPRECATED, do not use
    ICU_EVENT_GPT6_COUNTER_OVERFLOW         = (0x18), // DEPRECATED, do not use
    ICU_EVENT_GPT6_COUNTER_UNDERFLOW        = (0x15), // DEPRECATED, do not use
    ICU_EVENT_GPT7_CAPTURE_COMPARE_A        = (0x1B), // DEPRECATED, do not use
    ICU_EVENT_GPT7_CAPTURE_COMPARE_B        = (0x18), // DEPRECATED, do not use
    ICU_EVENT_GPT7_COMPARE_C                = (0x19), // DEPRECATED, do not use
    ICU_EVENT_GPT7_COMPARE_D                = (0x16), // DEPRECATED, do not use
    ICU_EVENT_GPT7_COUNTER_OVERFLOW         = (0x18), // DEPRECATED, do not use
    ICU_EVENT_GPT7_COUNTER_UNDERFLOW        = (0x16), // DEPRECATED, do not use
    ICU_EVENT_GPT8_CAPTURE_COMPARE_A        = (0x1D), // DEPRECATED, do not use
    ICU_EVENT_GPT8_CAPTURE_COMPARE_B        = (0x1A), // DEPRECATED, do not use
    ICU_EVENT_GPT8_COMPARE_C                = (0x19), // DEPRECATED, do not use
    ICU_EVENT_GPT8_COMPARE_D                = (0x17), // DEPRECATED, do not use
    ICU_EVENT_GPT8_COUNTER_OVERFLOW         = (0x1A), // DEPRECATED, do not use
    ICU_EVENT_GPT8_COUNTER_UNDERFLOW        = (0x17), // DEPRECATED, do not use
    ICU_EVENT_GPT9_CAPTURE_COMPARE_A        = (0x1C), // DEPRECATED, do not use
    ICU_EVENT_GPT9_CAPTURE_COMPARE_B        = (0x19), // DEPRECATED, do not use
    ICU_EVENT_GPT9_COMPARE_C                = (0x1B), // DEPRECATED, do not use
    ICU_EVENT_GPT9_COMPARE_D                = (0x18), // DEPRECATED, do not use
    ICU_EVENT_GPT9_COUNTER_OVERFLOW         = (0x1A), // DEPRECATED, do not use
    ICU_EVENT_GPT9_COUNTER_UNDERFLOW        = (0x18), // DEPRECATED, do not use
    ICU_EVENT_GPT_UVWEDGE                   = (0x11), // DEPRECATED, do not use
    ICU_EVENT_ICU_IRQ0                      = (0x01), // DEPRECATED, do not use
    ICU_EVENT_ICU_IRQ1                      = (0x01), // DEPRECATED, do not use
    ICU_EVENT_ICU_IRQ2                      = (0x01), // DEPRECATED, do not use
    ICU_EVENT_ICU_IRQ3                      = (0x01), // DEPRECATED, do not use
    ICU_EVENT_ICU_IRQ4                      = (0x16), // DEPRECATED, do not use
    ICU_EVENT_ICU_IRQ5                      = (0x13), // DEPRECATED, do not use
    ICU_EVENT_ICU_IRQ6                      = (0x13), // DEPRECATED, do not use
    ICU_EVENT_ICU_IRQ7                      = (0x11), // DEPRECATED, do not use
    ICU_EVENT_ICU_SNOOZE_CANCEL             = (0x03), // DEPRECATED, do not use
    ICU_EVENT_IIC0_ERI                      = (0x06), // DEPRECATED, do not use
    ICU_EVENT_IIC0_RXI                      = (0x0A), // DEPRECATED, do not use
    ICU_EVENT_IIC0_TEI                      = (0x06), // DEPRECATED, do not use
    ICU_EVENT_IIC0_TXI                      = (0x08), // DEPRECATED, do not use
    ICU_EVENT_IIC0_WUI                      = (0x0B), // DEPRECATED, do not use
    ICU_EVENT_IOPORT_EVENT_1                = (0x15), // DEPRECATED, do not use
    ICU_EVENT_IOPORT_EVENT_2                = (0x13), // DEPRECATED, do not use
    ICU_EVENT_IWDT_UNDERFLOW                = (0x03), // DEPRECATED, do not use
    ICU_EVENT_KEY_INT                       = (0x18), // DEPRECATED, do not use
    ICU_EVENT_LPM_SNOOZE_REQUEST            = (0x02), // DEPRECATED, do not use
    ICU_EVENT_LVD_LVD1                      = (0x04), // DEPRECATED, do not use
    ICU_EVENT_LVD_LVD2                      = (0x02), // DEPRECATED, do not use
    ICU_EVENT_POEG0_EVENT                   = (0x0B), // DEPRECATED, do not use
    ICU_EVENT_POEG1_EVENT                   = (0x0B), // DEPRECATED, do not use
    ICU_EVENT_RTC_ALARM                     = (0x04), // DEPRECATED, do not use
    ICU_EVENT_RTC_CARRY                     = (0x04), // DEPRECATED, do not use
    ICU_EVENT_RTC_PERIOD                    = (0x04), // DEPRECATED, do not use
    ICU_EVENT_SCI0_AM                       = (0x13), // DEPRECATED, do not use
    ICU_EVENT_SCI0_ERI                      = (0x0F), // DEPRECATED, do not use
    ICU_EVENT_SCI0_RXI                      = (0x12), // DEPRECATED, do not use
    ICU_EVENT_SCI0_TEI                      = (0x0F), // DEPRECATED, do not use
    ICU_EVENT_SCI0_TXI                      = (0x10), // DEPRECATED, do not use
    ICU_EVENT_SCI1_AM                       = (0x1A), // DEPRECATED, do not use
    ICU_EVENT_SCI1_ERI                      = (0x19), // DEPRECATED, do not use
    ICU_EVENT_SCI1_RXI                      = (0x1E), // DEPRECATED, do not use
    ICU_EVENT_SCI1_TEI                      = (0x1B), // DEPRECATED, do not use
    ICU_EVENT_SCI1_TXI                      = (0x1B), // DEPRECATED, do not use
    ICU_EVENT_SCI2_AM                       = (0x1C), // DEPRECATED, do not use
    ICU_EVENT_SCI2_ERI                      = (0x19), // DEPRECATED, do not use
    ICU_EVENT_SCI2_RXI                      = (0x1D), // DEPRECATED, do not use
    ICU_EVENT_SCI2_TEI                      = (0x1C), // DEPRECATED, do not use
    ICU_EVENT_SCI2_TXI                      = (0x1B), // DEPRECATED, do not use
    ICU_EVENT_SCI9_AM                       = (0x1B), // DEPRECATED, do not use
    ICU_EVENT_SCI9_ERI                      = (0x1A), // DEPRECATED, do not use
    ICU_EVENT_SCI9_RXI                      = (0x1E), // DEPRECATED, do not use
    ICU_EVENT_SCI9_TEI                      = (0x1E), // DEPRECATED, do not use
    ICU_EVENT_SCI9_TXI                      = (0x1C), // DEPRECATED, do not use
    ICU_EVENT_SPI0_ERI                      = (0x10), // DEPRECATED, do not use
    ICU_EVENT_SPI0_IDLE                     = (0x10), // DEPRECATED, do not use
    ICU_EVENT_SPI0_RXI                      = (0x14), // DEPRECATED, do not use
    ICU_EVENT_SPI0_TEI                      = (0x11), // DEPRECATED, do not use
    ICU_EVENT_SPI0_TXI                      = (0x11), // DEPRECATED, do not use
    ICU_EVENT_WDT_UNDERFLOW                 = (0x06), // DEPRECATED, do not use
} icu_event_t;

#define BSP_PRV_VECT_ENUM(event, group)  (ICU_ ## event ## _ ## group)

#define ELC_PERIPHERAL_NUM    (16U)
#define BSP_OVERRIDE_ELC_PERIPHERAL_T
/** Possible peripherals to be linked to event signals
 * @note This list is device specific.
 * */
typedef enum e_elc_peripheral
{
    ELC_PERIPHERAL_GPT_A         = (0),
    ELC_PERIPHERAL_GPT_B         = (1),
    ELC_PERIPHERAL_GPT_C         = (2),
    ELC_PERIPHERAL_GPT_D         = (3),
    ELC_PERIPHERAL_ADC0          = (8),
    ELC_PERIPHERAL_ADC0_B        = (9),
    ELC_PERIPHERAL_IOPORT1       = (14),
    ELC_PERIPHERAL_IOPORT2       = (15)
} elc_peripheral_t;

/** Positions of event link set registers (ELSRs) available on this MCU */
#define BSP_ELC_PERIPHERAL_MASK  (0x0000C30FU)

/* UNCRUSTIFY-ON */
/** @} (end addtogroup BSP_MCU_RA2E3) */

#endif
