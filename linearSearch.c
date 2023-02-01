#include<stdio.h>
#include<stdbool.h>

bool search(int arr[], int size, int key);

int main(){
    int arr[5]={7,3,5,9,1};
    int key;
    printf("enter the number to be searched:");
    scanf("%d", &key);

    bool found= search(arr, 5, key);

    if(found){
        printf("%d is present in the array.", key);
    }
    else{
        printf("%d not found.", key);
    }

   

    return 0;
}

bool search(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
        
        
            return 0;
        
    
}