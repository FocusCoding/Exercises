#include<stdio.h>
#include<stdlib.h>
/********************************************************   
+* @Author: biyouyue 
+* @Brief: Write a C program to prompt the user to input 
her/his age and print it on the screen.
+* @CreatedTime: 14/4/16.  
+*********************************************************/
int main(int argc,char*argv[])
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	printf("Your are %2d ",age);printf("years old.\n");

	system("PAUSE");
	return 0;
}
