#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
} *startl = NULL, *startr = NULL, *temp, *newnode, *t, *t1, *t2;
void create();
void display();
void insert(int);
void dltp(int);
void dltv(int);
void search(int);
void reverse();
int n, pos, val;
void main()
{
    int c = 1;
    while (c > 0 && c < 8)
    {
        printf("Operation on Doubly Linked List :\n");
        printf("\n1 : Create a Doubly Linked List.");
        printf("\n2 : Display a DLL.");
        printf("\n3 : Insert a DLL.");
        printf("\n4 : Delete by Position.");
        printf("\n5 : Delete by Value.");
        printf("\n6 : Search NODE by value.");
        printf("\n7 : Reverse.");
        printf("\n8 : Exit.");
        printf("\nEnter Operation You Want To Perform :");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            if (startl != NULL && startr != NULL)
                printf("Doubly Linked List is Already Created.");
            else
                create();
            break;
        case 2:
            if (startl == NULL && startr == NULL)
                printf("Doubly Linked List Is Empty.");
            else
                display();
            break;
        case 3:
            printf("Enter The Position : ");
            scanf("%d", &pos);
            if (pos < 1 || pos > n + 1)
                printf("ERROR......INVALID POSITION.");
            else
                insert(pos);
            break;
        case 4:
            if (startl == NULL && startr == NULL)
                printf("Doubly Linked List Is Empty.");
            else
            {
                printf("Enter The Position : ");
                scanf("%d", &pos);
                if (pos < 1 || pos > n)
                    printf("ERROR....INVALID POSITION.");
                else
                    dltp(pos);
            }
            break;
        case 5:
            if (startl == NULL && startr == NULL)
                printf("Doubly Linked List Is Empty.");
            else
            {
                printf("Enter The Value : ");
                scanf("%d", &val);
                dltv(val);
            }
            break;
        case 6:
            if (startl == NULL && startr == NULL)
                printf("Doubly Linked List Is Empty.");
            else
            {
                printf("Enter The Value To Be Search In List :");
                scanf("%d", &val);
                search(val);
            }
            break;
        case 7:
            if (startl == NULL && startr == NULL)
                printf("Doubly Linked List is Empty.");
            else
                reverse();
            break;
        case 8:
            return;
        default:
            printf("ERROR.....INVALID OPERATION.\n");
            break;
        }
        if (startl == NULL && startr == NULL)
            printf("Doubly Linked List is Empty \n ");
        else
            display();
    }
}

void create()
{
    int i;
    printf("Enter the number of nodes in double link list:");
    scanf("%d", &n);
    if (n < 1)
        printf("linklist must have at least on node");
    else
        for (i = 1; i <= n; i++)
        {
            newnode = malloc(sizeof(struct node));
            printf("Enter integer data for node %d: ", i);
            scanf("%d", &newnode->data);
            if (i == 1)
                startl = startr = temp = newnode;
            else
            {
                temp->next = newnode;
                newnode->prev = temp;
                temp = temp->next;
            }
            startr = temp;
            startl->prev = NULL;
            startr->next = NULL;
        }
}

