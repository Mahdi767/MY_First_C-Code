#include<stdio.h>
int main () {
    int a;
    printf("Enter the value of a: \n");
    scanf("%d",&a);

    if( a%3 == 0 || a%5 == 0){
    printf("This number is divisible by 3 or 5");
}else{
printf("This number is not divisible by 3 or 5");
}
return 0;
}
