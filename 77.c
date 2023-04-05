#include<stdio.h>
int main(){
    char x ='y';
    char *p;
    p = &x;
printf("Value of x : %c\n",x);
printf("Value of x : %c\n",*p);

return 0;
}

