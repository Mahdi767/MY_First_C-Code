#include<stdio.h>
int main(){
    printf("Pointer in C Introduction:\n");
int x,y,z;
x = 10;
y = 20;
z = 50;
int *p1,*p2,*p3;
p1 = &x;s
p2 = &y;
p3 = &z;
if(*p1>*p2 && *p1>*p3 ){
    printf("The largest number is %d\n",*p1);
}else if(*p2>*p1 && *p2>*p3){
    printf("The largest number is %d\n",*p2);
}else{

    printf("The largest number is %d\n",*p3);
}
return 0;
}
