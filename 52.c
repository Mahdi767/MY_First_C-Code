#include<stdio.h>
int main () {
    int a[2][3]={11,12,13,21,22,23},i,j;
    for(i =0;i<2;i++){
        for(j = 0;j<3;j++){
            printf("%d\n",a[i][j]);
        }
    }

 return 0;
}
