#include<stdio.h>
#include<stdlib.h>



typedef struct node
{
    int info;
    struct node* next;
}nodeType;
typedef nodeType* nodePtrType;

int main(){
    nodePtrType HEAD,n1=NULL,n2=NULL,n3=NULL,n4=NULL;
    n1=(nodePtrType)malloc(sizeof(nodeType));
    n2=(nodePtrType)malloc(sizeof(nodeType));
    n3=(nodePtrType)malloc(sizeof(nodeType));
    n4=(nodePtrType)malloc(sizeof(nodeType));
    HEAD=n1;
    

    n1->info=1;
    n1->next=n2;

    n2->info=2;
    n2->next=n3;
    
    n3->info=3;
    n3->next=n4;
    
    n4->info=4;
    n4->next=NULL;

    nodePtrType temp1=HEAD,temp2=HEAD;
    while (temp1)
    {
        printf("%d->",temp1->info);
        temp1=temp1->next;
    }
    printf("\n");
    while (temp2->next)
    {
        printf("%d->",temp2->info);
        temp2=temp2->next;
    }
    

    return 0;
}