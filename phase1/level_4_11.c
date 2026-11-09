#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define STACK_SIZE 5
struct stack{
    int top;
    int arr[STACK_SIZE];
};
int isFull(struct stack *s){
    return(s->top==STACK_SIZE-1);
}
int isEmpty(struct stack *s){
    return(s->top==-1);
}
int push(struct stack *s,int data){
    if(isFull(s)){
        printf("Stack Overflow\n");
        return -1;
    }
    else{
        s->top++;
        s->arr[s->top]=data;
        return 0;
        
    }
}
int pop(struct stack *s,int *out){
    if(isEmpty(s)){
        printf("Stack Underflow\n");
        return -1;}
    else{
        int data=s->arr[s->top];
        s->top--;
        *out=data;
        return 0;
    }
}
int peek(struct stack *s,int *out){
    if(isEmpty(s)){
        printf("Stack is empty\n");
        return -1;
    }
    else{
        *out=s->arr[s->top];
        return 0;
    }
}
struct stack *stk;

int main(void)
{
    stk=(struct stack *)malloc(sizeof(struct stack));
    if(stk== NULL){
        printf("Memory allocation failed\n");
    }
    stk->top=-1;
     int data;
    if(push(stk,5)==0){
        printf("Pushed data:5\n");
    }
    if(push(stk,10)==0){
        printf("Pushed data:10\n");
    }
    if(push(stk,15)==0){
        printf("Pushed data:15\n");
    }
    if(push(stk,20)==0){
        printf("Pushed data:20\n");
    }
    if(push(stk,25)==0){
        printf("Pushed data:25\n");
    }
   if(push(stk,30)==0){
        printf("Pushed data:30\n");
    }
   
    
   if(pop(stk,&data)==0){
        printf("Popped data:%d\n",data);
    }
    if(pop(stk,&data)==0){
        printf("Popped data:%d\n",data);
    }
    if(pop(stk,&data)==0){
        printf("Popped data:%d\n",data);
    }
    if(pop(stk,&data)==0){
        printf("Popped data:%d\n",data);
    }
    if(pop(stk,&data)==0){
        printf("Popped data:%d\n",data);
    }
    if(pop(stk,&data)==0){
        printf("Popped data:%d\n",data);
    }
    if(peek(stk,&data)==0){
        printf("Top element:%d\n",data);
    }
    


	printf("Hello\n");
    free(stk);
	return 0;
}