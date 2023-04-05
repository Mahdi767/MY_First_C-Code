#include<stdio.h>
int main (){
    char name[20];
    printf("Enter your name :\n");
    //scanf("%s",name);
    gets(name);
    printf("%s\n",name);
return 0;
}
