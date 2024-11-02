#include<stdio.h>
void main()
{
    int n;
    int arr[n];
    printf("enter size of the array");
    scanf("%d",&n);
    printf("enter elements to the array\n ");
    for (int i =0;i<n;i++)
    {
        printf("enter element for: %d",i);
        scanf("%d",&arr[i]);
    }
    for ( int i =0; i<n ; i++)
    {
        printf("element at %d\n",arr[i]);
    }
}