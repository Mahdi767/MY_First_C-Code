#include<stdio.h>
#include<string.h>
int main (){
char a[] ="Bangladesh";
char b[] ="Dhaka";
int x = strcmp(a,b);
if(x == 0){
    printf("a and b is equal :\n ");
}else{
printf("a and b is not equal : \n");
}
return 0;
}
