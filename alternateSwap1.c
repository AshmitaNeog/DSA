#include<stdio.h>

int main(){
    int arr[100];
    int size;

    printf("enter the size of array:");
    scanf("%d", &size);

    printf("enter the array elements:");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("elements before swapping:");
    for(int i=0; i<size; i++){
        printf(" %d ", arr[i]);
    }

    // swapping
    for(int i=0; i<size; i=i+2){
        if(i+1<size){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }

    printf("\nelements after swapping: ");
    for(int i=0; i<size; i++){
        printf(" %d ", arr[i]);
    }


    return 0;
}