#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
union U{
    uint32_t num;
    uint8_t bytes[4];
};
int main(void)
{
    union U u;
    scanf("%u", &u.num);
    for(int i=0;i<4;i++){
        printf("Byte %d: %02x\n", i, u.bytes[i]);
    }
    printf("sizeof(union U): %zu\n", sizeof(union U));
	printf("Hello\n");
	return 0;
}