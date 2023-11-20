//Set A2
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX],i,option=0,j,top;
void init();
void push();
void pop();
void display();
void peek();
int isfull();
int isempty();

void init()
{
	top=-1;
}
void push()
{
	int val;

	   printf("Enter the value :");
	   scanf("%d",&val);
	   top=top+1;
	   stack[top]=val;
	
}
void pop()
{
	if(top==-1)
	   printf("Stack is underflow");
	else
	{
	   printf("Poped element is %d",stack[top]);
	   top--;
	}
}
void display()
{
	printf("\n"); 
	printf("Element in stack are top-->");
	for(i=top;i>=0;i--)
	    printf("%d :",stack[i]);
}
void peek()
{
	printf("\n"); 
	printf("Element in stack is: ");
	if(i=top)
	   printf("%d \n",stack[i]);
	if(top==-1)
	   printf("Stack is empty");
}
int isfull()
{
	if(top==MAX-1)
	  return 1;
	else
	  return 0;
}
int isempty()
{
        if(top==-1)
        return 1;
        else
        return 0;
}
void main()
{
	int val;
	printf("Stack Using Static Implementation:");
	init();		
	while(option!=7)
	{
		printf("\n Choose one options :");
		printf("\n 1.Push :");
		printf("\n 2.Pop :");
		printf("\n 3.Peek :");
		printf("\n 4.Is full :");
		printf("\n 5.IS empty :");
		printf("\n 6.Display :");
		printf("\n 7.Exit :\n");
		printf("Enter your option :");
		scanf("%d",&option);
		switch(option)
		{
			case 1:if (isfull())
				  printf("Stack isfull \n");
				else
				    push();
				break;
			
			case 2:if (isempty())
				  printf("Stack is empty \n");
			      else
				  pop();
			      break;
				
			case 3:if (isempty())
				   printf("Stack is empty");
			       else
				   peek();
			       break;
				
			case 4:if (isfull())
				   printf("Stack is full");
			      else
				   printf("Stack is not full");
			      break;
				
			case 5: if (isempty())
				   printf("Stack is empty");
				else
				   printf("Stack is not empty");
				break;
				
			case 6: if (isempty())
				   	printf("Stack is empty");
				else
					display();
				break;
			case 7:exit(0);
			       default: 
			       printf("Enter the valid option :");
		}
		if(isempty())
		printf("Stack is empty");
		else if(option!=6) 
		display();
	}
}
/*
output :-

Stack Using Static Implementation:
Choose one options :
		1.Push :
 		2.Pop :
 		3.Peek :
 		4.Is full :
 		5.IS empty :
 		6.Display :
		7.Exit :
Enter your option :1
Enter the value : 65
Element in stack are top-->65 :

Choose one options :
		1.Push :
 		2.Pop :
 		3.Peek :
 		4.Is full :
 		5.IS empty :
 		6.Display :
		7.Exit :
Enter your option :1
Enter the value :85
Element in stack are top-->85 :65 :

Choose one options :
		1.Push :
 		2.Pop :
 		3.Peek :
 		4.Is full :
 		5.IS empty :
 		6.Display :
		7.Exit :
Enter your option :1
Enter the value :99
Element in stack are top-->99 :85 :65 :

Choose one options :
		1.Push :
 		2.Pop :
 		3.Peek :
 		4.Is full :
 		5.IS empty :
 		6.Display :
		7.Exit :
Enter your option :1
Enter the value :58
Element in stack are top-->58 :99 :85 :65 :

Choose one options :
		1.Push :
 		2.Pop :
 		3.Peek :
 		4.Is full :
 		5.IS empty :
 		6.Display :
		7.Exit :
Enter your option :3
Element in stack is: 58
Element in stack are top-->58 :99 :85 :65 :

Choose one options :
		1.Push :
 		2.Pop :
 		3.Peek :
 		4.Is full :
 		5.IS empty :
 		6.Display :
		7.Exit :
Enter your option :2
Poped element is 58
Element in stack are top-->99 :85 :65 :

Choose one options :
		1.Push :
 		2.Pop :
 		3.Peek :
 		4.Is full :
 		5.IS empty :
 		6.Display :
		7.Exit :
Enter your option :4
Stack is not full
Element in stack are top-->99 :85 :65 :

Choose one options :
		1.Push :
 		2.Pop :
 		3.Peek :
 		4.Is full :
 		5.IS empty :
 		6.Display :
		7.Exit :
Enter your option :5
Stack is not empty
Element in stack are top-->99 :85 :65 :

Choose one options :
		1.Push :
 		2.Pop :
 		3.Peek :
 		4.Is full :
 		5.IS empty :
 		6.Display :
		7.Exit :
Enter your option :6
Element in stack are top-->99 :85 :65 :

Choose one options :
		1.Push :
 		2.Pop :
 		3.Peek :
 		4.Is full :
 		5.IS empty :
 		6.Display :
		7.Exit :
Enter your option:7 
Exit
*/