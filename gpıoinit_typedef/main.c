#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define __IO volatile

typedef struct {
	__IO uint32_t MODER;                     /* !< GGPIO port mode register                                    address offset = 0x0000             */
	__IO uint32_t OTYPER;                    /* !< GPIO port output type register                              Address offset = 0x0004             */
	__IO uint32_t OSPEEDR;                   /* !< GPIO port output SPEED register                             address offset = 0x0008             */
	__IO uint32_t PUPDR;                     /* !< GPIO port PULL-UP / PULL-DOWN register                      address offset = 0x000C             */
	__IO uint32_t IDR;                       /* !< GPIO port INPUT data register                               address offset = 0x0010             */
	__IO uint32_t ODR;                       /* !< GPIO port OUTPUT data register                              address offset = 0x0014             */
	__IO uint32_t BSRR;                      /* !< GPIO port bit set / reset register                          address offset = 0x0018             */
	__IO uint32_t AFR[2];                    /* !< GPIO alternate functionLOW/HÝGH register                    Address offset = 0x0020             */

}GPIO_TypeDef_t; 

typedef struct {
	
	uint32_t PinNumber;
	uint32_t Mode ;
	uint32_t OTYPE;
	uint32_t PUPD;
	uint32_t Speed;


}GPIO_InitTypeDef_t;


void GPIO_Init(GPIO_TypeDef_t* GPIOx, GPIO_InitTypeDef_t *GPIO_Config)
{
	GPIOx->MODER = GPIO_Config -> Mode;
	GPIOx->OTYPER = GPIO_Config -> OTYPE;


}



int main(void)
{
	GPIO_TypeDef_t* GPIOA = (GPIO_TypeDef_t*)malloc(sizeof(GPIO_TypeDef_t));
	GPIO_TypeDef_t* GPIOB = (GPIO_TypeDef_t*)malloc(sizeof(GPIO_TypeDef_t));
	GPIO_InitTypeDef_t GPIO_InitStructure = { 0 };
	GPIO_InitStructure.PinNumber = 0xB;
	GPIO_InitStructure.Mode = 0x3;
	GPIO_InitStructure.OTYPE = 0x1;
	GPIO_InitStructure.PUPD = 0X2;
	GPIO_InitStructure.Speed = 0x3;

	GPIO_Init(GPIOA, &GPIO_InitStructure);
	printf("Mode : %#X = %d /n OTYPE : %#X = %d /n", GPIOA->MODER, GPIOA->MODER ,GPIOA->OTYPER, GPIOA->OTYPER);

	free(GPIOA);
	return(0);
}