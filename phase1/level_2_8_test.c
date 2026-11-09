#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
typedef struct{
    volatile uint32_t MODER;
    volatile uint32_t OTYPER;
    volatile uint32_t OSPEEDR;
    volatile uint32_t PUPDR;
    volatile uint32_t ODR;
    volatile uint32_t IDR;
    
    
} MY_GPIO_TypeDef;
int main(void)
{
	printf("Hello\n");
    printf("0x%zx\n", offsetof(MY_GPIO_TypeDef,ODR));
     printf("0x%zx\n", offsetof(MY_GPIO_TypeDef,IDR));
     printf("0x%zx\n", sizeof(MY_GPIO_TypeDef));
	return 0;
}