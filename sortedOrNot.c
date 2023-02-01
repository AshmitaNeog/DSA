//tell if the array is sorted or not
#include<stdio.h>
#include<stdbool.h>

bool isSorted(int *arr, int size);

int main(){
    int arr[5]={1,2,6,4,5};
    int size=5;

    bool ans=isSorted(arr, size);

    if(ans){
        printf("array is sorted.");
    }
    else{
        printf("array is not sorted.");
    }

   return 0;
}

bool isSorted(int *arr, int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart=isSorted(arr+1, size-1);
        return remainingPart;
    }
}
