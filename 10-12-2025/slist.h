#ifndef SLIST_H
#define SLIST_H
typedef int listElementType;
typedef struct node{
    listElementType info;
    struct node* next;
}nodeType;

typedef nodeType* nodePtrType;
typedef nodePtrType sListType;
sListType create_sList();
sListType destroy_sList(sListType sList);
sListType insertBeginSList(sListType sList,listElementType newElement);
sListType insertEndSList(sListType sList,listElementType newElement);
sListType insertPosInSList(sListType sList,listElementType newElement,int pos);
void displayList(sListType sList);
listElementType retrieve_ithElement_sList(sListType sList,int pos);
sListType deleteBeginSList(sListType);  

#endif

