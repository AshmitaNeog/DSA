#include<stdio.h>

int main(){
    char firstName[]="ASHMITA ";
    char lastName[]="NEOG";

    for (int i = 0; i < 8; i++)
    {
        printf("%c  ", firstName[i]);
    }

    printf("\t");

    for (int i = 0; i < 5; i++)
    {
        printf("%c", lastName[i]);
    }

    return 0;


    
}