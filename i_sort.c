#include<stdio.h>

void swap(int arr[], int i, int j) { // Use array and indices for swapping
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void i_sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            swap(arr, j - 1, j); // Pass the array and indices to swap
            j--; // Decrement j to avoid infinite loop
        }
    }
}
void main()
{
    int n,i,temp,j;
    printf("enter size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements to the array");
    for(i=0;i<n;i++)
    {
        printf("\nenter the element for %d:\t",i);
        scanf("%d",&arr[i]);
    }
    printf("elements before sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d\t ",arr[i]);
    }
    i_sort(arr,n);
    printf("\nelements of after sorting:");
    for (i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
}