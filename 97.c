#include<stdio.h>
int main(){
int A[10],i,n,x,f=0;
printf("Bhai Size ka bataw");
scanf("%d",&n);
printf("Enter Element\n");
for(i =0;i<n;i++){
    scanf("%d",&A[i]);
}
printf("Enter element U wnnaa?");
scanf("%d",&x);
for(i =0;i<n;i++){
    if(A[i] == x){
        printf("Your Element found at..%d Postion",i);
        f=1;
        break;
    }
}
if(f==0){
    printf("%d Not founded",i);
}

return 0;
}


