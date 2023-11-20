#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    void bub(int a[],int n);
    int a[10],n,i,j,temp,min;
    printf("Enter the size of array :\n");
    scanf("%d",&n);
    printf("Enter the value in array :\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    bub(a,n);
    printf("Array in ascending order is :\n");
    for (i=0;i<n;i++)
        printf("%d \t",a[i]);
}
void bub(int a[],int n)
{
    int i,j,temp;
    for (i=0;i<n-1;i++)
        for (j=0;j<n-1;j++)
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];  
            a[j+1]=temp; 
        }
}
/*
Enter the size of array :
5
Enter the value in array :
16
22
45
69
85
Array in ascending order is :
16      22      45      69      85
*/