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

    nodePtrType newnode,temp;
    newnode=(nodePtrType)malloc(sizeof(nodeType));
    newnode->info=newElement;
    temp=sList;
    for(int i=0;i<pos;i++){
        temp=temp->next;
    }
    newnode=temp;
    temp=newnode;
    return sList;    
}
void displayList(sListType sList){
    if(sList){
      nodePtrType nodeptr =sList;
      while (nodeptr)
      {
        printf("%d",nodeptr->info);
        nodeptr=nodeptr->next;
      }
        
    }
    else{
        perror("sList Points to NULL");
    }
    
}
listElementType retrieve_ithElement_sList(sListType sList,int pos){
    nodePtrType temp;
    temp=sList;
    for(int i=0;i<pos;i++){
        temp=temp->next;
    }
    return temp->info;
}
sListType deleteBeginSList(sListType sList){
    nodePtrType temp;
    temp=sList;
    sList=sList->next;
    free(temp);
}  
