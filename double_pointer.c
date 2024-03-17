#include<stdio.h>
#include<stdlib.h> // Added for malloc

struct node {
    int y;
    float x;
    struct node **p;
    struct node *q;
}; 

int main() {
    struct node *head, *body, *ptr;

    head = (struct node*)malloc(sizeof(struct node));
    body = (struct node*)malloc(sizeof(struct node));

    head->x = 1.5;
    head->y = 7;
    head->p = &(body->p);
    head->q = body;


    body->x = 2.1;
    body->y = 9;
    body->q = NULL;

    ptr = head;
    while (ptr != NULL) {
        printf("%d %.1f\n", ptr->y, ptr->x);
        ptr = ptr->q;
    }

    return 0;
}
