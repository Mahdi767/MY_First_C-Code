#include<stdio.h>
int main(){
int A[100],size,i,j,pos;
printf("enter size");
scanf("%d",&size);
printf("enter the element of array");
for(i=0;i<size;i++){
    scanf("%d",&A[i]);}
    printf("Enter pos for delete");
    scanf("%d",&pos);
    for(i = pos;i<size;i++){
        A[i] =A[i+1];
    }        size--;


printf("Updated");
for(i =0;i<size;i++){
    printf("%d ",A[i]);
}
return 0;
}
