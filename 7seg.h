/**
 * @file 7seg.h
 * @author c14029
 * @date 2025-08-20
 * @brief Header file for 7-segment display functions
 */

#ifndef SEVEN_SEG_H
#define SEVEN_SEG_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Initialize the 7-segment display
 * 
 * This function initializes the SPI interface and opens the SPI0 connection
 * for communication with the 7-segment display.
 */
void seven_seg_init(void);

/**
 * @brief Display a single digit on the 7-segment display
 * @param digit The digit to display (0-9)
 * 
 * This function displays a single digit (0-9) on the 7-segment display
 * using the appropriate bit pattern for the digit.
 */
void seven_seg_display_digit(uint8_t digit);

/**
 * @brief Display a number on multiple 7-segment displays
 * @param number The number to display
 * @param num_digits Number of digits to display
 * 
 * This function displays a multi-digit number on multiple 7-segment displays.
 * The number is sent digit by digit, with the most significant digit first.
 */
void seven_seg_display_number(uint16_t number, uint8_t num_digits);

/**
 * @brief Clear the 7-segment display
 * 
 * This function clears all segments of the 7-segment display by sending
 * a zero pattern (0x00).
 */
void seven_seg_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* SEVEN_SEG_H */
