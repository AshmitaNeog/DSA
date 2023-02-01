// binary search
#include<stdio.h>
#include<stdbool.h>
#include<time.h>

bool binarySearch(int arr[], int start, int end, int key);

int main(){
    int key;
    int size;
    int i;
    int arr[100],start=0,end=size-1;

    double total_time;
    clock_t startClock, endClock;

    startClock= clock();

     printf("enter the no. of elements:");
    scanf("%d", &size);
    
    printf("enter the array elements in ascending order.");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("enter the element to be searched:");
    scanf("%d", &key);

    int found=binarySearch(arr, 0, size-1, key);

    if(found){
        printf("element %d is found at index %d.", key, i+1);
    }
    else{
        printf("element %d not found.", key);
    }

    endClock= clock();
    total_time=(double)(endClock-startClock)/CLOCKS_PER_SEC;
    printf("\nTIME= %lf", total_time);
    return 0;
}

bool binarySearch(int arr[], int start, int end, int key){
    // base case
    if(start>end){
        return false;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        return binarySearch(arr, mid+1, end, key);
    }
    else{
        return binarySearch(arr, start, mid-1, key);
    }
}