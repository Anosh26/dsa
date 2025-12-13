#include"slist.h"
#include<stdlib.h>
#include<stdio.h>


sListType create_sList(){
    sListType sList;
    sList = NULL;
    return sList;
}

sListType destroy_sList(sListType sList){
    nodePtrType tempPtr;
    while (sList)
    {
        tempPtr=sList;
        sList=sList->next;
        free(tempPtr);    
    }

    return sList;
    

}
sListType insertBeginSList(sListType sList,listElementType newElement){
    nodePtrType newnode;
    newnode=(nodePtrType)malloc(sizeof(nodeType));
    
    if(newnode){
        newnode->info =newElement;
    newnode->next = sList;
    sList = newnode;
    return sList;
    }
    else{
        perror("Memory Not Allocated");
        exit(1);
    }
    return sList;
}   
sListType insertEndinSList(sListType sList,listElementType newElement){
    nodePtrType newnode,temp;
    newnode=(nodePtrType)malloc(sizeof(nodeType));
    newnode->info = newElement;
    newnode->next = NULL;

    if(sList==NULL){
        return newnode;    
    }
    temp=sList;
    while (temp->next)
    {   
        temp=temp->next;
    }
    temp->next=newnode; 
    return sList;
}
sListType insertPosInSList(sListType sList,listElementType newElement,int pos){
    if(pos==0) return insertBeginSList(sList,newElement);
    
    
    nodePtrType newnode,temp;
    newnode=(nodePtrType)malloc(sizeof(nodeType));
    if(!newnode) {
        perror("Malloc Failed for NewNode"); 
        exit(1);
    }
        newnode->info=newElement;
    temp=sList;
    
    
    for(int i=0;i < pos-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp == NULL) {
        printf("Error: Position out of bounds\n");
        free(newnode);
        return sList;
    }
    newnode->next= temp->next;
    temp->next=newnode;
    return sList;    
}
void displayList(sListType sList){
    if(sList){
      nodePtrType nodeptr =sList;
      while (nodeptr)
      {
        printf("%d->",nodeptr->info);
        nodeptr=nodeptr->next;
      }
      printf("NULL\n");
        
    }
    else{
        printf("sList Points to NULL\n");
    }
    
}
listElementType retrieve_ithElement_sList(sListType sList,int pos){
    nodePtrType temp;
    temp=sList;
    for(int i=0;i<pos && temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        printf("Error: Position out of Bounds\n");
        return -1;
    }
    return temp->info;
}
sListType deleteBeginSList(sListType sList){
    if (sList==NULL) return NULL;
    nodePtrType temp;
    temp=sList;
    sList=sList->next;
    free(temp);
    return sList;
}  
