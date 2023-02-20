#include <stdio.h>
#include <stdint.h>
#define DISABLE 0X0U
#define ENABLE (!DISABLE)

#define GPIO_PIN_0  0x0001
#define GPIO_PIN_1  0x0002
#define GPIO_PIN_2  0x0004
#define GPIO_PIN_3  0x0008


void GPIO_WRITE_PIN(uint32_t* RegisterValue, uint8_t PinNumber, uint8_t PinState)
{
	if (PinState == ENABLE) {
		*RegisterValue = PinNumber;


	}
	else {
		*RegisterValue = PinNumber << 16U;

	}

}

int main(void)
{

	uint32_t GPIO_BSRR_REGISTER = 0x0;
	GPIO_WRITE_PIN(&GPIO_BSRR_REGISTER, GPIO_PIN_1 |GPIO_PIN_2, ENABLE);
	printf("%#X = %d ", GPIO_BSRR_REGISTER, GPIO_BSRR_REGISTER);
	GPIO_WRITE_PIN(&GPIO_BSRR_REGISTER, GPIO_PIN_1, DISABLE);
	printf("%#X = %d ", GPIO_BSRR_REGISTER, GPIO_BSRR_REGISTER);



	return(0);
}