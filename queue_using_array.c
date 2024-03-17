#include<stdio.h>
#include<stdlib.h>
int queue[5];
int front=-1;
int rear=-1;

void enqueue(int data)
{
    if(rear==4)
    {
        printf("Queue is full\n");
    }else if (front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=data;
    }else{
        rear++;
        queue[rear]=data;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty\n");
    }else if(front==0 && rear==0)
    {
        front=rear=-1;
    }else
    {
        front++;
    }

}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    dequeue();

    for (int i = front; i <= rear; i++)
    {
        printf("%d\n",queue[i]);
    }
    return 0;
    
}