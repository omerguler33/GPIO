#include <stdio.h>
#include <stdint.h>

#define GPIO_PIN_0          (uint16_t)(0x0000)                   // GPIO PIN 0 SELECTED
#define GPIO_PIN_1          (uint16_t)(0x0002)                   // GPIO PIN 1 SELECTED
#define GPIO_PIN_2          (uint16_t)(0x0004)                   // GPIO PIN 2 SELECTED
#define GPIO_PIN_3          (uint16_t)(0x0008)                   // GPIO PIN 3 SELECTED
#define GPIO_PIN_4          (uint16_t)(0x0010)                   // GPIO PIN 4 SELECTED
#define GPIO_PIN_5          (uint16_t)(0x0020)                   // GPIO PIN 5 SELECTED
#define GPIO_PIN_6          (uint16_t)(0x0040)                   // GPIO PIN 6 SELECTED
#define GPIO_PIN_7          (uint16_t)(0x0080)                   // GPIO PIN 7 SELECTED
#define GPIO_PIN_8          (uint16_t)(0x0100)                   // GPIO PIN 8 SELECTED
#define GPIO_PIN_9          (uint16_t)(0x0200)                   // GPIO PIN 9 SELECTED
#define GPIO_PIN_10         (uint16_t)(0x0400)                   // GPIO PIN 10 SELECTED
#define GPIO_PIN_11         (uint16_t)(0x0800)                   // GPIO PIN 11 SELECTED
#define GPIO_PIN_12         (uint16_t)(0x1000)                   // GPIO PIN 12 SELECTED
#define GPIO_PIN_13         (uint16_t)(0x2000)                   // GPIO PIN 13 SELECTED
#define GPIO_PIN_14         (uint16_t)(0x4000)                   // GPIO PIN 14 SELECTED
#define GPIO_PIN_15         (uint16_t)(0x8000)                   // GPIO PIN 15 SELECTED
#define GPIO_PIN_ALL        (uint16_t)(0xFFFF)                   // GPIO ALL PIN SELECTED
#define position_max_value  (uint16_t)(16U) 


int main(void)
{ 
	uint16_t GPIO_Pin_Selected = GPIO_PIN_11 | GPIO_PIN_3 | GPIO_PIN_12 | GPIO_PIN_1;

	for (uint16_t position = 0; position < position_max_value; position++) {

		uint16_t fakeposition = (0x1U << position);
		uint16_t isThere = (GPIO_Pin_Selected) & fakeposition;
		
		if (isThere == fakeposition) {

			printf("%d position = pinN ,%#X is your fake , %#X is there , %d is there :\n\n ", position, fakeposition, isThere,isThere);

		}




	}























	return(0);
}