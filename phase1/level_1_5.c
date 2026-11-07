#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int checkbit(int num,int k){
    return (num & (1 << k));
}
void swap(int num1,int num2){
    for(int i=0;i<32;i++){
        if(checkbit(num1,i) != checkbit(num2,i)){
            num1 = num1 ^ (1 << i);
            num2 = num2 ^ (1 << i);
        }
    }
    printf("After swapping: %u %u\n", num1,num2);
}
int main(void)
{
    uint32_t num1,num2;
    scanf("%u %u", &num1, &num2);
    swap(num1,num2);
	printf("Hello\n");
	return 0;
}