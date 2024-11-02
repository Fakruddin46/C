#include<stdio.h>
void merge(int arr[],int l , int mid , int h)
{
    int left,right,n,j,i;
    left=l;
    right=mid+1;
    int k=0;
    int merged[h-l+1];
    while(left<=mid && right<=h)
    {
        if(arr[left]<=arr[right])
        {
            merged[k++]=arr[left++];
        }
        else{
            merged[k++]=arr[right++];
        }
    }
    while (left <= mid) {
        merged[k++] = arr[left++];
    }

    // Copy remaining elements of the right subarray, if any
    while (right <= h) {
        merged[k++] = arr[right++];
    }

    // Copy merged elements back into the original array
    for (int i = 0; i < k; i++) {
        arr[l + i] = merged[i];
    }
}
void mergeSort(int arr[], int l, int h)
{
    if ( l<h)
    {
        int mid=(l+h)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,h);
        merge(arr,l,mid,h);
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
    m_sort(arr,0,n);
    printf("\nelements of after sorting:");
    for (i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
}