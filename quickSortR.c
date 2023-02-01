// quick sort
#include<stdio.h>
#include<time.h>

void quickSort(int arr[], int start, int end);
int partition(int arr[], int start, int end);

int main(){
    int n=5;
    int arr[100];

    
    double total_time;
    clock_t startClock, endClock;

    startClock= clock();

    printf("Enter the no. of array elements:");
    scanf("%d", &n);

    printf("Enter the array elements:");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

  
    quickSort(arr, 0, n-1);
    
    for(int i=0; i<n; i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");

    
    endClock= clock();
    total_time=(double)(endClock-startClock)/CLOCKS_PER_SEC;
    printf("\nTIME= %lf", total_time);

    return 0;
}

void quickSort(int arr[], int start, int end){
    // base case
    if(start>=end){
        return;
    }
    // partition, p is index
    int p=partition(arr, start, end);  //index of pivot after partition
    
    quickSort(arr, start, p-1);//sorting left part
    
    quickSort(arr, p+1, end);//sorting right part
}

int partition(int *arr, int start, int end){
    int pivot=arr[start];                                      // 2 6 4 8 1 0      2 is pivot
                                                               // p i       j

    int i=start+1;                                            // 2 0 4 8 1 6
    int j=end;                                                // p   i   j
    int temp;
                                                              // 2 0 1 8 4 6
    do{                                                       // p   j i          

        while(arr[i]<=pivot){                                 // 1 0 2 8 4 6
            i++;                                  //     1 0         2            8 4 6
        }                                         //     p j                      p   ji

        while(arr[j]>pivot){                      //     0 1                      6 4           8
                                                 //                               p ij
            j--;
        }                               //                                        4 6
        if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;                                      // 0 1 2 4 6 8
        }
    }while(i<j);
    
    temp=arr[start];
    arr[start]=arr[j];
    arr[j]=temp;
    
    return j;
}
  
