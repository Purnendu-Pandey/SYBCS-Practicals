#include<stdio.h>
void qsort(int [],int,int);
int part(int [],int,int);
void main()
{
    int i,n,a[10];
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter the value in array :\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    qsort(a,0,n-1);

    printf("Sorted data in ascending order");
    for(i=0;i<n;i++)
       printf(" %d ",a[i]);
}
void qsort(int a[],int lb,int ub)
{
    int j;
    if(lb<ub)
    {
        j=part(a,lb,ub);
        qsort(a,lb,j-1);
        qsort(a,j+1,ub);
    }
}
int part(int a[],int lb,int ub)
{
    int down=lb,up=ub,pivot=a[lb],temp;
    while(down<up)
    {
        while(a[down]<=pivot)
        down++;
        while(a[up]>pivot)
        up--;
    if (down<up)
        {
        temp=a[down];
        a[down]=a[up];
        a[up]=temp;
        }
    }
    a[lb]=a[up];
    a[up]=pivot;
    return up;
}
/*
Enter the size of array :5
Enter the value in array :
96
82
74
65
88
Sorted data in ascending order 65  74  82  88  96
*/