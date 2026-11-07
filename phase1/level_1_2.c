#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int checkBit(int num,int k){

    return (num & (1 << k));
}
int main(void)
{
    uint8_t num=5;
    for(int i=0;i<8;i++){
        if(checkBit(num,i)){
            printf("%d\n",1);
        }else{
            printf("%d\n",0);
        }
    }
	printf("Hello\n");
	return 0;
}