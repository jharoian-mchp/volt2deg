/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  1.1.0
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H_INCLUDED
#define PINS_H_INCLUDED

#include <avr/io.h>
#include "./port.h"

//get/set SPI_MISO aliases
#define SPI_MISO_SetHigh() do { PORTA_OUTSET = 0x4; } while(0)
#define SPI_MISO_SetLow() do { PORTA_OUTCLR = 0x4; } while(0)
#define SPI_MISO_Toggle() do { PORTA_OUTTGL = 0x4; } while(0)
#define SPI_MISO_GetValue() (VPORTA.IN & (0x1 << 2))
#define SPI_MISO_SetDigitalInput() do { PORTA_DIRCLR = 0x4; } while(0)
#define SPI_MISO_SetDigitalOutput() do { PORTA_DIRSET = 0x4; } while(0)
#define SPI_MISO_SetPullUp() do { PORTA_PIN2CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define SPI_MISO_ResetPullUp() do { PORTA_PIN2CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define SPI_MISO_SetInverted() do { PORTA_PIN2CTRL  |= PORT_INVEN_bm; } while(0)
#define SPI_MISO_ResetInverted() do { PORTA_PIN2CTRL  &= ~PORT_INVEN_bm; } while(0)
#define SPI_MISO_DisableInterruptOnChange() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define SPI_MISO_EnableInterruptForBothEdges() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define SPI_MISO_EnableInterruptForRisingEdge() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define SPI_MISO_EnableInterruptForFallingEdge() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define SPI_MISO_DisableDigitalInputBuffer() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define SPI_MISO_EnableInterruptForLowLevelSensing() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PA2_SetInterruptHandler SPI_MISO_SetInterruptHandler

//get/set SPI_MOSI aliases
#define SPI_MOSI_SetHigh() do { PORTA_OUTSET = 0x2; } while(0)
#define SPI_MOSI_SetLow() do { PORTA_OUTCLR = 0x2; } while(0)
#define SPI_MOSI_Toggle() do { PORTA_OUTTGL = 0x2; } while(0)
#define SPI_MOSI_GetValue() (VPORTA.IN & (0x1 << 1))
#define SPI_MOSI_SetDigitalInput() do { PORTA_DIRCLR = 0x2; } while(0)
#define SPI_MOSI_SetDigitalOutput() do { PORTA_DIRSET = 0x2; } while(0)
#define SPI_MOSI_SetPullUp() do { PORTA_PIN1CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define SPI_MOSI_ResetPullUp() do { PORTA_PIN1CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define SPI_MOSI_SetInverted() do { PORTA_PIN1CTRL  |= PORT_INVEN_bm; } while(0)
#define SPI_MOSI_ResetInverted() do { PORTA_PIN1CTRL  &= ~PORT_INVEN_bm; } while(0)
#define SPI_MOSI_DisableInterruptOnChange() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define SPI_MOSI_EnableInterruptForBothEdges() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define SPI_MOSI_EnableInterruptForRisingEdge() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define SPI_MOSI_EnableInterruptForFallingEdge() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define SPI_MOSI_DisableDigitalInputBuffer() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define SPI_MOSI_EnableInterruptForLowLevelSensing() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PA1_SetInterruptHandler SPI_MOSI_SetInterruptHandler

