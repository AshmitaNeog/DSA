#include<stdio.h>
/*print final cost of 3 items with gst. gst is 18% of that amount*/
int main(){
    int item[3]={100.0, 200.0, 300.0};

    /*printf("enter price of item1:");
    scanf("%d", &item[0]);

    printf("enter price of item2:");
    scanf("%d", &item[1]);

    printf("enter price of item3:");
    scanf("%d", &item[2]);*/

   printf("total price of 1: %f\n", item[0]+(0.18*item[0]));
   printf("total price of 2: %f\n", item[1]+(0.18*item[1]));
   printf("total price of 3: %f\n", item[2]+(0.18*item[2]));

    

    return 0;


}