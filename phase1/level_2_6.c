#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
struct Student{
    char name[100];
    char rollno[10];
    int mark;
};
int main(void)
{
    struct Student stu[5];
    for(int i=0;i<5;i++){
        scanf("%s %s %d", stu[i].name, stu[i].rollno, &stu[i].mark);
    }
    int max=stu[0].mark;
    for(int i=1;i<5;i++){
        if(stu[i].mark>max){
            max=stu[i].mark;
        }
    }
    for(int i=0;i<5;i++){
        if(stu[i].mark==max){
            printf("%s %s %d\n", stu[i].name, stu[i].rollno, stu[i].mark);
        }
    }
	printf("Hello\n");
	return 0;
}