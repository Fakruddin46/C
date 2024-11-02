#include<stdio.h>
void swap(int arr[],int i , int j)
{
    int temp;
    temp = i ;
    i = j;
    j = temp ;
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i = low+1;
    int j = high;
    while (i<=j)
    {
        while(arr[i]<arr[pivot]&&i<high)
        {
            i++;
        }
        while(arr[j]>arr[pivot]&&j>=low)
        {
            j--;
        }
        if (i<j)
        {
            swap(arr,i,j);
        }
    }
    swap(arr,low,j);
    return j;
}
void quicksort(int arr[],int low,int high)
{
    if (low<high)
    {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high); 
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
    quicksort(arr,0,n);
    printf("\nelements of after sorting:");
    for (i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
}