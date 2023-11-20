#include<stdio.h>
#include<stdlib.h>
struct node
{
       int data;
       struct node *next;
}*start=NULL,*t,*temp,*t2,*t1;
int n;
void create(void);
void display(void);
void insert(int pos,int val);
void delete(int);
void deletev(int);
void reverse();
void search(int);
void main()
{
     int m=1,ch,i,pos,val;
     while (m>=1 && m<=7)
     {
           printf ("\n    Select one of the following options    \n");
           printf ("\n       1 : To create Singly linked list ");
           printf ("\n       2 : To display Singly linked list ");
           printf ("\n       3 : To insert element in  Singly linked list ");
           printf ("\n       4 : To delete element in  Singly linked list by position");
           printf ("\n       5 : To delete element in  Singly linked list by value ");
           printf ("\n       6 : To reverse element in  Singly linked list ");
           printf ("\n       7 : To search element in link list. ");          
           printf ("\n\n Enter your option :  ");
           scanf ("%d",&ch);
           switch (ch)
           {
                  case 1:if (start!= NULL)
                             printf("\n  Singly linked list already exists \n");      
                         else
                         {
                              printf("\n Enter the number of nodes  : "); 
                              scanf ("%d",&n);
                              if (n<=0)
                                  printf("\n Invalid data entered ....\n");
                              else                            
                                  create();
                         }
                          break;
                  case 2: if (start==NULL)
                              printf("\n Singly Link list is empty..");
                          else
                              display(); 
                          break;
                  case 3: printf ("\n Enter the position at which node is inserted : ");
                          scanf ("%d",&pos);
                          if (pos<1 || pos>n+1)
                              printf("\n Enter the valid position ..");
                          else 
                          {
                             if (pos<1 || pos>n+1)
                                 printf("\n Enter the valid position ..");
                             printf("\n Enter value to be inserted : ");
                             scanf("%d",&val);     
                             insert(pos,val);    
                          }                      
                          break;
                  case 4: if (start==NULL)
                              printf("\n Singly list already exist..");
                          else
                          {
                              printf ("\n Enter position at which value to be deleted : ");
                              scanf ("%d",&pos);
                              if (pos<1 ||pos>n)
                                  printf("\n Invalid position.."); 
                              else
                                 delete(pos);
                          }    
                          
                          break;
                  case 5: if (start==NULL)
                              printf("\n Link list is already null. ");
                          else
                          {
                              printf("\n Enter the element to be delete : ");
                              scanf("%d",&val);
                              deletev(val);
                           }                          
                          break;
                  case 6: if (start==NULL)
                             printf("\n The link list is already null");
                          else
                             reverse(); 
                          break;
                  case 7: if (start==NULL)
                              printf("\n Singly Link list is already NULL. ");
                          else
                          {
                              printf("\n Enter the element to be search : ");
                              scanf("%d",&val);
                              search(val);
                           }
                          break;
                  default:printf ("\n\n Invalid option entered..\n\n");
           }
           display();
     }           
}
void create()
{
     int i;
     for (i=1;i<=n;i++)
     {
         temp=malloc(sizeof(struct node *));
         printf ("\n Enter the data for  node %d : ",i);        
         scanf ("%d",&temp->data);
         if (i==1)
            start=t=temp;
         else
         {
            t->next=temp;
            t=t->next;
         } 
     }
     t->next=NULL;
}
void display()
{
     if (start==NULL)
        printf("\n Link list is empty..");
     else
     {
        printf ("\n\n start-->"); 
        for (t=start;t->next!=NULL;t=t->next)
             printf ("%d-->",t->data);
        printf("%d -->NULL\n\n",t->data);  
     }
}
void insert(int pos,int val)
{
     int i;
     temp=malloc(sizeof(struct node *));
     temp->data=val;
     if (pos==1)
     {
         temp->next=start;
         start=temp;
     }
     else
     { 
         for (i=1,t=start;i<pos-1;i++,t=t->next);
         temp->next=t->next;
         t->next=temp;  
         temp->data=val;   
     }
    n++;
}
void delete (int pos)
{
     int i;
     if (pos==1)
     {
        temp=start;
        start=start->next; 
     }
     else
     {
        for(i=1,t=start;i<pos-1;i++,t=t->next);
        temp=t->next;
        t->next=temp->next;
     }
     n--;
}
void search (int val)
{
     int cnt=0;
     for (t=start;t!=NULL;t=t->next)
     {
         cnt++;
         if (t->data==val)
         {
            printf ("\n The element %d found in singly linked list at  position %d.",t->data,cnt);
            return;
         }
     }
     printf ("\n The element %d not found in singly linked list.",val);
}
void deletev (int val) 
{
     for (t=start;t!=NULL;t=t->next)
     {
         if (t->data==val)
            break;
         temp=t;
     }
     if (t==NULL)
         printf("\n Element %d not in list ",val);   
     else if (t==start)
             start=start->next;
     else 
            temp->next=t->next;
 }       
