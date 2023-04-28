/**
 * 
 * 
 * Servo class for executing signals sent over uart
 * Written in APR 2023 for rp 2040 using zephyr RTOS. 
 * Gavin Tomlinson
 * 
 * 
 * 
 */

#include <zephyr/zephyr.h>
#include <zephyr/drivers/gpio.h>
#include <uC_Servo.h>



uC_Servo::uC_Servo()
{
    printk("hey neat youre in the servo code on the microcontroller");
}

uC_Servo::~uC_Servo()
{
    printk("hey neat youre in the servo code on the microcontroller");
}