//Set-A2
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[20],i,n,x,temp;

    printf("Enter the size of array :");
    scanf("%d",&n);

    printf("Enter the %d integer :",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter the number to find :");
    scanf("%d",&x);
    temp=a[n-1];
    a[n-1]=x;
    i=0;
    while(a[i]!=x)
    {
        i++;
    }
        a[n-1]=temp;
        {
            if(a[i]==x)
            printf("%d found at position %d",x,i+1);
            else
            printf("%s not found ",x); 
        }
}
/*
output:-
Enter the size of array :5
Enter the 5 integer :14
46
85
79
96
Enter the number to find :79
79 found at position 4
*/