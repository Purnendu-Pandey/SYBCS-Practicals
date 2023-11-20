//Set B1
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
}*temp;
struct node *front,*rear;
void init();
void add(int n);
int delete();
void display();
void peek();
int isempty();

void init()
{
     front=rear=NULL;
}
void add(int n)
{
     struct node *t;
     t=malloc(sizeof(struct node *));
     t->data=n;
     t->next=NULL;
     if (rear==NULL && front ==NULL)
         rear=front=t;
     else
     {
          rear->next=t;
          rear=t;
     }
}
int delete()
{
    int val;
    struct node *t=front;
    val=front->data;
    front=front->next;
    if (front==NULL)
       rear=NULL;
    return val;
}
void display()
{
     struct node *t;
     if (isempty())
        printf("\n Queue is empty ");
     else 
     { 
        printf("\n Queue : Front-->");
        for (t=front;t!=NULL;t=t->next)
             printf(" %d :",t->data);
        printf(" <--Rear \n\n ");
     }    
}
void peek()
{
    printf("\n FRONT element = %d\n ",front->data);
}
int isempty()
{
   if (front==NULL && rear ==NULL)
     return 1;
   else
     return 0;
}

int n;
void main()
{
     int ch=1;
     init();
     while (ch>=1 && ch<=5)
     {
           printf ("\n    DYANAMIC IMPLEMENTATION OF LINEAR QUEUE\n");
           printf ("\n       1 : To add element into queue");
           printf ("\n       2 : To display elements in queue");
           printf ("\n       3 : To delete element from queue");
           printf ("\n       4 : To peek element in  queue");
           printf ("\n       5 : To check queue is empty ");       
           printf ("\n\n Enter your option :");
           scanf ("%d",&ch);
           switch (ch)
           {
                  case 1: printf("\n Enter element to be inserted in queue : ");
                          scanf ("%d",&n);
                          add(n);
                          break;
                  case 2:if(isempty())
                           printf("\n Queue is empty ");
                         else                          
                            display(); 
                         break;
                  case 3:if(isempty())
                           printf("\n  Queue is empty");
                         else 
                            printf("The deleted element : %d",delete()); 
                         break;
                  case 4:if(isempty())
                           printf("\n  Queue is empty");
                         else
                           peek(); 
                         break;
                  case 5:if(isempty())
                           printf("\n  Queue is empty");
                         else  
                           printf("\n  Queue is not empty");
                         break;
                  default:printf ("\n\n Invalid option entered..\n\n");
           }
            if(ch!=2 )
            display();
       }           
}
/*
DYANAMIC IMPLEMENTATION OF LINEAR QUEUE
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty 

Enter your option :1
Enter element to be inserted in queue : 85
Queue : Front--> 85 : <--Rear

DYANAMIC IMPLEMENTATION OF LINEAR QUEUE
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty

Enter your option :1
Enter element to be inserted in queue : 90
Queue : Front--> 85 : 90 : <--Rear

DYANAMIC IMPLEMENTATION OF LINEAR QUEUE
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty

Enter your option :1
Enter element to be inserted in queue : 75
Queue : Front--> 85 : 90 : 75 : <--Rear

DYANAMIC IMPLEMENTATION OF LINEAR QUEUE
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty

Enter your option :1
Enter element to be inserted in queue : 101
Queue : Front--> 85 : 90 : 75 : 101 : <--Rear

DYANAMIC IMPLEMENTATION OF LINEAR QUEUE
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty

Enter your option :1
Enter element to be inserted in queue : 65
Queue : Front--> 85 : 90 : 75 : 101 : 65 : <--Rear

DYANAMIC IMPLEMENTATION OF LINEAR QUEUE
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty

Enter your option :2
Queue : Front--> 85 : 90 : 75 : 101 : 65 : <--Rear
    
DYANAMIC IMPLEMENTATION OF LINEAR QUEUE
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty

Enter your option :3
The deleted element : 85
Queue : Front--> 90 : 75 : 101 : 65 : <--Rear
  
DYANAMIC IMPLEMENTATION OF LINEAR QUEUE
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty

Enter your option :5
Queue is not empty
Queue : Front--> 90 : 75 : 101 : 65 : <--Rear

DYANAMIC IMPLEMENTATION OF LINEAR QUEUE
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty

Enter your option :4
FRONT element = 90
Queue : Front--> 90 : 75 : 101 : 65 : <--Rear

DYANAMIC IMPLEMENTATION OF LINEAR QUEUE
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty

Enter your option :3
The deleted element : 90
Queue : Front--> 75 : 101 : 65 : <--Rear

DYANAMIC IMPLEMENTATION OF LINEAR QUEUE
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty

Enter your option :3
The deleted element : 75
Queue : Front--> 101 : 65 : <--Rear


DYANAMIC IMPLEMENTATION OF LINEAR QUEUE
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty

Enter your option :3
The deleted element : 101
Queue : Front--> 65 : <--Rear

DYANAMIC IMPLEMENTATION OF LINEAR QUEUE
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty
       
Enter your option :1
Enter element to be inserted in queue : 55
Queue : Front--> 65 : 55 : <--Rear
*/