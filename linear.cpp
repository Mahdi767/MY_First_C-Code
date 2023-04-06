#include<stdio.h>
int main (){

int a[5]={10,20,30,40,50},i=0,item;

printf("Input searching item!\n");
scanf("%d",&item);
while( i<5){
    if(a[i] == item){
        printf("Element founded at..%d",i);
        break;
    }
    i++;
}
if(i>=5){
    printf("Item not founded\n");
}
return 0;
}
