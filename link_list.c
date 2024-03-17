#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head, *body , *end, *ptr;
    head=malloc(sizeof(struct node));
    body=malloc(sizeof(struct node));
    end=malloc(sizeof(struct node));

    head->data=1;
    head->next=body;
    body->data=2;
    body->next=end;
    end->data=3;
    end->next=NULL;

    //first_insertion
    struct node *first;
    first=malloc(sizeof(struct node));
    first->data=10;
    first->next=head;
    head=first;

    //middle_insertion
    struct node *middle;
    middle=malloc(sizeof(struct node));
    middle->data=30;
    middle->next=NULL;
    int pos=3;
    --pos;

    struct node *tr;
    tr=head;
    while (pos!=1)
    {
        tr=tr->next;
        pos--;
    }
    middle->next=tr->next;
    tr->next=middle;
    
    //last insert
    struct node *last;
    last=malloc(sizeof(struct node));
    last->data=1000;
    end->next=last;
    last->next=NULL;
    end=last;


    //first_delete
    struct node *del;
    del=head;
    head=head->next;
    free(del);
    del=NULL;

    // middle_delete
    struct node *del1,*del2;
    del1=head;
    del2=head;
    int delpos=3;
    --delpos;
    while (delpos!=1)
    {
         del1=del2;
         del2=del2->next;
         --delpos;
    }
    del1->next=del2->next;
    free(del2);
    del2=NULL;

    //last_delete

    struct node *delpre , *delcur;
    delpre=head;
    delcur=head;

    while (delcur->next!=NULL)
    {
        delpre=delcur;
        delcur=delcur->next;
    }
    delpre->next=NULL;
    free(delcur);
    delcur=NULL;
    

    
    ptr=head;
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}