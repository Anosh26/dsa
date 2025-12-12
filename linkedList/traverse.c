#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
typedef struct node
{
    int data;
   struct node *next;
} node;

void printLinkedList(node *p){
    while (p !=NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    
}

node insertAtEnd(node *head,node *newnode){
node *temp=head;

while(temp->next !=NULL){
    temp =temp->next;
}
temp->next=newnode;
}


node insertAtBeginning(node *head,node *newnode){
newnode->next=head;
head= newnode;
}

node insertAtAnyPosition(node *head,node *newnode,int pos){
    node *temp =head;

    for(int i=2;i<pos;i++){
        if(temp->next !=NULL){
            temp =temp->next;
        }
    }
    newnode->next= temp->next;
    temp->next = newnode;
}
int main(){

    node *head;
    node *one=NULL;
    node *two=NULL;
    node *three=NULL;

    one = malloc(sizeof(node));
    two = malloc(sizeof(node));
    three = malloc(sizeof(node));

    head = one;

    one->data=1;
    two->data=2;
    three->data=3;

    one->next=two;
    two->next=three;
    three->next=NULL;
    
    printLinkedList(head);

    node *four=malloc(sizeof(node));
    four->data=4;
    four->next=two;
    one->next=four;
    printf("\n");
    printLinkedList(head);


    return 0;
}