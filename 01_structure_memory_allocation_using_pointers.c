// poniters within a structure & its memory allocation by pointers

#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[10];
    int age;
}*ptr;

int main()
{
    ptr = malloc(sizeof(struct student));
    
    printf(" enter student name \n");
    scanf("%s",(*ptr).name);
    printf("enter age\n");
    scanf("%d",&(*ptr).age);
    
    printf("student name : %s \n", (*ptr).name);
    printf("enter age : %d \n", (*ptr).age);    
    
    return 0;
}    