void display()
{
    printf("\nDoubly Linked List From Left To Right :");
    temp = startl;
    printf("STARTL-->");
    while (temp != NULL)
    {
        printf("%d-->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
    printf("\nDoubly Linked List From Right To Left :");
    temp = startr;
    printf("STARTR-->");
    while (temp != NULL)
    {
        printf("%d-->", temp->data);
        temp = temp->prev;
    }
    printf("NULL");
    printf("\nNumber of nodes in double link list is:%d \n",n);
}
void insert(int p)
{
    int i;
    newnode = malloc(sizeof(struct node));
    printf("\nEnter Integer Data : ");
    scanf("%d", &newnode->data);
    if (p == 1)
    {
        newnode->prev = NULL;
        if (startl == startr)
        {
            startl = startr = newnode;
            startl->next = NULL;
        }
        else
        {
            newnode->next = startl;
            startl->prev = newnode;
            startl = newnode;
        }
    }
    else
    {
        for (i = 1, temp = startl; i < pos - 1; temp = temp->next, i++)
            ;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->prev = temp;
        if (temp == startr)
            startr = newnode;
        else
            newnode->next->prev = newnode;
    }
    n++;
}
void dltp(int p)
{
    int i;
    if (p == 1)
    {

        if (startl == startr)
        {
            startl = startr = NULL;
        }
        else
        {
            temp = startl;
            startl = temp->next;
            startl->prev = NULL;
        }
    }
    else
    {
        for (i = 1, temp = startl; i < pos - 1; i++, temp = temp->next)
            ;
        t = temp->next;
        temp->next = t->next;
        if (t == startr)
            startr = temp;
        else
            t->next->prev = temp;
    }
    n--;
}
void search(int val)
{
    int i;
    for (i = 1, temp = startl; temp != NULL; temp = temp->next, i++)
        if (temp->data == val)
        {
            printf("\n%d present at %d position from Left to Right.", val, i);
            printf("\n%d present at %d position from Right to Left.", val, n - i + 1);
            return;
        }
    printf("\n%d Is NOT present in Doubly Linked List.", val);
}
void dltv(int val)
{
    for (temp = startl; temp != NULL; temp = temp->next)
    {
        if (temp->data == val)
            break;
        t = temp;
    }
    if (temp == NULL)
    {
        printf("\n%d NOT Present In Doubly Linked List", val);
        return;
    }
    if (temp == startl && startr == startl)
    {
        startr = startl = NULL;
    }
    else
    {
        if (temp == startl)
        {
            startl = temp->next;
            startl->prev = NULL;
        }
        else if (temp == startr)
        {
            t->next = NULL;
            startr = t;
        }
        else
        {
            t->next = temp->next;
            temp->next->prev = t;
        }
    }
    n--;
}

void reverse()
{

    temp = startl;
    t1 = temp->next;
    t2 = t1->next;
    while (t1->next != NULL)
    {
        t1->next = temp;
        temp = t1;
        t1 = t2;
        t2 = t2->next;
    }
    t1->next = temp;
    startl->next = NULL;
    startl = t1;

    temp = startr;
    t1 = temp->prev;
    t2 = t1->prev;
    while (t1->prev != NULL)
    {
        t1->prev = temp;
        temp = t1;
        t1 = t2;
        t2 = t2->prev;
    }
    t1->prev = temp;
    startr->prev = NULL;
    startr = t1;
}
/*
Operation On Doubly Linked List : 
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform :1
Enter the number of nodes in double link list:6
Enter integer data for node 1: 10
Enter integer data for node 2: 20
Enter integer data for node 3: 30
Enter integer data for node 4: 40
Enter integer data for node 5: 50
Enter integer data for node 6: 60

Doubly Linked List From Left To Right :STARTL-->10-->20-->30-->40-->50-->60-->NULL
Doubly Linked List From Right To Left :STARTR-->60-->50-->40-->30-->20-->10-->NULL
Number of nodes in double link list is:6
Operation On Doubly Linked List :
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform : 3
Enter The Position : 2
Enter Integer Data : 15

Doubly Linked List From Left To Right :STARTL-->10-->15-->20-->30-->40-->50-->60-->NULL
Doubly Linked List From Right To Left :STARTR-->60-->50-->40-->30-->20-->15-->10-->NULL
Number of nodes in double link list is:7
Operation On Doubly Linked List:
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform :4
Enter The Position : 5

Doubly Linked List From Left To Right :STARTL-->10-->15-->20-->30-->50-->60-->NULL
Doubly Linked List From Right To Left :STARTR-->60-->50-->30-->20-->15-->10-->NULL
Number of nodes in double link list is:6
Operation On Doubly Linked List:
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform :5
Enter The Value : 10

Doubly Linked List From Left To Right :STARTL-->15-->20-->30-->50-->60-->NULL
Doubly Linked List From Right To Left :STARTR-->60-->50-->30-->20-->15-->NULL
Number of nodes in double link list is:5
Operation On Doubly Linked List:
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform :6
Enter The Value To Be Search In List :60
60 present at 5 position from Left to Right.
60 present at 1 position from Right to Left.

Doubly Linked List From Left To Right :STARTL-->15-->20-->30-->50-->60-->NULL
Doubly Linked List From Right To Left :STARTR-->60-->50-->30-->20-->15-->NULL
Number of nodes in double link list is:5
Operation On Doubly Linked List:
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform :7

Doubly Linked List From Left To Right :STARTL-->60-->50-->30-->20-->15-->NULL
Doubly Linked List From Right To Left :STARTR-->15-->20-->30-->50-->60-->NULL
Number of nodes in double link list is:5
Operation On Doubly Linked List:
1 : Create a Doubly Linked List.
2 : Display a DLL.
3 : Insert a DLL.
4 : Delete by Position.
5 : Delete by Value.
6 : Search NODE by value.
7 : Reverse.
8 : Exit.
Enter Operation You Want To Perform :8
*/