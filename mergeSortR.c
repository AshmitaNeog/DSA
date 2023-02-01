// merge sort
#include<stdio.h>
#include<time.h>

void mergeSort(int arr[], int start, int end);
void merge(int arr[], int start, int mid, int end);

int main(){
    int size, i;
    int arr[100];

    double total_time;
    clock_t startClock, endClock;

    startClock= clock();

    printf("Enter the number of elements in array:");
    scanf("%d", &size);

    printf("Enter the array elements:");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, 0, size-1);

    printf("Sorted array:");
    for(int i=0; i<size; i++){
        printf("%d  ", arr[i]);
    }

    endClock= clock();
    total_time=(double)(endClock-startClock)/CLOCKS_PER_SEC;
    printf("\nTIME= %lf", total_time);

    return 0;

}

void mergeSort(int arr[], int start, int end){
    // base case
    if(start>=end){
        return;
    }
    int mid=(start+end)/2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);
}

void merge(int arr[], int start, int mid, int end){
    int i=start, j=mid+1, k=start, B[100];

    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            B[k]=arr[i];
            i++;
            k++;
        }
        else{
            B[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        B[k]=arr[i];
        k++;
        i++;
    }
    while(j<=end){
        B[k]=arr[j];
        k++;
        j++;
    }

    for(int i=start; i<=end; i++){
        arr[i]=B[i];
    }
}