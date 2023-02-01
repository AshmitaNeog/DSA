#include<stdio.h>

void printArray(int *A, int size){
    for(int i=0; i<size; i++){
        printf("%d  ", A[i]);
    }
    printf("\n");
}

void Bsort(int *A, int size){
    int temp;
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1-i; j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

int main(){
    int A[]={12, 54, 65, 7, 23, 9};
    int size=6;

    printArray(A, size);

    Bsort(A, size);

    printArray(A, size);

    return 0;
}