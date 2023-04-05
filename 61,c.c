#include<stdio.h>
int main (){
    float n = 7,sum = 0;
    printf("Enter the size of array : \n");
    scanf("%f",&n);
    int arr[n];
    float i ;
    for(i = 0;i < n ;i ++){
        scanf("%d",&arr[i]);
        sum = arr[i];
        }
        float average = sum / n;
printf("The average of entered number :%f",average);
return 0;
}
