#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int checkBit(int num,int k){

    return (num & (1 << k));
}
int main(void)
{
    uint32_t num;
    int a=0;
    scanf("%u", &num);
    for(int m=0;m<31;m++){
        if(checkBit(num,m)){
            a++;
        }
    }
	printf("Hello\n");
    printf("Number of set bits: %d\n", a);
	return 0;
}