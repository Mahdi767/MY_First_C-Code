#include<stdio.h>
int main(){
int x;
printf("You are :  ");
scanf("%d",&x);
if( x < 2){
    printf("Infant");
}else if( x < 10){
printf("Child");
}else if( x < 20){
printf("Teenage");
}else if ( x <= 30){
    printf("Adult");
}else if ( x > 30){
printf("Old");
}

return ;
}

