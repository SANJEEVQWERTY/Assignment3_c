//Write a program to print last digit number.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    printf("these last digit no are %d",x%10);
    return 0;
}