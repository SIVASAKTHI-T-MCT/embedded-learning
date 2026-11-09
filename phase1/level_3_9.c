#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int add(int a,int b){
    return(a+b);
}
int sub(int a ,int b){
    return(a-b);
}
int mul(int a,int b){
    return(a*b);
}
int main(void)
{
    int (*ops[3])(int,int)={add,sub,mul};
    int i;
    scanf("%d",&i);
    int a,b;
    
    if(i<0 || i>2){
        printf("Invalid operation\n");
        return 0;
    }
    else{
        scanf("%d %d",&a,&b);
        printf("Result:%d\n",ops[i](a,b));
    }
	printf("Hello\n");
	return 0;
}