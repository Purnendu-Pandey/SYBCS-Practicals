//Set-A1
#include<stdio.h>
void main()
{
    int a[20],i,n,x;

    printf("Enter the size of array :");
    scanf("%d",&n);

    printf("Enter the %d integer :",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter the number to find :");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        if(a[i]==x)
    {
    printf("%d found at position %d",x,i+1);
    break; 
    }
    }
    if(i==n)
    printf("%d element not found \n",x);
}

/*
Enter the size of array :5
Enter the 5 integer :78
96
74
82
71
Enter the number to find :96
96 found at position 2
*/