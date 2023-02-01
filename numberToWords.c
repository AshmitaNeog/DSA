//Write a C Program to Display a number in words using Recursion
#include<stdio.h>

void word(int n);

int main(){
    int n;
    printf("enter a number:");
    scanf("%d", &n);

    word(n);

    return 0;
}

void word(int n){
    if(n==0){
        return;
    }

    word(n/10); //  n/10: eleminates the last digit   (recursion function)

    switch (n%10)   // back traking
    {
    case 0: printf("zero ");
            break; 
    case 1: printf("one " );
            break; 
    case 2: printf("two ");
            break; 
    case 3: printf("three ");
            break; 
    case 4: printf("four ");
            break; 
    case 5: printf("five ");
            break; 
    case 6: printf("six ");
            break; 
    case 7: printf("seven ");
            break; 
    case 8: printf("eight ");
            break; 
    case 9: printf("nine ");
            break; 
        
        
    
    
    }
}