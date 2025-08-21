/**
 * @file 7seg.c
 * @author c14029
 * @date 2025-08-20
 * @brief Write to 7seg display
 */

#include "My_MCC_Config/mcc/mcc_generated_files/system/system.h"
#include "My_MCC_Config/mcc/mcc_generated_files/spi/spi0.h"

// 7-segment display patterns for digits 0-9
static const uint8_t seven_seg_patterns[] = {
    0x3F,  // 0: abcdef--
    0x06,  // 1: -bc-----
    0x5B,  // 2: ab-de-g-
    0x4F,  // 3: abcd--g-
    0x66,  // 4: -bc--fg-
    0x6D,  // 5: a-cd-fg-
    0x7D,  // 6: a-cdefg-
    0x07,  // 7: abc-----
    0x7F,  // 8: abcdefg-
    0x6F   // 9: abcd-fg-
};

/**
 * @brief Initialize the 7-segment display
 */
void seven_seg_init(void)
{
    SPI0_Initialize();
    SPI0_Open(0);
}

/**
 * @brief Display a single digit on the 7-segment display
 * @param digit The digit to display (0-9)
 */
void seven_seg_display_digit(uint8_t digit)
{
    if (digit <= 9) {
        uint8_t pattern = seven_seg_patterns[digit];
        while(!SPI0_IsTxReady());
        CS_7S1_SetLow();
        SPI0_ByteWrite(pattern);
        while(!SPI0_IsTxReady());
        CS_7S1_SetHigh();
    }
}

/**
 * @brief Display a number on multiple 7-segment displays
 * @param number The number to display
 * @param num_digits Number of digits to display
 */
void seven_seg_display_number(uint16_t number, uint8_t num_digits)
{
    uint8_t digits[4];
    
    // Extract individual digits
    for (int i = num_digits - 1; i >= 0; i--) {
        digits[i] = number % 10;
        number /= 10;
    }
    
    // Send digits to displays (most significant digit first)
    for (int i = 0; i < num_digits; i++) {
        SPI0_ByteWrite(seven_seg_patterns[digits[i]]);
    }
}

/**
 * @brief Clear the 7-segment display
 */
void seven_seg_clear(void)
{
    while(!SPI0_IsTxReady());
    CS_7S1_SetLow();
    SPI0_ByteWrite(0x00);
    while(!SPI0_IsTxReady());
    CS_7S1_SetHigh();
}