//get/set SPI_SCK aliases
#define SPI_SCK_SetHigh() do { PORTA_OUTSET = 0x8; } while(0)
#define SPI_SCK_SetLow() do { PORTA_OUTCLR = 0x8; } while(0)
#define SPI_SCK_Toggle() do { PORTA_OUTTGL = 0x8; } while(0)
#define SPI_SCK_GetValue() (VPORTA.IN & (0x1 << 3))
#define SPI_SCK_SetDigitalInput() do { PORTA_DIRCLR = 0x8; } while(0)
#define SPI_SCK_SetDigitalOutput() do { PORTA_DIRSET = 0x8; } while(0)
#define SPI_SCK_SetPullUp() do { PORTA_PIN3CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define SPI_SCK_ResetPullUp() do { PORTA_PIN3CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define SPI_SCK_SetInverted() do { PORTA_PIN3CTRL  |= PORT_INVEN_bm; } while(0)
#define SPI_SCK_ResetInverted() do { PORTA_PIN3CTRL  &= ~PORT_INVEN_bm; } while(0)
#define SPI_SCK_DisableInterruptOnChange() do { PORTA.PIN3CTRL = (PORTA.PIN3CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define SPI_SCK_EnableInterruptForBothEdges() do { PORTA.PIN3CTRL = (PORTA.PIN3CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define SPI_SCK_EnableInterruptForRisingEdge() do { PORTA.PIN3CTRL = (PORTA.PIN3CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define SPI_SCK_EnableInterruptForFallingEdge() do { PORTA.PIN3CTRL = (PORTA.PIN3CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define SPI_SCK_DisableDigitalInputBuffer() do { PORTA.PIN3CTRL = (PORTA.PIN3CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define SPI_SCK_EnableInterruptForLowLevelSensing() do { PORTA.PIN3CTRL = (PORTA.PIN3CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PA3_SetInterruptHandler SPI_SCK_SetInterruptHandler

//get/set CS_AD aliases
#define CS_AD_SetHigh() do { PORTC_OUTSET = 0x8; } while(0)
#define CS_AD_SetLow() do { PORTC_OUTCLR = 0x8; } while(0)
#define CS_AD_Toggle() do { PORTC_OUTTGL = 0x8; } while(0)
#define CS_AD_GetValue() (VPORTC.IN & (0x1 << 3))
#define CS_AD_SetDigitalInput() do { PORTC_DIRCLR = 0x8; } while(0)
#define CS_AD_SetDigitalOutput() do { PORTC_DIRSET = 0x8; } while(0)
#define CS_AD_SetPullUp() do { PORTC_PIN3CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define CS_AD_ResetPullUp() do { PORTC_PIN3CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define CS_AD_SetInverted() do { PORTC_PIN3CTRL  |= PORT_INVEN_bm; } while(0)
#define CS_AD_ResetInverted() do { PORTC_PIN3CTRL  &= ~PORT_INVEN_bm; } while(0)
#define CS_AD_DisableInterruptOnChange() do { PORTC.PIN3CTRL = (PORTC.PIN3CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define CS_AD_EnableInterruptForBothEdges() do { PORTC.PIN3CTRL = (PORTC.PIN3CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define CS_AD_EnableInterruptForRisingEdge() do { PORTC.PIN3CTRL = (PORTC.PIN3CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define CS_AD_EnableInterruptForFallingEdge() do { PORTC.PIN3CTRL = (PORTC.PIN3CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define CS_AD_DisableDigitalInputBuffer() do { PORTC.PIN3CTRL = (PORTC.PIN3CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define CS_AD_EnableInterruptForLowLevelSensing() do { PORTC.PIN3CTRL = (PORTC.PIN3CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PC3_SetInterruptHandler CS_AD_SetInterruptHandler

//get/set CS_7S1 aliases
#define CS_7S1_SetHigh() do { PORTC_OUTSET = 0x10; } while(0)
#define CS_7S1_SetLow() do { PORTC_OUTCLR = 0x10; } while(0)
#define CS_7S1_Toggle() do { PORTC_OUTTGL = 0x10; } while(0)
#define CS_7S1_GetValue() (VPORTC.IN & (0x1 << 4))
#define CS_7S1_SetDigitalInput() do { PORTC_DIRCLR = 0x10; } while(0)
#define CS_7S1_SetDigitalOutput() do { PORTC_DIRSET = 0x10; } while(0)
#define CS_7S1_SetPullUp() do { PORTC_PIN4CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define CS_7S1_ResetPullUp() do { PORTC_PIN4CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define CS_7S1_SetInverted() do { PORTC_PIN4CTRL  |= PORT_INVEN_bm; } while(0)
#define CS_7S1_ResetInverted() do { PORTC_PIN4CTRL  &= ~PORT_INVEN_bm; } while(0)
#define CS_7S1_DisableInterruptOnChange() do { PORTC.PIN4CTRL = (PORTC.PIN4CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define CS_7S1_EnableInterruptForBothEdges() do { PORTC.PIN4CTRL = (PORTC.PIN4CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define CS_7S1_EnableInterruptForRisingEdge() do { PORTC.PIN4CTRL = (PORTC.PIN4CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define CS_7S1_EnableInterruptForFallingEdge() do { PORTC.PIN4CTRL = (PORTC.PIN4CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define CS_7S1_DisableDigitalInputBuffer() do { PORTC.PIN4CTRL = (PORTC.PIN4CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define CS_7S1_EnableInterruptForLowLevelSensing() do { PORTC.PIN4CTRL = (PORTC.PIN4CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PC4_SetInterruptHandler CS_7S1_SetInterruptHandler

