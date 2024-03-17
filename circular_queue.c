#include<stdio.h>
int n [5];
int front=-1;
int rear=-1;
void enqueue(int data)
{
    if((rear+1) % 5 ==front)
    {
        printf("Queue is Full\n");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        n[rear]= data;
    }
    else
    {
        rear=(rear+1)%5;
        n[rear]= data;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty\n");
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }else
    {
       front=(front+1)%5;
    }
}
int main()
{
        enqueue(1);
        enqueue(2);
        enqueue(3);
        enqueue(4);
        enqueue(5);
        dequeue();
        dequeue();
      for(int i=front; i<=rear; i++)
      {
          printf("%d\n", n[i]);
      }
      return 0;
}