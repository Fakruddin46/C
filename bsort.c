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
    for (i =0 ; i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nelements of after sorting:");
    for (i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
}