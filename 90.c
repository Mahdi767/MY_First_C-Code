#include<stdio.h>
int main (){
int size;
int arr[size];
scanf("%d",&size);
for(int i= 0;i<size;i++){
    scanf("%d",arr[i]);

} int pos,item;
scanf("%d",&pos);
scanf("%d",&pos);
size++;
for(int i = size-1;i>pos;i++){
    arr[i] = arr[i-1];
}
arr[pos] = item;
for(int i=0;i<size;i++){
    printf("%d",arr[i]);
}
return 0;
}
