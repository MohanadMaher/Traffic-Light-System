#include "lab1.h"
#include "tm4c123gh6pm.h"
#include <stdint.h>
#include <stdbool.h>
#include "driverlib/hw_memmap.h"
#include "driverlib/debug.h"
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"
#include "driverlib/uart.h" 
#include "driverlib/pin_map.h"
#include "driverlib/systick.h"
#include "driverlib/interrupt.h"
#include "driverlib/timer.h"
int main(void)
{
    GPIOF_init();
    GPIOD_init();
    GPIOC_init();
    Timer0in();
    Timer1in();
    UARTin();
    while(1){

    }
	return 0;
}