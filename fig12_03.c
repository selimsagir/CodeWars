// Fig. 12.3: fig12_03.
// Inserting and deleting nodes in a list
#include <stdio.h>
#include <stdlib.h>
//self-referencial structure
struct listNode
{
	char data;
	struct listNode *nextPtr;

};
// prototypes
typedef struct listNode ListNode;
typedef ListNode  *ListNodePtr;

void insert(ListNodePtr *sPtr, char value);
char delete(ListNodePtr *sPtr, char value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);

int main(void)
{
	ListNodePtr startPtr = NULL; //initially there are no nodes
	char item; //char entered by user
	instructions();  //display inst
	printf("%s", "?");
	unsigned int choice; //user's choice
	scanf("%u", &choice);
	//while user does not select 3
	while (choice != 3) {
		switch (choice)
		{
		case 1:
			printf("%s", "Enter a character");
			scanf("\n%c", &item);
			insert(&startPtr, item);
			printList(startPtr);
			break;
		case 2: //delete an element
			// if list is not empty
			if (!isEmpty(startPtr)) {
				printf("%s", "Enter character to be deleted");
				scanf("\n%c", &item);
				//if character found delete item
				if (delete(&startPtr, item)) {
					//remove
					printf("%c deleted", item);
					printList(startPtr);
				}
				else {
					printf("%c not found.\n\n", item);
				}
			}
			else{
				puts("List is empty.\n");
			}
		default:
			puts("Invalid choice");
			instructions();
			break;
		}
		printf("%s", "?");
		scanf("%u", choice);
	}
	puts("End of run");
}

//display program instructions to user
void instructions(void)
{
	puts("Enter your choise :\n"
		" 1 to insert an element into the list.\n"
		" 2 to delete an element from the list.\n"
		" 3 to end"
	);

}

//insert a new value into the list in sorted order
void insert(ListNodePtr *sPtr, char value)
{
	ListNodePtr newPtr = malloc(sizeof(ListNode));

	if(newPtr != NULL) { // is space available?
		newPtr->data = value;
		newPtr->nextPtr = NULL;

		ListNodePtr previousPtr = NULL;
		ListNodePtr currentPtr = *sPtr;

		//while to find correct location in the list
		while (currentPtr != NULL && value > currentPtr->data) {
			previousPtr = currentPtr; // walk to...
			currentPtr = currentPtr->nextPtr; //...next node
		}

		//insert new node at beginning of list
		if (previousPtr == NULL) {
			newPtr->nextPtr = *sPtr;
			*sPtr = newPtr;
		}
		else { //insert a new node between previousPtr and currentPtr
			previousPtr->nextPtr = newPtr;
			newPtr->nextPtr = currentPtr;
		}
	}
	else {
		printf("%c not inserted. No memory available.\n", value);
	}
}

char delete(ListNodePtr *sPtr, char value)
{
	//delete first node if a match is found
	if (value == (*sPtr)->data) {
		ListNodePtr tempPtr = *sPtr; //hold onto node being removed
		*sPtr = (*sPtr)->nextPtr; //de-thread the node
		free(tempPtr); //free the de-threaded node
		return value;
	}
	else {
		ListNodePtr previousPtr = *sPtr;
		ListNodePtr currentPtr = (*sPtr)->nextPtr;

		//loop to find the correct location in the list
		while (currentPtr != NULL && currentPtr->data != value) {
			previousPtr = currentPtr; //walk to ...
			currentPtr = currentPtr->nextPtr; //...next node
		}

		//delete node at currentPtr
		if (currentPtr != NULL) {
			ListNodePtr tempPtr = currentPtr;
			previousPtr->nextPtr = currentPtr->nextPtr;
			free(tempPtr);
			return value;
		}

	}
	return '\0';
}

int isEmpty(ListNodePtr sPtr) {

	return sPtr == NULL;
}

//print the list
void printList(ListNodePtr currentPtr) {
	 //if list is empty
	if (isEmpty(currentPtr)) {
		puts("List is empty.\n");
	}
	else {
		puts("The list is :");
		//while not the end of the list
		while (currentPtr != NULL) {
			printf("%c --->",currentPtr->data);
			currentPtr = currentPtr->nextPtr;
		}
		puts("NULL\n");
	}
}
