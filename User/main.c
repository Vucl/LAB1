#include <stm32f4xx.h>
#include <Lab1_Test.h>

uint32_t Lab1_Test_ini(char *name);
uint8_t get_variant(void);
uint32_t test;

int main(void)
{
	while(1)
	{
		test = Lab1_Test_ini("Petrunin");
		get_variant();
	}
}
