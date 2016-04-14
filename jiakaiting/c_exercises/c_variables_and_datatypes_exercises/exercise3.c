#include <stdio.h>
#include <stdlib.h>

/********************************************************
* @Author: jiakaiting
* @Brief: Write a C program to declare two integer
* and one float variables then initialize them to 10, 15,
* and 12.6. It then prints these values on the screen.
* @CreatedTime: 14/4/16.
*********************************************************/

int main(int argc, char *argv[])
{
    int x;
    int y;
    float z;
    x = 10;
    y = 15;
    z = 12.6;
    printf("x= %d",x);printf("\t");
    printf("y= %d",y);printf("\t");
    printf("z= %3.1f",z);
    printf("\n");
    return 0;
}
