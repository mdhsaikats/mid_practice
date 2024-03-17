#include<stdio.h>
int stack[5];
int top=-1;

void push(int data)
{
    if(top==4)
    {
        printf("Overflow\n");
    }else{
        top++;
        stack[top]=data;
    }

}

void pop()
{
    if(top==-1)
    {
        printf("Underflow\n");
    }else{
    top--;
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    pop();

    for (int i = top; i >=0; --i)
    {
        printf("%d\n",stack[i]);
    }
    return 0;
}