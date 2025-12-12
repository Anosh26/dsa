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
}   
sListType insertEndinSList(sListType sList,listElementType newElement){
    nodePtrType newnode,temp;
    newnode=(nodePtrType)malloc(sizeof(nodeType));
    temp=sList;
    while (temp)
    {   
        temp=temp->next;
    }
    if(!(temp)){
        newnode=temp;
        temp=newnode;
    }
    
    
}
sListType insertPosInSList(sListType sList,listElementType newElement,int pos){

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

}
sListType deleteBeginSList(sListType){

}  
