#include <stdio.h>  
void countingsort(int a[], int k, int n)
{
    int i, j;
    int b[15], c[100];
    for (i=0;i<=k;i++)
        c[i] = 0;
    for (j=1;j<=n;j++)
        c[a[j]] = c[a[j]] + 1;
    for (i=1;i<=k;i++)
        c[i]=c[i]+c[i-1];
    for (j=n;j>=1;j--)
    {
        b[c[a[j]]]=a[j];
        c[a[j]]=c[a[j]]-1;
    }
    printf("The Sorted array is : ");
    for (i=1;i<=n;i++)
        printf(" %d ",b[i]);
}

int main()
{
    int n,k=0,a[15],i;
    printf("Enter the number of input :");
    scanf("%d",&n);
    printf("Enter the elements to be sorted :\n");
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if (a[i]>k) 
        {
            k=a[i];
        }
    }
    countingsort(a, k, n);
    printf("\n");
    return 0;
}
/*
Enter the number of input :5
Enter the elements to be sorted :
77
88
44
22
11
The Sorted array is :  11  22  44  77  88 
*/