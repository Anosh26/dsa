#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int val;
    struct node* next;
    
}node;

void insertAtEnd(node **headref, node *newnode){
    
    if(*headref==NULL){
        *headref =newnode; 
        newnode->next=NULL;
        return; 
    }
    node* current = *headref;
    
    while(current->next){
            current=current->next;        
        }
        current->next =newnode; 
        newnode->next=NULL;       
    }
void insertAtPos(node** headref, node* newnode, int pos){
    node* current = *headref;
    for(int i=2;i<pos;i++){
        if(current->next){
        current=current->next;
    }}
    newnode->next=current->next;
    current->next=newnode;
}


int main(){
    node* head=NULL;
    node** headref= &head;
    node* node1 = (node*)malloc(sizeof(node));
    node* node2 = (node*)malloc(sizeof(node));
    node* node3 = (node*)malloc(sizeof(node));
    node* node4 = (node*)malloc(sizeof(node));

    head =node1;
    node1->val=1;
    node1->next=node2;
    node2->val=2;
    node2->next=node3;
    node3->val=3;
    node3->next=node4;
    node4->val=4;
    node4->next=NULL;

    node* node5 = (node*)malloc(sizeof(node));
    node5->val=8;
    insertAtPos(headref,node5,3);
    node* current=head;
    while(current){
        printf("%d ->",current->val);
        current=current->next;
    }
    printf("NULL\n");

    return 0;
}