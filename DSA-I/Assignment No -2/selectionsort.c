#include<stdio.h>
void select(int a[],int n);
void main()
{   
    int a[10],n,i;
    printf("Enter the size of array :\n");
    scanf("%d",&n);
    printf("Enter the value into array :\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    select(a,n);
    printf("Sorted array in ascending order is : ");
    for (i=0;i<n;i++)
        printf(" %d ",a[i]);
}
void select(int a[],int n)
{
    int i,j,min,temp;

    for (i=0;i<n-1;i++)
    {
        min=i;
        for (j=i+1;j<n;j++)
            if(a[j]<a[min])
                min=j;
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];  
            a[min]=temp; 
        }
    
    }
}
/*
Enter the size of array :
5
Enter the value into array :
47
98
65
79
82
Sorted array in ascending order is :  47  65  79  82  98 
*/