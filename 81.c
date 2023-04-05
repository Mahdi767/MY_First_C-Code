#include<stdio.h>
int binarySearch(int a[], int x, int low, int high)
{
while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] == x)
        {
            return mid;
        }

        if (a[mid] < x)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main(void)
{
    int n,x,i;

    printf("Enter the size of array: \n");
    scanf("%d",&n);
    int arr[n];
printf("Enter %d elements of the array: \n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
}
for(int i = 0;i<n;i++){
    for(int j = i+1;j<n;j++){
        if(arr[i]> arr[j]){
           int temp =arr [i];
            arr[i] =arr[j];
            arr[j] =temp;
        }
    }
}
printf("The Sorted Number of Array:");
for(int i =0;i<n;i++){
    printf("\n%d\n",arr[i]);
}
printf("\nEnter the element you want to find in that array: \n");
    scanf("%d",&x);

    int ans = binarySearch(arr, x, 0, n - 1);
    if (ans == -1)
    {
        printf("Not found");
    }
    else
    {
        printf("Element %d is found at index %d", x, ans);
    }
    return 0;
}
