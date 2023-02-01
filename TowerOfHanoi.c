// tower of hanoi
#include<stdio.h>
#include<time.h>

void hanoi(int n, char source, char helper, char destination);

int main(){
    int n;
    double total_time;
    clock_t start, end;
    
    start = clock();
    printf("enter number of disks:");
    scanf("%d", &n);

    hanoi(n, 's', 'h', 'd');

    end=clock();
    total_time=(double)(end-start)/CLOCKS_PER_SEC;
    printf("time=%lf", total_time);

    return 0;
}

void hanoi(int n, char source, char helper, char destination){
    if(n==1){
        printf("Move disk %d from %c to %c.\n", n, source, destination);
        return;

    }
    hanoi(n-1, source, destination, helper);
    printf("Move disk %d from %c to %c.\n", n, source, destination);

    hanoi(n-1, helper, source, destination);

}