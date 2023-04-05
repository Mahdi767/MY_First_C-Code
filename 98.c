#include<stdio.h>
int main(){
    int A[100],i,n,pos,val;
    printf("Enter the size\n");
    scanf("%d", &n);
    printf("Enter Value\n");
    for( i =0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("In where DO u wNAT INPUT NEPHEW");
    scanf("%d",&pos);
    printf("Enter the value");
    scanf("%d",val);
    for(i = n-1;i>=pos -1;i--){
        A[i+1] = A[i];
    }
    A[pos-1] = val;
    n++;
    printf("Arary After insertion\n");
    for(i =0;i<n;i++){
        printf("%d",A[i]);
    }
    return 0;
}
