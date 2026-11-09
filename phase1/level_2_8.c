#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef struct{
    volatile uint32_t moder;
    volatile uint32_t odr;
    volatile uint32_t idr;
} GPIO_TypeDef;
GPIO_TypeDef GPIOA;
void set_bit(volatile uint32_t* num,uint8_t k){
    *num |= (1 << k);
}
void clear_bit(volatile uint32_t* num,uint8_t k){
    *num &= ~(1 << k);
}
void toggle_bit(volatile uint32_t* num,uint8_t k){
    *num ^= (1 << k);
}
int main(void)
{
    int pin;
    scanf("%d", &pin);
    set_bit(&GPIOA.odr, pin);
    printf("%02x\n", GPIOA.odr);
    toggle_bit(&GPIOA.odr, pin);
    printf("%02x\n", GPIOA.odr);
    toggle_bit(&GPIOA.odr, pin);
    printf("%02x\n", GPIOA.odr);
    clear_bit(&GPIOA.odr, pin);
    printf("%02x\n", GPIOA.odr);

    set_bit(&GPIOA.moder, 2*pin);
    printf("%02x\n", GPIOA.moder);
    clear_bit(&GPIOA.moder, 2*pin+1);
    printf("%02x\n", GPIOA.moder);
	printf("Hello\n");
	return 0;
}