#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int wipe_4_5_6(int num){
    return (num & ~(7 << 4));
}
int change_4_5_6(int num,int val){
    return (num & ~(7 << 4)) | (val << 4);
}
int main(void)
{
    uint32_t num;
    scanf("%u", &num);
    printf("Number after wiping bits 4, 5, 6: %u\n", wipe_4_5_6(num));
    int val;
    scanf("%d", &val);
    num = change_4_5_6(num, val);
    printf("Number after changing bits 4, 5, 6 to %d: %u\n", val, num);
	printf("Hello\n");
	return 0;
}