#include <stdio.h> 
void main(void) 
{ 
    int val1; 
    int val2; 
    int val3; 
    printf("Please enter your 3 numbers:"); 
    scanf("%d %d %d",&val1,&val2,&val3); 
    printf("\nYour numbers forward:\n"); 
    printf("%d",val1);printf("\n"); 
    printf("%d",val2);printf("\n"); 
    printf("%d",val3);printf("\n"); 
    printf("Your numbers reversed:\n"); 
    printf("%d",val3);printf("\n"); 
    printf("%d",val2);printf("\n"); 
    printf("%d",val1);printf("\n");     
    return 0; 
} 
