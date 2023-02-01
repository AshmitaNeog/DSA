#include<stdio.h>

void bubbleSort(int *arr, int size);

int main(){
    int arr[5]={2,6,4,9,3};

    bubbleSort(arr, 5);

    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

void bubbleSort(int *arr, int size){
    // base case
    if(size==0||size==1){
        return;
    }
    int temp;
    for(int i=0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    size=size-1;
    bubbleSort(arr, size);
}