void reverse()
{  
     for (t=start,t1=t->next,t2=t1->next;t1->next!=NULL;)
     {  
         t1->next=t;
         t=t1;
         t1=t2;
         t2=t2->next;
     }
     t1->next=t; 	
     start->next=NULL;
     start=t1;
}
/*
Select one of the following options    
       1 : To create Singly linked list 
       2 : To display Singly linked list 
       3 : To insert element in  Singly linked list 
       4 : To delete element in  Singly linked list by position
       5 : To delete element in  Singly linked list by value 
       6 : To reverse element in  Singly linked list 
       7 : To search element in link list. 
 Enter your option :  1
 Enter the number of nodes  : 4
 Enter the data for  node 1 : 10
 Enter the data for  node 2 : 20
 Enter the data for  node 3 : 30
 Enter the data for  node 4 : 40
 start-->10-->20-->30-->40 -->NULL

    Select one of the following options    
       1 : To create Singly linked list 
       2 : To display Singly linked list 
       3 : To insert element in  Singly linked list 
       4 : To delete element in  Singly linked list by position
       5 : To delete element in  Singly linked list by value 
       6 : To reverse element in  Singly linked list 
       7 : To search element in link list. 

 Enter your option :  2
 start-->10-->20-->30-->40 -->NULL
 start-->10-->20-->30-->40 -->NULL

    Select one of the following options   
       1 : To create Singly linked list 
       2 : To display Singly linked list 
       3 : To insert element in  Singly linked list 
       4 : To delete element in  Singly linked list by position
       5 : To delete element in  Singly linked list by value 
       6 : To reverse element in  Singly linked list 
       7 : To search element in link list. 

 Enter your option :  3
 Enter the position at which node is inserted : 1
 Enter value to be inserted : 5
 start-->5-->10-->20-->30-->40 -->NULL

    Select one of the following options    
       1 : To create Singly linked list 
       2 : To display Singly linked list 
       3 : To insert element in  Singly linked list 
       4 : To delete element in  Singly linked list by position
       5 : To delete element in  Singly linked list by value 
       6 : To reverse element in  Singly linked list 
       7 : To search element in link list. 

 Enter your option :  3
 Enter the position at which node is inserted : 6
 Enter value to be inserted : 50
 start-->5-->10-->20-->30-->40-->50 -->NULL

    Select one of the following options    
       1 : To create Singly linked list 
       2 : To display Singly linked list 
       3 : To insert element in  Singly linked list 
       4 : To delete element in  Singly linked list by position
       5 : To delete element in  Singly linked list by value 
       6 : To reverse element in  Singly linked list 
       7 : To search element in link list. 

 Enter your option :  3
 Enter the position at which node is inserted : 15
 Enter the valid position ..
 start-->5-->10-->20-->30-->40-->50 -->NULL


    Select one of the following options    

       1 : To create Singly linked list 
       2 : To display Singly linked list 
       3 : To insert element in  Singly linked list 
       4 : To delete element in  Singly linked list by position
       5 : To delete element in  Singly linked list by value 
       6 : To reverse element in  Singly linked list 
       7 : To search element in link list. 

 Enter your option :  3
 Enter the position at which node is inserted : 3
 Enter value to be inserted : 15
 start-->5-->10-->15-->20-->30-->40-->50 -->NULL
    Select one of the following options    
       1 : To create Singly linked list 
       2 : To display Singly linked list 
       3 : To insert element in  Singly linked list 
       4 : To delete element in  Singly linked list by position
       5 : To delete element in  Singly linked list by value 
       6 : To reverse element in  Singly linked list 
       7 : To search element in link list. 
 
 Enter your option :  3
 Enter the position at which node is inserted : 10
 Enter the valid position ..
 start-->5-->10-->15-->20-->30-->40-->50 -->NULL

    Select one of the following options    
       1 : To create Singly linked list 
       2 : To display Singly linked list 
       3 : To insert element in  Singly linked list 
       4 : To delete element in  Singly linked list by position
       5 : To delete element in  Singly linked list by value 
       6 : To reverse element in  Singly linked list 
       7 : To search element in link list. 

 Enter your option :  4
 Enter position at which value to be deleted : 1
 start-->10-->15-->20-->30-->40-->50 -->NULL


    Select one of the following options    
       1 : To create Singly linked list 
       2 : To display Singly linked list 
       3 : To insert element in  Singly linked list 
       4 : To delete element in  Singly linked list by position
       5 : To delete element in  Singly linked list by value 
       6 : To reverse element in  Singly linked list 
       7 : To search element in link list. 

 Enter your option :  4

 Enter position at which value to be deleted : 6
 start-->10-->15-->20-->30-->40 -->NULL


    Select one of the following options    
       1 : To create Singly linked list 
       2 : To display Singly linked list 
       3 : To insert element in  Singly linked list 
       4 : To delete element in  Singly linked list by position
       5 : To delete element in  Singly linked list by value 
       6 : To reverse element in  Singly linked list 
       7 : To search element in link list. 

 Enter your option :  4

 Enter position at which value to be deleted : 2
 start-->10-->20-->30-->40 -->NULL


    Select one of the following options    
       1 : To create Singly linked list 
       2 : To display Singly linked list 
       3 : To insert element in  Singly linked list 
       4 : To delete element in  Singly linked list by position
       5 : To delete element in  Singly linked list by value 
       6 : To reverse element in  Singly linked list 
       7 : To search element in link list. 

 Enter your option :  4
 Enter position at which value to be deleted : 6
 Invalid position..
 start-->10-->20-->30-->40 -->NULL


    Select one of the following options    
       1 : To create Singly linked list 
       2 : To display Singly linked list 
       3 : To insert element in  Singly linked list 
       4 : To delete element in  Singly linked list by position
       5 : To delete element in  Singly linked list by value 
       6 : To reverse element in  Singly linked list 
       7 : To search element in link list. 

 Enter your option :  5
 Enter the element to be delete : 10
 start-->20-->30-->40 -->NULL

    Select one of the following options    
       1 : To create Singly linked list 
       2 : To display Singly linked list 
       3 : To insert element in  Singly linked list 
       4 : To delete element in  Singly linked list by position
       5 : To delete element in  Singly linked list by value 
       6 : To reverse element in  Singly linked list 
       7 : To search element in link list. 

 Enter your option :  6
 start-->40-->30-->20 -->NULL

    Select one of the following options    
       1 : To create Singly linked list 
       2 : To display Singly linked list 
       3 : To insert element in  Singly linked list 
       4 : To delete element in  Singly linked list by position
       5 : To delete element in  Singly linked list by value 
       6 : To reverse element in  Singly linked list 
       7 : To search element in link list. 

 Enter your option :  7
 Enter the element to be search : 40
 The element 40 found in singly linked list at  position 1.

 start-->40-->30-->20 -->NULL


    Select one of the following options    
       1 : To create Singly linked list 
       2 : To display Singly linked list 
       3 : To insert element in  Singly linked list 
       4 : To delete element in  Singly linked list by position
       5 : To delete element in  Singly linked list by value 
       6 : To reverse element in  Singly linked list 
       7 : To search element in link list. 

 Enter your option :  7
 Enter the element to be search : 20
 The element 20 found in singly linked list at  position 3
 start-->40-->30-->20 -->NULL


    Select one of the following options    
       1 : To create Singly linked list 
       2 : To display Singly linked list 
       3 : To insert element in  Singly linked list 
       4 : To delete element in  Singly linked list by position
       5 : To delete element in  Singly linked list by value 
       6 : To reverse element in  Singly linked list 
       7 : To search element in link list. 

 Enter your option :  7
 Enter the element to be search : 50
 The element 50 not found in singly linked list.
 start-->40-->30-->20 -->NULL


    Select one of the following options    
       1 : To create Singly linked list 
       2 : To display Singly linked list 
       3 : To insert element in  Singly linked list 
       4 : To delete element in  Singly linked list by position
       5 : To delete element in  Singly linked list by value 
       6 : To reverse element in  Singly linked list 
       7 : To search element in link list. 

 Enter your option :  5
 Enter the element to be delete : 40
 start-->30-->20 -->NULL


    Select one of the following options    
       1 : To create Singly linked list 
       2 : To display Singly linked list 
       3 : To insert element in  Singly linked list 
       4 : To delete element in  Singly linked list by position
       5 : To delete element in  Singly linked list by value 
       6 : To reverse element in  Singly linked list 
       7 : To search element in link list. 

 Enter your option :  4
 Enter position at which value to be deleted : 1
 start-->20 -->NULL
  Select one of the following options    

       1 : To create Singly linked list 
       2 : To display Singly linked list 
       3 : To insert element in  Singly linked list 
       4 : To delete element in  Singly linked list by position
       5 : To delete element in  Singly linked list by value 
       6 : To reverse element in  Singly linked list 
       7 : To search element in link list. 

 Enter your option :  4
 Enter position at which value to be deleted : 1
Link list is empty..
 */