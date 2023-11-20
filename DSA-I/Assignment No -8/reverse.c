//Set A1
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
char stack[10];
int top=-1;
void push(char i)
{
    top++;
    stack[top]=i;
}
char pop()
{
    char cha;
    cha=stack[top];
    top--;
    return cha;
}
void main()
{
    char str[10],ch;
    int i,l;

    printf("Enter the string :");
    scanf("%s",&str);
    l=strlen(str);
    if (l>MAX)
    {
        printf("Error string length is greater than stack size");
        return;
    }
        for(i=0;i<l;i++)
            push(str[i]);
        printf("Reversed string :");
        for(i=0;i<l;i++)
        {
            ch=pop();
            printf("%c",ch);
        }
}
/*
Enter the string :purnendu
Reversed string :udnenrup
*/