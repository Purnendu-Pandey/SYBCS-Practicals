#include<stdio.h>
#include<stdlib.h>

struct node
{
       int coe;
       int exp;
       struct node *next;
}*t,*temp;

 int n;
struct node* create();
void display (struct node *);
struct node* addpoly(struct node *,struct node *);

void main ()
{
     int n;
     struct node *p1=NULL,*p2=NULL,*p=NULL;
     printf("\n\n Enter the first polynomial <Enter 0  0 to exit> : ");
     p1=create();
     printf("\n The first polynomial  \t : ");
     display(p1);
     printf("\n\n Enter the second  polynomial <Enter 0  0 to exit>: ");
     p2=create();
     display(p2);
     
     printf("\n The addition of polynomial : \n ");
     p=addpoly(p1,p2);
     display(p);
}

struct node* create()
{
       
             int i,coe1=1,exp1,n;
             struct node *pp=NULL;
             for (pp=NULL,i=1;coe1!=0;i++)
             {
                 temp=malloc(sizeof(struct node *));
                 printf ("\n Enter the coeficient and exponent<In descending order> for  term %d  : ",i);        
                 scanf("%d%d",&coe1,&exp1);     
                 if (coe1==0 && exp1==0)
                    return (pp);
                 if (pp!=NULL)
                    if (t->exp<exp1)
                    {
                       printf("\n \n   Enter the polynomial <In descending order> \n  ");
                       i--;
                       continue;  
                    }       
                temp->coe=coe1;
                temp->exp=exp1;
                temp->next=NULL;
                if (i==1)
                   pp=t=temp;
                else
                {
                   t->next=temp;
                   t=t->next;
                }
             
            }               
}
void display(struct node *t)
{
     if (t==NULL)
        printf("\n Polynomial is empty..");
     else
     {
        printf ("\n\n "); 
        for (;t->next!=NULL;t=t->next)
             printf ("%dX^%d + ",t->coe,t->exp);
        printf ("%dX^%d = 0  ",t->coe,t->exp);
    
     }
}

struct node* addpoly(struct node *p1,struct node *p2)


{
           struct node *p;
           for (p=NULL;p1!=NULL && p2!=NULL;)
           {
                temp=malloc(sizeof(struct node *));
                if (p1->exp==p2->exp)
                {
                    temp->coe=p1->coe+p2->coe;
                    temp->exp=p1->exp;
                    p1=p1->next;
                    p2=p2->next;
                }
                 else if (p1->exp>p2->exp)
                {
                     temp->exp=p1->exp;
                     temp->coe=p1->coe;
                     p1=p1->next;
                }
                else
                {
                     temp->exp=p2->exp;
                     temp->coe=p2->coe;
                     p2=p2->next;
                  
                 }
                 if (p==NULL)
                    p=t=temp;
                 else
                 {
                    t->next=temp;
                    t=t->next;
                 }
         }
         if (p1==NULL)
            t->next=p2;
         if (p2==NULL)
            t->next=p1;
         return(p);    
}
/*
OUTPUT

Enter the first polynomial <Enter 0  0 to exit> : 

Enter the coeficient and exponent<In descending order> for  term 1  : 4 4  
Enter the coeficient and exponent<In descending order> for  term 2  : 2 2
Enter the coeficient and exponent<In descending order> for  term 3  : 9 0
Enter the coeficient and exponent<In descending order> for  term 4  : 0 0

The first polynomial : 4X^4 + 2X^2 + 9X^0 = 0  

Enter the second  polynomial <Enter 0  0 to exit>: 
Enter the coeficient and exponent<In descending order> for  term 1  : 5 5
Enter the coeficient and exponent<In descending order> for  term 2  : 3 3
Enter the coeficient and exponent<In descending order> for  term 3  : 1 1
Enter the coeficient and exponent<In descending order> for  term 4  : 0 0

5X^5 + 3X^3 + 1X^1 = 0  
The addition of polynomial : 
5X^5 + 4X^4 + 3X^3 + 2X^2 + 1X^1 + 9X^0 = 0
*/