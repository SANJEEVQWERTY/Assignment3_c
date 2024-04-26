//write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number are");                   //if we want last digit are remove then we used division method
    scanf("%d",&x);
    printf("these number are %d",x/10);
    return 0;
}
