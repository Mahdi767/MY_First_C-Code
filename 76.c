#include<stdio.h>
int main(){
    int x = 10;
    int *p;
    p = &x;
printf("Value of x : %d\n",x);
printf("Value of x : %d\n",*p);

return 0;
}
