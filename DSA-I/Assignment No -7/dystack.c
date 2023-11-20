//Set A2
#include<stdio.h>
#include<stdlib.h>
#define max 5
struct node 
{
   int data;
   struct node *next;
}*temp,*top;
int n;

void init();
void push(int n);
void display();
void pop();
void peek();
int isempty();


void init()
{
     top=NULL;
}
void push(int n)
{
     struct node *t=top;
     t=malloc(sizeof(struct node *));
     t->data=n;
     t->next=top;
     top=t;
} 
void display()
{
        struct node *t=top;
        printf ("Stack Top--> ");
        for (t=top;t!=NULL;t=t->next)
             printf (" %d",t->data);
}
void pop()
{
     int val;
     struct node *t=top;
     val=top->data;
     t->next=top->next;
     top=top->next;
     printf ("\n Popped element = %d\n",val);
}
void peek()
{
     printf ("\n Top element = %d\n",top->data);
}
int isempty()
{
     if (top==NULL)
         return 1;
     else
        return 0;
}
void main()
{
     int ch=1;
     init();
     while (ch>=1 && ch<=5)
     {
           printf ("\n    Dynamic Implementation STACK   \n");
           printf ("\n       1 : To push element into stack");
           printf ("\n       2 : To display elements in stack");
           printf ("\n       3 : To pop element from stack");
           printf ("\n       4 : To peek element in  stack");
           printf ("\n       5 : To check stack is empty ");
       
           printf ("\n\n Enter your option :");
           scanf ("%d",&ch);
           switch (ch)
           {
                  case 1:printf("\n Enter element to be inserted in stack : ");
                         scanf ("%d",&n);
                         push(n);
                         break;
                  case 2: if(isempty())
                            printf("\n Stack is empty ...");
                         else
                            display(); 
                         break;
                  case 3:if(isempty())
                            printf("\n Stack is empty ...");
                         else
                            pop(); 
                         break;
                  case 4:if(isempty())
                            printf("\n Stack is empty ...");
                         else
                           peek(); 
                         break;
                  case 5:if(isempty())
                            printf("\n Stack is empty ...");
                         else
                             printf("\n Stack is not empty ...");
          }
           if(ch!=2)
             display();
        }
 }
/*
Output :-
Dynamic Implementation STACK   
       1 : To push element into stack
       2 : To display elements in stack
       3 : To pop element from stack
       4 : To peek element in  stack
       5 : To check stack is empty 

Enter your option : 1
Enter element to be inserted in stack : 45
Stack Top-->  45

Dynamic Implementation STACK
       1 : To push element into stack
       2 : To display elements in stack
       3 : To pop element from stack
       4 : To peek element in  stack
       5 : To check stack is empty

Enter your option :1
Enter element to be inserted in stack : 96
Stack Top-->  96 45

Dynamic Implementation STACK
       1 : To push element into stack
       2 : To display elements in stack
       3 : To pop element from stack
       4 : To peek element in  stack
       5 : To check stack is empty

Enter your option :1
Enter element to be inserted in stack : 28
Stack Top-->  28 96 45

Dynamic Implementation STACK
       1 : To push element into stack
       2 : To display elements in stack
       3 : To pop element from stack
       4 : To peek element in  stack
       5 : To check stack is empty

Enter your option :1
Enter element to be inserted in stack : 64
Stack Top-->  64 28 96 45
    
Dynamic Implementation STACK
       1 : To push element into stack
       2 : To display elements in stack
       3 : To pop element from stack
       4 : To peek element in  stack
       5 : To check stack is empty

Enter your option :2
Stack Top-->  64 28 96 45

Dynamic Implementation STACK
       1 : To push element into stack
       2 : To display elements in stack
       3 : To pop element from stack
       4 : To peek element in  stack
       5 : To check stack is empty

Enter your option :3
Popped element = 64
Stack Top-->  28 96 45

Dynamic Implementation STACK
       1 : To push element into stack
       2 : To display elements in stack
       3 : To pop element from stack
       4 : To peek element in  stack
       5 : To check stack is empty

Enter your option :3
Popped element = 28
Stack Top-->  96 45

Dynamic Implementation STACK
       1 : To push element into stack
       2 : To display elements in stack
       3 : To pop element from stack
       4 : To peek element in  stack
       5 : To check stack is empty

Enter your option :4
Top element = 96
Stack Top-->  96 45
    
Dynamic Implementation STACK
       1 : To push element into stack
       2 : To display elements in stack
       3 : To pop element from stack
       4 : To peek element in  stack
       5 : To check stack is empty

Enter your option :4
Top element = 96
Stack Top-->  96 45

Dynamic Implementation STACK
       1 : To push element into stack
       2 : To display elements in stack
       3 : To pop element from stack
       4 : To peek element in  stack
       5 : To check stack is empty

Enter your option :5
Stack is not empty 
*/