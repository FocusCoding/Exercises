#include <stdio.h>
#include<stdlib.h>
/************************************************************************************************************
* @Author:shilina
* @Brief:Write a C program to prompt the user to input her/his age and print it on the screen, as shown below.
* @CreatedTime:4/5/16
**************************************************************************************************************/

int main(int argc,char *argv[])
{
    int age;
    printf("Enter your age");
    scanf("%d",&age);
    printf("You are %2d",age);
    printf("years old\n");

    return 0;
}
