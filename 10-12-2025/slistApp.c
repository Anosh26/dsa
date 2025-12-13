#include <stdio.h>
#include <stdlib.h>
#include "slist.h"

void printMenu() {
    printf("\n--- Singly Linked List Manager ---\n");
    printf("1. Insert at Beginning\n");
    printf("2. Insert at End\n");
    printf("3. Insert at Position\n");
    printf("4. Delete from Beginning\n");
    printf("5. Delete from End\n");       
    printf("6. Delete from Position\n");
    printf("7. Retrieve Element\n");
    printf("8. Display List\n");
    printf("0. Exit\n");
    printf("Enter choice: ");
}

int main() {
    sListType myList = create_sList();
    
    int choice, value, pos;
    listElementType result;

    while(1) {
        printMenu();
        if (scanf("%d", &choice) != 1) {
            while(getchar() != '\n'); 
            continue;
        }

        switch(choice) {
            case 1: // Insert Begin
                printf("Enter integer to insert: ");
                scanf("%d", &value);
                myList = insertBeginSList(myList, value);
                printf("Inserted %d at beginning.\n", value);
                break;

            case 2: // Insert End
                printf("Enter integer to insert: ");
                scanf("%d", &value);
                myList = insertEndSList(myList, value);
                printf("Inserted %d at end.\n", value);
                break;

            case 3: // Insert Position
                printf("Enter integer to insert: ");
                scanf("%d", &value);
                printf("Enter position (0-based): ");
                scanf("%d", &pos);
                myList = insertPosInSList(myList, value, pos);
                break;

            case 4: // Delete Begin
                if (myList == NULL) {
                    printf("List is already empty.\n");
                } else {
                    myList = deleteBeginSList(myList);
                    printf("Deleted first element.\n");
                }
                break;

            case 5: // Delete End 
                if (myList == NULL) {
                    printf("List is already empty.\n");
                } else {
                    myList = deleteEndSList(myList);
                    printf("Deleted last element.\n");
                }
                break;

            case 6: // Delete Position 
                if (myList == NULL) {
                    printf("List is empty.\n");
                } else {
                    printf("Enter position to delete (0-based): ");
                    scanf("%d", &pos);
                    myList = deletePosinSList(myList, pos);
                    printf("Deletion operation complete.\n");
                }
                break;

            case 7: // Retrieve
                printf("Enter position to retrieve: ");
                scanf("%d", &pos);
                result = retrieve_ithElement_sList(myList, pos);
                if (result != -1) { 
                    printf("Element at %d is: %d\n", pos, result);
                }
                break;

            case 8: // Display
                printf("Current List: ");
                displayList(myList);
                break;

            case 0: // Exit
                printf("Cleaning up memory...\n");
                myList = destroy_sList(myList);
                printf("Exiting. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}