/**
 * @file main.c
 * @author c14029
 * @date 2025-08-20
 * @brief Main function
 */

#include "My_MCC_Config/mcc/mcc_generated_files/system/system.h"
#include "7seg.h"

 int main(void)
 {
    SYSTEM_Initialize();

    seven_seg_init();
    
    seven_seg_clear();

    //seven_seg_display_digit(8);

     while(1)
     {
     }    
 }