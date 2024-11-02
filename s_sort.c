#include<stdio.h>
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
    for(i=0;i<n-2;i++)
    {
        int mini=i;
        for(j=i;j<n-1;j++)
        {
            if(arr[j]<arr[mini])
            {
                mini=j;
            }
        }
        int temp;
        temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
    printf("\nelements of after sorting:");
    for (i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
}