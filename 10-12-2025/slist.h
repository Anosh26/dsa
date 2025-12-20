//Application Level
//Anosh Chodankar 2510 10-12-2025

#ifndef SLIST_H
#define SLIST_H
/*
Linked List Defination:
linked list is a collection of nodes , each node contains data element and a pointer to the next node
s_list points to the first node of the list if the list is not empty
*/

//Define the data type stored in the list (Integer)
typedef int listElementType;
//define the node structure
typedef struct node{
    listElementType info; //Data part of the node
    struct node* next; //Pointer to the next node
}nodeType;
//
typedef nodeType* nodePtrType;
typedef nodePtrType sListType;
/*
function name: create_sList();
purpose: creates and initializes an empty linked list
pre-condition: none
input: none
output: sList (sListType) - pointer to the created empty list
post-condition: A new empty list is created

*/
sListType create_sList();
/*
function name: destroy_sList();
purpose: Destroys the entire list and frees the memory used by nodes
pre-condition: slist exists
input: sList (sListType) - pointer to the singly Linked List
output: sList (sListType) - pointing to NULL
post-condition: All memory for list nodes is released. the slist points to NULL
*/
sListType destroy_sList(sListType sList);
/*
function name: insertBeginSList();
purpose: insert a node in the beginning of the list
pre-condition: s_list exists  
input: sList (sListType) , newElement (listElementType)
output: sList (sListType) - pointing to the New Node inserted
post-condition: 

*/
sListType insertBeginSList(sListType sList,listElementType newElement);
/*
function name:
purpose: 
pre-condition:
input:
output:
post-condition:
*/
sListType insertEndSList(sListType sList,listElementType newElement);
/*
function name:
purpose: 
pre-condition:
input:
output:
post-condition:
*/
sListType insertPosInSList(sListType sList,listElementType newElement,int pos);
/*
function name:
purpose: 
pre-condition:
input:
output:
post-condition:
*/
void displayList(sListType sList,);
/*
function name:
purpose: 
pre-condition:
input:
output:
post-condition:
*/
listElementType retrieve_ithElement_sList(sListType sList,int pos);
/*
function name:
purpose: 
pre-condition:
input:
output:
post-condition:
*/
sListType deleteBeginSList(sListType sList);
/*
function name:
purpose: 
pre-condition:
input:
output:
post-condition:
*/
sListType deleteEndSList(sListType sList);
/*
function name:
purpose: 
pre-condition:
input:
output:
post-condition:
*/
sListType deletePosinSList(sListType sList,int pos);


#endif 

