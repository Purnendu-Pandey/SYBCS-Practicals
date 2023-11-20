//Set A1
#include<stdio.h>
#include<stdlib.h>
#define max 5

int i,n,front,rear;
int queue[max];

void init();
void add(int n);
void display();
int delete();
void peek();
int isempty();
int isfull();

void init()
{
     front=rear=-1;
}
void add(int n)
{
     rear++;
     queue[rear]=n;
}
int delete()
{
    int val;
    front++;
    val=queue[front];
    return val;
}
void display()
{
     int i;
     if (isempty())
        printf("\n  Linear Queue is empty");
     else
     {
          printf("\n Queue : Front--> ");
          for (i=front+1;i<=rear;i++)
              printf(" %d :",queue[i]);
          printf(" <--Rear \n\n ");
     }
}
void peek()
{
     printf("\n Top element = %d\n ",queue[front+1]);
}
int isempty()
{
    if (front== -1 && rear==-1)
       return 1;
    else
       return 0;
}   
int isfull()
{   
    if (rear==max-1)
       return 1;
    else
       return 0;
}
void main()
{
     int ch=1;
     init();
     while (ch>=1 && ch<=6)
     {
           printf ("\n    STATIC IMPLEMENTATION OF LINEAR QUEUE   \n");
           printf ("\n       1 : To add element into queue");
           printf ("\n       2 : To display elements in queue");
           printf ("\n       3 : To delete element from queue");
           printf ("\n       4 : To peek element in  queue");
           printf ("\n       5 : To check queue is empty ");
           printf ("\n       6 : To check queue is full  ");
       
           printf ("\n\n Enter your option :  ");
           scanf ("%d",&ch);
           switch (ch)
           {
                  case 1:if (isfull())
                               printf("\n Queue is  full");  
                          else
                          {                        
                             printf("\n Enter element to be inserted in queue : ");
                             scanf ("%d",&n);
                             add(n);
                          }
                         break;
                  case 2:if (isempty())
                             printf("\n Queue is empty ");
                         else                          
                             display(); 
                         break;
                  case 3:if (isempty())
                             printf("\n  Queue is empty \n");
                         else 
                             printf("\n Deleted element : %d",delete()); 
                         break;
                  case 4:if (isempty())
                             printf("\n  Queue is empty \n");
                         else
                             peek(); 
                         break;
                  case 5:if (isempty())
                             printf("\n  Queue is empty ");
                         else  
                             printf("\n  Queue is not empty   ");
                         break;
                  case 6:if (isfull())
                             printf("\n Queue is full..");
                         else
                             printf("\n Queue is  not full..");
                         break;;
                  default:printf("\n\n Invalid option entered..\n\n");
           }
           if(ch!=2 )
             display();
       }           
}
/*
OUTPUT:
STATIC IMPLEMENTATION OF LINEAR QUEUE   
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty 
       6 : To check queue is full  

Enter your option :  1 
Enter element to be inserted in queue : 10
Queue : Front-->  10 : <--Rear 
    STATIC IMPLEMENTATION OF LINEAR QUEUE   
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty 
       6 : To check queue is full  

Enter your option :  1
Enter element to be inserted in queue : 20
Queue : Front-->  10 : 20 : <--Rear 
    STATIC IMPLEMENTATION OF LINEAR QUEUE   
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty 
       6 : To check queue is full  

Enter your option :  1
Enter element to be inserted in queue : 30
Queue : Front-->  10 : 20 : 30 : <--Rear 

     STATIC IMPLEMENTATION OF LINEAR QUEUE   
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty 
       6 : To check queue is full  

Enter your option :  1
Enter element to be inserted in queue : 40
Queue : Front-->  10 : 20 : 30 : 40 : <--Rear 

   STATIC IMPLEMENTATION OF LINEAR QUEUE   
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty 
       6 : To check queue is full  

Enter your option :  1
Enter element to be inserted in queue : 50
Queue : Front-->  10 : 20 : 30 : 40 : 50 : <--Rear 
    STATIC IMPLEMENTATION OF LINEAR QUEUE   
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty 
       6 : To check queue is full  

Enter your option : 2
Queue : Front-->  10 : 20 : 30 : 40 : 50 : <--Rear 
    STATIC IMPLEMENTATION OF LINEAR QUEUE   
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty 
       6 : To check queue is full  

Enter your option :  3
Popped element : 10
Queue : Front-->  20 : 30 : 40 : 50 : <--Rear 
    STATIC IMPLEMENTATION OF LINEAR QUEUE   
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty 
       6 : To check queue is full

Enter your option :  3
Popped element : 20
Queue : Front-->  30 : 40 : 50 : <--Rear 
    STATIC IMPLEMENTATION OF LINEAR QUEUE   
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty 
       6 : To check queue is full  

Enter your option :  3
Popped element : 30
Queue : Front-->  40 : 50 : <--Rear 
    STATIC IMPLEMENTATION OF LINEAR QUEUE   
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty 
       6 : To check queue is full  

Enter your option :  3
Popped element : 40
Queue : Front-->  50 : <--Rear 
    STATIC IMPLEMENTATION OF LINEAR QUEUE   

       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty 
       6 : To check queue is full  

Enter your option :  3
Popped element : 50
Linear Queue is empty
    STATIC IMPLEMENTATION OF LINEAR QUEUE   
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty 
       6 : To check queue is full  

Enter your option :  5
Queue is empty
Linear Queue is empty
    STATIC IMPLEMENTATION OF LINEAR QUEUE   

       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty 
       6 : To check queue is full  

Enter your option :  6
Queue is full..
Linear Queue is empty
    STATIC IMPLEMENTATION OF LINEAR QUEUE   
       1 : To add element into queue
       2 : To display elements in queue
       3 : To delete element from queue
       4 : To peek element in  queue
       5 : To check queue is empty 
       6 : To check queue is full  

*/