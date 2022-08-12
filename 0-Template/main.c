#include "stm32f10x.h" 

int main(void)
{
	/* Enable GPIOB clock. */
	RCC_APB2ENR |= (1<<3);
	/* Clear PB0 control bit. */
	GPIOB_CRL &= ~( 0x0F<< (4*0));
	/* Configure PB0 as push-pull, and the speed is 10M. */	
	GPIOB_CRL |= (1<<4*0);
	/* PB0 output LOW. */
	GPIOB_ODR &= ~(1<<0);

	while(1);
}

void SystemInit(void)
{	
	/* Null function to avoid compiling error. */
}
