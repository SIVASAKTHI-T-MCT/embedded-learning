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
int maxval(int a,int b){
    return(a>b?a:b);
}
int apply(int a,int b,int (*op)(int,int)){
    return op(a,b);
}
int apply_array(int arr[],int n,int (*op)(int,int)){
    int res=arr[0];
    for(int i=1;i<n;i++){
        res=op(res,arr[i]);
    }
    return res;
}
int main(void)
{
    int (*ops[4])(int,int)={add,sub,mul,maxval};
    int arr[5]={6,2,9,17,1};
    printf("%d\n",apply(5,3,ops[0]));
    printf("%d\n",apply(5,3,ops[1]));
    printf("%d\n",apply(5,3,ops[2]));
    printf("%d\n",apply(5,3,ops[3]));
    printf("%d\n",apply_array(arr,5,ops[0]));
    printf("%d\n",apply_array(arr,5,ops[1]));
    printf("%d\n",apply_array(arr,5,ops[2]));
    printf("%d\n",apply_array(arr,5,ops[3]));
	printf("Hello\n");
	return 0;
}