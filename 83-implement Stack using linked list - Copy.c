#include<stdio.h>
#include<stdlib.h>
//#include<limits.h>
struct node
{
    int n;
    struct node* link;
};
typedef struct node NODE;
NODE *create();
NODE *push(NODE *top);
NODE *pop(NODE *top);
void display(NODE *top);
int main()
{
    int i;
    NODE *top=NULL;
    while(1)
    {
        printf("Enter 1:Push 2:Pop 3:Display 4:Exit\n");
        scanf("%d",&i);
        switch(i)
        {
            case 1:top=push(top);
            break;
            case 2:top=pop(top);
            break;
            case 3:display(top);
            break;
            case 4:exit(0);
            break;
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}
NODE *create()
{
    NODE *temp;
    temp=(NODE*)malloc(sizeof(NODE));
    printf("Enter a element\n");
    scanf("%d",&temp->n);
    temp->link=NULL;
    return temp;
}
NODE *push(NODE *top)
{
    NODE *temp;
    temp=create();
    temp->link=top;
    top=temp;
    printf("%d has been pushed into stack\n",top->n);
    return top;
}
NODE *pop(NODE *top)
{
    NODE *temp;
    if(top==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d will be popped out\n",top->n);
        temp=top;
        top=top->link;
        temp->link=NULL;
        free(temp);
    }
    return top;
}
void display(NODE *top)
{
    NODE *cur;
    if(top==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        cur=top;
        printf("Stack elements\n");
        while(cur!=NULL)
        {
            printf("%d\n",cur->n);
            cur=cur->link;
        }
    }
}
