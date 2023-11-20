#include<stdio.h>
#include<stdlib.h>

struct node
{
       int data;
       struct node *next;
}*t,*temp;

 
struct node* create(int);
void display (struct node *);
struct node* merge(struct node *,struct node *);

void main ()
{
     int n;
     struct node *l1=NULL,*l2=NULL,*l=NULL;
     printf("\n\nEnter the first ordered list : ");
     printf("\nEnter number of nodes : ");
     scanf("%d",&n);
     if (n<=0)
     {
        printf("\nInvalid number of nodes ....... ");
        return;
     }
     l1=create(n);
     printf("\nThe first ordered list : ");
     display(l1);
     printf("\n\nEnter the second ordered list : ");
     printf("\nEnter number of nodes : ");
     scanf("%d",&n);
     if (n<=0)
     {
        printf("\nInvalid number of nodes ....... ");
        return;
     }
     l2=create(n);
     display(l2);
     
     printf("\nThe newly merge list : \n ");
     l=merge(l1,l2);
     display(l);
}

struct node *create (int n)
{
             struct node *ll;
             int i,num;
             for (ll=NULL,i=1;i<=n;i++)
             {
                 printf ("\n Enter the data for  node %d : ",i);        
                 scanf ("%d",&num);
                 if (ll!=NULL)
                    if (t->data>num)
                    {
                       printf("\n Invalid order ");
                       i--;
                       continue;  
                    }
                temp=malloc(sizeof(struct node *));
                temp->data=num;
                if (i==1)
                   ll=t=temp;
                else
                {
                   t->next=temp;
                   t=t->next;
                }
            }    
            t->next=NULL;
            return(ll);
}
void display(struct node *t)
{
     if (t==NULL)
        printf("\n Link list is empty..");
     else
     {
        printf ("\n\n start-->"); 
        for (;t!=NULL;t=t->next)
             printf ("%d-->",t->data);
        printf("NULL\n\n");  
     }
}
struct node* merge(struct node *l1,struct node *l2)
{
           struct node *ll;
           for (ll=NULL;l1!=NULL && l2!=NULL;)
           {
                temp=malloc(sizeof(struct node *));
                if (l1->data > l2->data)
                {
                    printf("\n 3 l2 : l1>l2");
                    temp->data=l2->data;
                    l2=l2->next;
                }
                else if (l1->data<l2->data)
                {
                     printf("\n 4 l1 : l2>l1 ");
                     temp->data=l1->data;
                     l1=l1->next;
                }
                else
                {
                     printf("\n 5 l1=l2");
                     temp->data = l1->data;
                     l1=l1->next;
                     if (ll==NULL)
                         ll=t=temp;
                     else
                     {
                        t->next=temp;
                        t=t->next;
                     }
                     temp->next=malloc(sizeof(struct node *));
                     temp=temp->next;
                     temp->data=l2->data;
                     l2=l2->next;
                 }
                 if (ll==NULL)
                    ll=t=temp;
                 else
                 {
                    t->next=temp;
                    t=t->next;
                 }
         }
         if (l1==NULL)
         {
            printf("\n 6");
            t->next=l2;
         }
         if (l2==NULL)
         {
            printf("\n 7");
            t->next=l1;
         }
         return(ll);    
}
/*

OUTPUT :-

Enter the first ordered list : 
Enter number of nodes : 3
Enter the data for  node 1 : 11
Enter the data for  node 2 : 22
Enter the data for  node 3 : 33
The first ordered list :
start-->11-->22-->33-->NULL

Enter the second ordered list : 
Enter number of nodes : 3
Enter the data for  node 1 : 12
Enter the data for  node 2 : 23
Enter the data for  node 3 : 34
start-->12-->23-->34-->NULL

The newly merge list : 
 4 l1 : l2>l1 
 3 l2 : l1>l2
 4 l1 : l2>l1 
 3 l2 : l1>l2
 4 l1 : l2>l1 
 start-->11-->12-->22-->23-->33-->34-->NULL
*/