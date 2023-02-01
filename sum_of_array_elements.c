#include<stdio.h>

int sum(int arr[], int size);

int main(){
    int arr[5]={1,2,3,4,7};
    int size=5;

    printf("%d\n", sum(arr, size));


    return 0;
}

int sum(int arr[], int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    return ( sum(arr, size-1) + arr[size-1]);
}