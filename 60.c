#include<stdio.h>
float add(float a, float b){
return a + b;
}
float subtract(float a, float b){
return a - b;
}
float multiply(float a, float b){
return a * b;
}
float divide (float a, float b){
return a / b;
}


int main()
{
    float a,b;
printf("Enter the value of a and b : \n");
scanf("%f%f",&a,&b);
float add_result =add(a,b);
float subtract_result =subtract(a,b);
float multiply_result =multiply(a,b);
float divide_result =divide(a,b);
printf("Add : %.2f,subtract : %.2f,multiply : %.2f,divide : %.2f",add_result,subtract_result,multiply_result,divide_result);

return 0;
}
