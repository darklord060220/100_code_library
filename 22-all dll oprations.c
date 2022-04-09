#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
struct node *prev;
};
typedef struct node *NODE;
NODE start=NULL;
void insert_front();
void insert_end();
void delete_front();
void delete_end();
void display();
NODE read();
void reverse() ;
int main()
{
int choice,n,i,flag=0;
do
{
printf("-----DOUBLY LINKED LIST MENU-----\n");
printf("1:CREATE DLL\n2:DISPLAY DLL\n");
printf("3:INSERT AT END OF DLL\n4:DELETE FROM END OF DLL\n5:INSERT AT FRONT OF DLL\n6:DELETE FROM FRONT OF DLL\n7:EXIT\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1: if(flag==0)
{
printf("Enter number of nodes:(insert_end is used)\n ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("node %d details\n",i);
insert_end();
}
flag=1;
} else
{
printf("node data is already exists. \n");
}
break;
case 2: display();
break;
case 3: insert_end();
break;
case 4: delete_end();
break;
case 5: insert_front();
break;
case 6: delete_front();
break;
case 7: exit(0);
break;
case 8: reverse();
break;
default: printf("Invalid Choice\n");
}
}
while(choice!=7);
return 0;
}
NODE read()
{
NODE t;
t=(struct node *)malloc(sizeof(struct node));
printf("Enter data: ");
scanf("%d",&t->data);
return(t);
}
void insert_front()
{
NODE temp;
temp=read();
if(start==NULL)
{
temp->next=NULL;
temp->prev=NULL;
start=temp;
}
else
{
temp->next=start;
temp->prev=NULL;
start->prev=temp;
start=temp;
}
}
void insert_end()
{
NODE q,temp;
temp=read();
temp->next=NULL;
if(start==NULL)
{
start=temp;
temp->prev=NULL;
}
else
{
q=start;
while(q->next!=NULL)
q=q->next;
temp->prev=q;
q->next=temp;
}
}
void delete_front()
{
NODE q;
if(start==NULL)
{
printf("The DLL list is empty. \n");
}
else if(start->next==NULL)
{
printf("Deleted node data is %d \n\n",start->data);
start=NULL;
free(start);
}
else
{
q=start;
printf("Deleted node data is %d \n\n",q->data);
start=start->next;
free(q);
start->prev=NULL;
}
}
void delete_end()
{
NODE q,t;
if(start==NULL)
{
printf("The DLL list is empty. \n");
}
else if(start->next==NULL)
{
printf("Deleted node data is %d\t \n\n",start->data);
start=NULL;
free(start);
}
else
{
q=start;
while(q->next->next!=NULL)
{
q=q->next;
}
t=q->next;
printf("Deleted node data is %d \n\n",t->data);
q->next=NULL;
t->prev=NULL;
free(t);
}
}
void display()
{
int count=0;
NODE q;
if(start==NULL)
{
printf(" DLL List is empty. \n");
}
else
{
q=start;
printf("The node data are:\n");
while(q!=NULL)
{
printf("%d\t",q->data);
q=q->next;
count++;
}
}
printf("\nTotal Number of node data in the DLL List are: %d\n",count);
}

void reverse()
{
     NODE *temp ; temp= NULL;
     NODE *current; current=start;

     /* swap next and prev for all nodes of
       doubly linked list */
     while (current !=  NULL)
     {
       temp = current->prev;
       current->prev = current->next;
       current->next = temp;
       current = current->prev;
     }

     /* Before changing head, check for the cases like empty
        list and list with only one node */
     if(temp != NULL )
        start = temp->prev;
}
