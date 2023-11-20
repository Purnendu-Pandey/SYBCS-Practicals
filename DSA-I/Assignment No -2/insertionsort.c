#include<stdio.h>
void insertionsort(int a[],int n)
{
	int i,j,temp;
	for (i=1;i<n;i++)
     	{	 
        for(j=i;j>0 && a[j-1]>a[j];j--)
        {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
    	}
    	}
}
int main()
{
     int a[10],n,i;
     printf("Enter the size array :\n");
     scanf("%d",&n);
 
     printf("Enter element in array :\n",n);
           	for (i=0;i<n;i++)
                	scanf("%d",&a[i]);
    			insertionsort(a,n);
    			printf("The Sorted array in ascending order is : ");
         	for (i=0;i<n;i++)
     	  	{
              		printf("%d\t",a[i]);
          	}
         	 printf("\n");
         	 }
/*
Enter the size array :
5
Enter element in array :
14
96
75
32
12
The Sorted array in ascending order is : 12     14      32      75      96
*/