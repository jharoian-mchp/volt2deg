/**
 * Generated Driver File
 * 
 * @file pins.c
 * 
 * @ingroup  pinsdriver
 * 
 * @brief This is generated driver implementation for pins. 
 *        This file provides implementations for pin APIs for all pins selected in the GUI.
 *
 * @version Driver Version 1.1.0
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

#include "../pins.h"

static void (*SPI_MISO_InterruptHandler)(void);
static void (*SPI_MOSI_InterruptHandler)(void);
static void (*SPI_SCK_InterruptHandler)(void);
static void (*CS_AD_InterruptHandler)(void);
static void (*CS_7S1_InterruptHandler)(void);
static void (*CS_7S2_InterruptHandler)(void);

void PIN_MANAGER_Initialize()
{

  /* OUT Registers Initialization */
    PORTA.OUT = 0x0;
    PORTB.OUT = 0x0;
    PORTC.OUT = 0x8;

  /* DIR Registers Initialization */
    PORTA.DIR = 0x0;
    PORTB.DIR = 0x0;
    PORTC.DIR = 0x3D;

  /* PINxCTRL registers Initialization */
    PORTA.PIN0CTRL = 0x0;
    PORTA.PIN1CTRL = 0x0;
    PORTA.PIN2CTRL = 0x0;
    PORTA.PIN3CTRL = 0x0;
    PORTA.PIN4CTRL = 0x0;
    PORTA.PIN5CTRL = 0x0;
    PORTA.PIN6CTRL = 0x0;
    PORTA.PIN7CTRL = 0x0;
    PORTB.PIN0CTRL = 0x0;
    PORTB.PIN1CTRL = 0x0;
    PORTB.PIN2CTRL = 0x0;
    PORTB.PIN3CTRL = 0x0;
    PORTB.PIN4CTRL = 0x0;
    PORTB.PIN5CTRL = 0x0;
    PORTB.PIN6CTRL = 0x0;
    PORTB.PIN7CTRL = 0x0;
    PORTC.PIN0CTRL = 0x0;
    PORTC.PIN1CTRL = 0x0;
    PORTC.PIN2CTRL = 0x0;
    PORTC.PIN3CTRL = 0x0;
    PORTC.PIN4CTRL = 0x0;
    PORTC.PIN5CTRL = 0x0;
    PORTC.PIN6CTRL = 0x0;
    PORTC.PIN7CTRL = 0x0;

  /* PORTMUX Initialization */
    PORTMUX.CCLROUTEA = 0x0;
    PORTMUX.EVSYSROUTEA = 0x0;
    PORTMUX.SPIROUTEA = 0x1;
    PORTMUX.TCAROUTEA = 0x0;
    PORTMUX.TCBROUTEA = 0x0;
    PORTMUX.USARTROUTEA = 0x0;

  // register default ISC callback functions at runtime; use these methods to register a custom function
    SPI_MISO_SetInterruptHandler(SPI_MISO_DefaultInterruptHandler);
    SPI_MOSI_SetInterruptHandler(SPI_MOSI_DefaultInterruptHandler);
    SPI_SCK_SetInterruptHandler(SPI_SCK_DefaultInterruptHandler);
    CS_AD_SetInterruptHandler(CS_AD_DefaultInterruptHandler);
    CS_7S1_SetInterruptHandler(CS_7S1_DefaultInterruptHandler);
    CS_7S2_SetInterruptHandler(CS_7S2_DefaultInterruptHandler);
}

/**
  Allows selecting an interrupt handler for SPI_MISO at application runtime
*/
void SPI_MISO_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    SPI_MISO_InterruptHandler = interruptHandler;
}

void SPI_MISO_DefaultInterruptHandler(void)
{
    // add your SPI_MISO interrupt custom code
    // or set custom function using SPI_MISO_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for SPI_MOSI at application runtime
*/
void SPI_MOSI_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    SPI_MOSI_InterruptHandler = interruptHandler;
}

void SPI_MOSI_DefaultInterruptHandler(void)
{
    // add your SPI_MOSI interrupt custom code
    // or set custom function using SPI_MOSI_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for SPI_SCK at application runtime
*/
void SPI_SCK_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    SPI_SCK_InterruptHandler = interruptHandler;
}

void SPI_SCK_DefaultInterruptHandler(void)
{
    // add your SPI_SCK interrupt custom code
    // or set custom function using SPI_SCK_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for CS_AD at application runtime
*/
void CS_AD_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    CS_AD_InterruptHandler = interruptHandler;
}

void CS_AD_DefaultInterruptHandler(void)
{
    // add your CS_AD interrupt custom code
    // or set custom function using CS_AD_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for CS_7S1 at application runtime
*/
void CS_7S1_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    CS_7S1_InterruptHandler = interruptHandler;
}

void CS_7S1_DefaultInterruptHandler(void)
{
    // add your CS_7S1 interrupt custom code
    // or set custom function using CS_7S1_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for CS_7S2 at application runtime
*/
void CS_7S2_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    CS_7S2_InterruptHandler = interruptHandler;
}

void CS_7S2_DefaultInterruptHandler(void)
{
    // add your CS_7S2 interrupt custom code
    // or set custom function using CS_7S2_SetInterruptHandler()
}
ISR(PORTA_PORT_vect)
{ 
    /* Clear interrupt flags */
    VPORTA.INTFLAGS = 0xff;
}

ISR(PORTB_PORT_vect)
{ 
    /* Clear interrupt flags */
    VPORTB.INTFLAGS = 0xff;
}

ISR(PORTC_PORT_vect)
{ 
    // Call the interrupt handler for the callback registered at runtime
    if(VPORTC.INTFLAGS & PORT_INT1_bm)
    {
       SPI_MISO_InterruptHandler(); 
    }
    if(VPORTC.INTFLAGS & PORT_INT2_bm)
    {
       SPI_MOSI_InterruptHandler(); 
    }
    if(VPORTC.INTFLAGS & PORT_INT0_bm)
    {
       SPI_SCK_InterruptHandler(); 
    }
    if(VPORTC.INTFLAGS & PORT_INT3_bm)
    {
       CS_AD_InterruptHandler(); 
    }
    if(VPORTC.INTFLAGS & PORT_INT4_bm)
    {
       CS_7S1_InterruptHandler(); 
    }
    if(VPORTC.INTFLAGS & PORT_INT5_bm)
    {
       CS_7S2_InterruptHandler(); 
    }
    /* Clear interrupt flags */
    VPORTC.INTFLAGS = 0xff;
}

/**
 End of File
*/