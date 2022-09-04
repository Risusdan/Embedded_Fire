#include "stm32f10x.h" 
#include "macro.h"

int main(void)
{
/***************************************************************
 * Init
 ***************************************************************/
	/* Enable GPIOB clock. */
	SET_BIT(RCC_APB2ENR,BIT3);
	/* Configure PB5 as push-pull, and the speed is 10M. */	
	CLR_BIT(GPIOB_CRL,BIT23);
	CLR_BIT(GPIOB_CRL,BIT22);
	CLR_BIT(GPIOB_CRL,BIT21);
	SET_BIT(GPIOB_CRL,BIT20);
	/* Configure PB0 as push-pull, and the speed is 10M. */	
	CLR_BIT(GPIOB_CRL,BIT3);
	CLR_BIT(GPIOB_CRL,BIT2);
	CLR_BIT(GPIOB_CRL,BIT1);
	SET_BIT(GPIOB_CRL,BIT0);
	/* Configure PB1 as push-pull, and the speed is 10M. */	
	CLR_BIT(GPIOB_CRL,BIT7);
	CLR_BIT(GPIOB_CRL,BIT6);
	CLR_BIT(GPIOB_CRL,BIT5);
	SET_BIT(GPIOB_CRL,BIT4);

/***************************************************************
 * Application
 ***************************************************************/
	/* PB5 output LOW can light up red LED. */
	// CLR_BIT(GPIOB_ODR,BIT5);
	/* PB0 output LOW can light up green LED. */
	// SET_BIT(GPIOB_ODR,BIT0);
	/* PB1 output LOW can light up blue LED. */
	// SET_BIT(GPIOB_ODR,BIT1);

	/* Keep running the loop */
	while(1)
	{
		for (int i = 0; i < 100000; i++)
		{
			/* do nothing */
		};
		TOG_BIT(GPIOB_ODR,BIT5);
		SET_BIT(GPIOB_ODR,BIT0);
		SET_BIT(GPIOB_ODR,BIT1);
	};
}

void SystemInit(void)
{	
	/* Null function to avoid compiling error. */
}
