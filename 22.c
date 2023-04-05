#include<stdio.h>
int multiplication;
int main (){
    int a , b;
    a =5;
    b = 7;
    int summation(int a, int b){
        int s;
        s = a+b;
        return s;
    }
    int multiplication(int a, int b){
    int m;
    m = a * b;
    return m;\
    }
int sum,mul;
    sum = summation(a,b);
    mul = multiplication(a,b);
    printf("summation = %d\n",sum);
    printf("multiplication = %d",mul);
return 0;
}

