#include<stdio.h>
void binary(int b[],int n,int key);
void main()
{
     int n,b[15],key,i;
     printf ("\n Enter the dataset size : ");
     scanf ("%d",&n);
     printf ("\n Enter the dataset elements in sorted order: ");
     for (i=0;i<n;i++)
     {
         scanf ("%d",&b[i]);
         if (i>=1 && b[i-1]>b[i])
         {
             printf("\n Enter data in sorted order.\n ");
             return;
         }   
     }     
     printf ("\n The Input data elements are : \n\t\t");
     for (i=0;i<n;i++)
         printf ("%d ",b[i]);
     printf ("\n Enter element to be search: ");
     scanf ("%d",&key);
  
     binary(b,n,key);
}
void binary(int b[],int n,int key)
{
     int l=0,h=n-1;
     while (l<=h)
     {
            int mid=(l+h)/2;
            if (b[mid]==key)
            {
               printf ("\n %d elememnt found at %d position.",b[mid],mid-51);
               return;
            }
            else if (key<b[mid])
                  h=mid-1;
            else
               l=mid+1;
    
     }
     printf("\n %d element not found in dataset",key);
}