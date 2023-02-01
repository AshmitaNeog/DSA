#include<stdio.h>

int sum(int n);

int main(){
    int n;
    printf("enter a number:");
    scanf("%d", &n);

    printf("the sum of %d numbers is: %d", n, sum(n));
}

int sum(int n){
    if(n==0){
        return 0;
    }
    int sumNm1=sum(n-1);
    int sumN=sumNm1+n;
    return sumN;
}