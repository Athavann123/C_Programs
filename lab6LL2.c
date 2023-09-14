#include <stdio.h>
#include <stdlib.h>

void insertBegining(int);
int leng();
int get(int);

struct node { 
   int data;
   struct node * next;
};

struct node * head; 

int main()
{
   head = NULL;

   insertBegining(100);
   insertBegining(200);
   insertBegining(300);
   insertBegining(400);   
   insertBegining(500);

   int i; 
   struct node * cur;
   for(cur= head; cur != NULL; cur= cur->next)
     printf("%d ", cur->data);
   printf("\n");

   printf("len: %d\n", leng() );
   printf("get(0): %d\n", get(0));
   printf("get(1): %d\n", get(1));
   printf("get(3): %d\n", get(3));

}   

/* insert at the begining of the list*/
void insertBegining(int dat){
   struct node *newNode;
   newNode = (struct node*) malloc(sizeof(struct node));
   newNode->data = dat;
    newNode->next = head;
    head = newNode;
}

/*  'length' (i.e., # of nodes) in the list */
int leng(){
    struct node *current;
    int count = 0;
    current = head;
    while(current != NULL){
        count++;
        current = current->next;
    }
    return count;
}

/* get value at index 'indx' */
int get(int indx){
    struct node* current;
    current = head;
    for(int i = 0; i < indx; i++){
        current = current->next;
    }
    return current->data;
}