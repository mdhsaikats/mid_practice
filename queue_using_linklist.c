#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *front , *rear, *ptr, *new;

void enqueue(int data)
{
    new=malloc(sizeof(struct node));
    new->data=data;
    new->next=NULL;

    if(front == NULL && rear == NULL)
    {
        front=rear=new;
    }else{
        rear->next=new;
        rear=new;
    }
    

}
void dequeue()
{
    struct node *tr=front;
    front=front->next;
    free(tr);

}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeue();
    int x;
    printf("Enter your value:");
    scanf("%d",&x);
    int found;

    ptr=front;
    while (ptr!=NULL)
    {
       if(ptr->data==x)
       {
        found=1;
        break;
       }
       ptr=ptr->next;
    }
    if(found)
    {
        printf("Found");
    }else{
        printf("Not Found");
    }
   return 0;
 
}
