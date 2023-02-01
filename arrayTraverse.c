#include<stdio.h>

int main(){
    int aadhar[5];
    int *ptr=&aadhar[0];

    for(int i=0; i<5;i++){
        printf("%d index: ",i);
        scanf("%d", (ptr+i));// or &aadhar[0]
    }

    for(int i=0; i<5; i++){
        printf("%d index=%d\n", i, *(ptr+i));//or aadhar[i]
    }
    return 0;
}