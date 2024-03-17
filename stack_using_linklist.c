#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *top, *head , *ptr;

void push(int data)
{
    head=malloc(sizeof(struct node));
    head->data=data;
    head->next=top;
    top=head;

}
void pop()
{
    struct node *temp=top;
    top=top->next;
    free(temp);
    temp=NULL;

}
int main()
{
    push(1);
    push(2);
    push(3);
    pop();

    int x;

    printf("Enter you value:");
    scanf("%d",&x);

    int found;
    ptr=top;
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