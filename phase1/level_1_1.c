#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int SetBit(int num,int k){

    return (num | (1 << k));
}
int ClearBit(int num,int k){

    return (num & ~(1 << k));
}
int ToggleBit(int num,int k){

    return (num ^ (1 << k));
}
int checkBit(int num,int k){

    return (num & (1 << k));
}
int main(void)
{
	printf("Hello\n");
    printf("SetBit(5,1) = %d\n", SetBit(5,1));
    printf("ClearBit(5,0) = %d\n", ClearBit(5,0));
    printf("ToggleBit(5,0) = %d\n", ToggleBit(5,0));
    printf("checkBit(5,2) = %d\n", checkBit(5,2));
	return 0;
}