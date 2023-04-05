#include<stdio.h>
int main(){
  char ch;
  printf("Enter the value for test :\n");
  scanf("&c",&ch);
  if (ch == 'a'|| ch == 'e'|| ch == 'i'||ch =='o' || ch == 'u'){
    printf("Vowel");
  }else{
  printf("Consonant");
  }
return ;
}
