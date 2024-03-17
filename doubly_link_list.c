#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *pre;
    struct node *next;
};
int main()
{
    struct node *head, *body, *end, *ptr;
    head=malloc(sizeof(struct node));
    body=malloc(sizeof(struct node));
    end=malloc(sizeof(struct node));

    head->pre=NULL;
    head->data=1;
    head->next=body;
    body->pre=head;
    body->data=2;
    body->next=end;
    end->pre;
    end->data=3;
    end->next=NULL;

    //firsrt_insertion
    struct node *first;
    first=malloc(sizeof(struct node));
    first->pre=NULL;
    first->data=10;
    first->next=head;
    head=first;

    //middle_insertion
    struct node *middle;
    middle=malloc(sizeof(struct node));
    middle->pre=NULL;
    middle->data=50;
    middle->next;
    int pos=3;
    --pos;
    struct node *tr;
    tr=head;
    while (pos!=1)
    {
        tr=tr->next;
        --pos;
    }
    middle->next=tr->next;
    tr->next=middle;

    //last_insertion
    struct node *last;
    last=malloc(sizeof(struct node));
    last->pre=NULL;
    last->data=100;
    last->next=NULL;
    end->next=last;
    end=last;
    

    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}