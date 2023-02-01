/*a. Write a function to find sum of digits of a number using recurssion.*/
#include<stdio.h>

int sum(int n);

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);

    int s=sum(n);

    printf("sum of digits is:%d", s);

    return 0;

}

int sum(int n){
    if (n==0)
    {
        return 0;
    }
    
    return ((n%10)+sum(n/10));
}