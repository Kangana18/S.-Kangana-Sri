#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int *arr,i,j,n,temp,k;
    printf("Enter te number of elements in the array");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        printf("Enter a number");
         scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Elements of array after sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nWhich smallest element do you want to determine");
    scanf("%d",&k);
    if(k<=n)
        printf("Desired smallest element is %d\n",arr[k-1]);
    else
        printf("Please enter a valid value for finding the particular smallest element\n");
    getch();
}
