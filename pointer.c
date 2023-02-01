#include<stdio.h>

void arithmetic(int a, int b, int *sum, int *product, int *avg);

int main(){
    float a=5, b=6;
    int sum, product, avg;
    arithmetic(a, b, &sum, &product, &avg);
    printf("sum=%d, prod=%d, avg=%d\n", sum, product, avg);
   
    return 0;

}

void arithmetic(int a, int b, int *sum, int *product, int *avg){
    *sum=a+b;
    *product=a*b;
    *avg=(a+b)/2;
    
}