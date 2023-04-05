#include<stdio.h>
int main(){
int A[5] ={10,20,30,40,50};
int index,val;
printf("You want to update..?");
scanf("%d",&index);
printf("Enter new value..?\n ");
scanf("%d",&val);
A[index] = val;
printf("The Updateted Array is ");
for(int i =0;i<5;i++){
    printf("%d ",A[i]);
}

return 0;
}

