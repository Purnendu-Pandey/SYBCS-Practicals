#include<stdio.h>
void m_sort(int b[],int ,int );
void merge(int b[],int ,int ,int);
void main()
{
     int n,b[15],i;
     printf ("Enter the dataset size : ");
     scanf ("%d",&n);
     printf ("\n Enter the %d  dataset elements : ",n);
     for (i=0;i<n;i++)
         scanf ("%d",&b[i]);  
     printf ("\n The Input data elements are : \n\t\t");
     for (i=0;i<n;i++)
         printf (" %d ",b[i]);
     m_sort(b,0,n-1);
     printf ("\n The data elements in ascending sorted order : \n\t\t");
     for (i=0;i<n;i++)
         printf ("%d ",b[i]);
     printf("\n ");
}
void m_sort(int b[],int lb,int ub)
{
     int mid;
     if (lb<ub)
     {
         mid=(lb+ub)/2; 
         m_sort(b,lb,mid);
         m_sort(b,mid+1,ub);
         merge(b,lb,mid,ub);
     }
}
void merge(int b[],int lb,int mid,int ub)
{
     int i=lb,c[15],j=mid+1,k=lb;
     while (i<=mid && j<=ub)
     {
            if (b[i]<=b[j])
            {
                c[k]=b[i];
                k++;
                i++;
            }
            else
            {
                c[k]=b[j];
                k++;
                j++;
            }
      }
      while (i<=mid)
      {
            c[k]=b[i];
            k++;
            i++;
      }
      
      while (j<=ub)
      {
            c[k]=b[j];
            k++;
            j++;
      }
      j=0,k=0;
      while (j<=ub)
      {
            b[j]=c[k];
            j++;
            k++;
      }
 }             
               
/*
Enter the dataset size : 5
Enter the 5  dataset elements : 
99
12
77
23
55
The Input data elements are :  99  12  77  23  55 
The data elements in ascending sorted order : 12 23 55 77 99 
*/