//get/set CS_7S2 aliases
#define CS_7S2_SetHigh() do { PORTC_OUTSET = 0x20; } while(0)
#define CS_7S2_SetLow() do { PORTC_OUTCLR = 0x20; } while(0)
#define CS_7S2_Toggle() do { PORTC_OUTTGL = 0x20; } while(0)
#define CS_7S2_GetValue() (VPORTC.IN & (0x1 << 5))
#define CS_7S2_SetDigitalInput() do { PORTC_DIRCLR = 0x20; } while(0)
#define CS_7S2_SetDigitalOutput() do { PORTC_DIRSET = 0x20; } while(0)
#define CS_7S2_SetPullUp() do { PORTC_PIN5CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define CS_7S2_ResetPullUp() do { PORTC_PIN5CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define CS_7S2_SetInverted() do { PORTC_PIN5CTRL  |= PORT_INVEN_bm; } while(0)
#define CS_7S2_ResetInverted() do { PORTC_PIN5CTRL  &= ~PORT_INVEN_bm; } while(0)
#define CS_7S2_DisableInterruptOnChange() do { PORTC.PIN5CTRL = (PORTC.PIN5CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define CS_7S2_EnableInterruptForBothEdges() do { PORTC.PIN5CTRL = (PORTC.PIN5CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define CS_7S2_EnableInterruptForRisingEdge() do { PORTC.PIN5CTRL = (PORTC.PIN5CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define CS_7S2_EnableInterruptForFallingEdge() do { PORTC.PIN5CTRL = (PORTC.PIN5CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define CS_7S2_DisableDigitalInputBuffer() do { PORTC.PIN5CTRL = (PORTC.PIN5CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define CS_7S2_EnableInterruptForLowLevelSensing() do { PORTC.PIN5CTRL = (PORTC.PIN5CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PC5_SetInterruptHandler CS_7S2_SetInterruptHandler

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize();

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SPI_MISO pin. 
 *        This is a predefined interrupt handler to be used together with the SPI_MISO_SetInterruptHandler() method.
 *        This handler is called every time the SPI_MISO ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void SPI_MISO_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SPI_MISO pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for SPI_MISO at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void SPI_MISO_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SPI_MOSI pin. 
 *        This is a predefined interrupt handler to be used together with the SPI_MOSI_SetInterruptHandler() method.
 *        This handler is called every time the SPI_MOSI ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void SPI_MOSI_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SPI_MOSI pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for SPI_MOSI at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void SPI_MOSI_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SPI_SCK pin. 
 *        This is a predefined interrupt handler to be used together with the SPI_SCK_SetInterruptHandler() method.
 *        This handler is called every time the SPI_SCK ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void SPI_SCK_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SPI_SCK pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for SPI_SCK at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void SPI_SCK_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for CS_AD pin. 
 *        This is a predefined interrupt handler to be used together with the CS_AD_SetInterruptHandler() method.
 *        This handler is called every time the CS_AD ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void CS_AD_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for CS_AD pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for CS_AD at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void CS_AD_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for CS_7S1 pin. 
 *        This is a predefined interrupt handler to be used together with the CS_7S1_SetInterruptHandler() method.
 *        This handler is called every time the CS_7S1 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void CS_7S1_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for CS_7S1 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for CS_7S1 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void CS_7S1_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for CS_7S2 pin. 
 *        This is a predefined interrupt handler to be used together with the CS_7S2_SetInterruptHandler() method.
 *        This handler is called every time the CS_7S2 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void CS_7S2_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for CS_7S2 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for CS_7S2 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void CS_7S2_SetInterruptHandler(void (* interruptHandler)(void)) ; 
#endif /* PINS_H_INCLUDED */
