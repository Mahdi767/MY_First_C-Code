#include<stdio.h>
int main () {
int a[1000],i,n;
printf("Enter size of array:");
scanf("%d",&n);
printf("Enter %d elements in the array :");
for(i = 0;i <n;i++){
    scanf("%d",&a[i]);

}
printf("Sorted Element in array are:");
for(i = 0;i<n;i++){
    printf("%d\n",a[i]);
}
return 0;
}
