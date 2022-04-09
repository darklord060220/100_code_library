#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *front1 = NULL;
struct node *front2 = NULL;
struct node *list = NULL;


void insert1(int data) {
   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));
   struct node *current;

   link->data = data;
   link->next = NULL;
   if(front1 == NULL) {
         front1 = link;
         return;
      } else {
         current = front1;

         while(current->next != NULL)
         current = current->next;

               current->next = link;
      }
}

void insert2(int data) {
  struct node *link = (struct node*) malloc(sizeof(struct node));
   struct node *current;

   link->data = data;
   link->next = NULL;
   if(front2 == NULL) {
         front2 = link;
         return;
      } else {
         current = front2;

         while(current->next != NULL)
         current = current->next;

         // Insert link at the end of the list
         current->next = link;
      }
}

void display(struct node *head) {
   struct node *ptr = head;

   printf("[head] =>");

   while(ptr != NULL) {
      printf(" %d =>",ptr->data);
      ptr = ptr->next;
   }

   printf(" [null]\n");
}

void combine() {
   struct node *link;

   list = front1;
   link = list;

   while(link->next!= NULL) {
      link = link->next;
   }

   link->next = front2;
}

int main() {
   int i;
   int n1,n2,n;
   printf("enter no of studens");
scanf("%d %d",&n1,&n2);
   for(i = 0; i < n1; i++)
   {
        scanf("%d",&n);
     insert1(n);
   }
   for(i = 0; i < n2; i++)
   {
        scanf("%d",&n);
     insert2(n);
   }

   printf("list 1 : ");
   display(front1);

   printf("hall2 : ");
   display(front2);

   combine();

   printf("Combined List :\n");
   display(list);

   return 0;
}
