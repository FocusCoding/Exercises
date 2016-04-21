
#include <stdio.h> 
/************************************************
* @Author: weiqiujuan
* @Brief: Write a C program to prompt the user to input her/his
          age and print it on the screen, as shown below
* @CreatedTime: 18/4/16.
*************************************************/	
 
void main(void) 
{ 
    int age; 
    printf("Enter your age:"); 
    scanf("%d",&age); 
    printf("You are %2d years old.\n",age);
    return 0; 
}
 