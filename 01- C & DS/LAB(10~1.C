#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <alloc.h>

// Lab(10-1) : Full Linked List with all Functionalities

// Defining the Type of struct element
#define       DATA_TYPE          int

// Defining the Node Struct
typedef struct node 
{
	DATA_TYPE element;      // Element in the Node
	struct node *next;      // Next Pointer of type struct node
}Node;

// Head is a pointer of type struct Node 
Node * Head;

/******** Functions prototypes *********/
// Adding a new Node to Linked List (either it was empty or not)
Node *Append (Node *Head, DATA_TYPE element);
// How many Nodes in Linked List
int Length (Node *Head);
// Getting any Members at any Node
int GetElement (Node *Head, int node_number, DATA_TYPE *element);
// Delete First Node
Node *DeleteFirstNode (Node *Head);
// Delete any Node after the first one till the last Node
int DeleteNode (Node *Head, int node_number);
// Insert a New Node at the beginning
Node *InsertFirstNode (Node *Head, DATA_TYPE *element);
// Insert a New Node after the first node
int InsertNodeAfter (Node *Head, int node_number, DATA_TYPE element);
///////////////////////////////////////////////////
///////////////////////////////////////////////////

void main (void)
{		
	// Intializes the head pointer to carry null pointer for now
	Node *ptr_Head = NULL;
	
	int length, count;
	
	DATA_TYPE element;           // Declare an element of type DATA_TYPE
	
	DATA_TYPE *ptr_element  = &element;  // Intializing a pointer that points to element
	
	// Create a New Linked List
	///////////////////////////////////////////////////////////////////////
	// 1- Append a Node
	ptr_Head =  Append(ptr_Head, 1);         //  Return its address to head
	Append(ptr_Head, 2);
	Append(ptr_Head, 3);
	Append(ptr_Head, 4);
	Append(ptr_Head, 5);
	
	// Calculate the Nodes numbers
	length = Length(ptr_Head);
	
	// Print the List with it's nodes
	printf("Linked List : \n ");
	for (count =1; count <= length ; ++count)
	{
		// 2- Passing the nodes to GetElement
		GetElement(ptr_Head, count, ptr_element);
		// Printing the List
		printf("%d]  %d\n", count, *ptr_element);
	}
	printf("================================\n");
	
	// 3- Delete 1st Node (1)
	ptr_Head = DeleteFirstNode(ptr_Head);
	
	length = Length(ptr_Head);
	
	printf("Linked List After 1st Node Deletion : \n");
	// Print the List After Deletion
	for (count =1; count <= length ; ++count)
	{
		// 2- Passing the nodes to GetElement
		GetElement(ptr_Head, count, ptr_element);
		// Printing the List
		printf("%d]  %d\n", count, *ptr_element);
	}
	
	printf("================================\n");
	
	// 4- Delete the whole Node (5)
	DeleteNode(ptr_Head,4);
	
	length = Length(ptr_Head);
	
	printf("Linked List After 5th Node Deletion : \n");
	for (count =1; count <= length ; ++count)
	{
		// 2- Passing the nodes to GetElement
		GetElement(ptr_Head, count, ptr_element);
		// Printing the List
		printf("%d]  %d\n", count, *ptr_element);
	}
	printf("================================\n");
	
	// 5- Insert Node at first (0)
	ptr_Head = InsertFirstNode(ptr_Head,0);
	
	length = Length(ptr_Head);
	printf("Linked List After Inserting Node at first : \n");
	for (count =1; count <= length ; ++count)
	{
		// 2- Passing the nodes to GetElement
		GetElement(ptr_Head, count, ptr_element);
		// Printing the List
		printf("%d]  %d\n", count, *ptr_element);
	}
	printf("================================\n");
	
	// 6- Insert node after (6 after 4) [PROBLEM]
	InsertNodeAfter(ptr_Head,4,6);
	
	length = Length(ptr_Head);
	printf("Linked List After Inserting Node 6: \n");
	for (count =1; count <= length ; ++count)
	{
		// 2- Passing the nodes to GetElement
		GetElement(ptr_Head, count, ptr_element);
		// Printing the List
		printf("%d]  %d\n", count, *ptr_element);
	}
	printf("================================\n");
	
	
	return 0;
	
	getch();
	clrscr();
}

Node *Append (Node *Head, DATA_TYPE element)
{
	/****** If Linked List was Empty *************/
	// Intializing the new node pointer to NULL (locally in stack)
	Node *new_node = NULL;
	
	// Allocating Memory with the size of struct Node for the new node in heap
	new_node = (Node *) malloc(sizeof(Node));
	// Checking if Allocation is done or not
	if (new_node == NULL)
	{
		return NULL; // returning null pointer (no alloc)
	}
	
	// Appending the new_node
	new_node -> element = element;
	new_node -> next = NULL;      // Reaching end of node
	
	
	/********* If Linked List had Nodes ****************/
	if (Head != NULL) // Head points to other node
	{
		// Let the Head [1st node address] points to Temp node pointer
		Node *Temp = Head;
		
		// Moving the Temp to the node before the last one to append our new_node
		while (Temp -> next != NULL)
		{
			Temp = Temp -> next;
		}
		// When reaching the wanted node position
		Temp -> next = new_node;
	}
	
	// Return the new_node 
	return new_node;
}
////////////////////////////////////////////
int Length (Node *Head)
{
	Node *Temp = Head; // Creating a Temp points to head
	
	int counter = 1;   // Intialize counter to start counting at 1
	
	// Check if Linked list was empty
	if (Head == NULL)
	{
		return 0; // Length = 0
	}
	
	// Linked list isn't empty
	while (Temp -> next != NULL)
	{
		counter ++;          // Increment the counter
		Temp = Temp -> next; // Temp points to next node
	}
	
	return counter;
}
/////////////////////////////////////////
int GetElement (Node *Head, int node_number, DATA_TYPE *element)
{
	Node *Temp = Head;
	
	// Check if Linked list was empty
	if (Head == NULL)
	{
		return 0; 
	}
	
	// Check if node_number isn't at list's boundaries or is less than 1 : Terminate
	if ((node_number > Length(Head)) || (node_number < 1) )
	{
		return -1;
	}
	
	// Linked list is not empty
	int counter = 1;         // Intializing a counter =1
	
	// Count to the nodes
	while (node_number > counter)
	{
		Temp = Temp -> next;    // Points to next node
		counter ++;
	}
	// After reaching the desired node number
	// Get the Element you're looking for & set it to element
	*element = Temp -> element;         
	
	return 1;
}
/////////////////////////////////////////////////////////
Node *DeleteFirstNode (Node *Head)
{
	// Check if Linked list was empty
	if (Head == NULL)
	{
		return 0; // Length = 0
	}
	Node *Second_Node;
	// 2 Cases :
	/////////////////////////////////////////////
	// 1 - If linked list had only 1 node
	// 2 - If linked list had more than 1 node
	/////////////////////////////////////////////
	// Check the list length
	if (Length (Head) == 1)
	{
		free(Head);       // Remove it!
		return NULL;
	}
	
	else                  // If it had more than one node 
	{
		// 2-
		// To delete 1st node, Temp must be a pointer to second node as it's going to be our start
		Second_Node = Head -> next;   
		
		free (Head);             // Deleting the first node
	}
	// Return the address of 2nd node which is now the first node in list
	return Second_Node;
}
/////////////////////////////////////////////////////////////////////////////
int DeleteNode (Node *Head, int node_number) // Deletes any node that comes after the first node
{
	// Check if Linked list was empty
	if (Head == NULL)
	{
		return 0; // Length = 0
	}
	
	// Check if node_number isn't at list's boundaries or is less than 2!! as we're not deleting the 1st : Terminate
	if ((node_number > Length(Head)) || (node_number < 2) )
	{
		return -1;
	}
	
	// We'll access the node we want to delete (current) via the pointer to it's previous node
	// The next address of the previous will be the current
	// The next of the previous will be NULL
	Node *Previous = Head;     // Node before the wanted one to be deleted
	Node *Current;			   // Node to be deleted
	
	int count = 1;             // Intializing counter
	
	while ( (node_number - 1) > count)   // Current node isn't counted
	{
		Previous = Previous -> next;     // Move to the next node
		count ++;
	}
	
	// Now we're landing on the node_number of current node
	Current = Previous -> next;   // Set the Next add. of previous node to be current add.
	
	Previous -> next = Current -> next;    // Before removing the current, it's next must be put in the previous' next
	Previous -> next = NULL;               // Setting it to be the last with it's NULL next
	
	free(Current);                         // Delete current
	
	return 1;
}
////////////////////////////////////////////////////////////////////////////
Node *InsertFirstNode (Node *Head, DATA_TYPE *element)   // Returning the Node 
{
	// List must have at least one node or more!
	// Check if Linked list was empty
	if (Head == NULL)
	{
		return NULL; // Length = 0
	}
	
	// Declaring the first node pointer of type Node
	Node *First_Node;
	
	// Allocate it a block memory in heap
	First_Node = (Node *) malloc(sizeof (Node));
	
	// Check if it was allocated or not
	if (First_Node == NULL)
	{
		return Head;           // Returns to same Head address
	}
	
	
	// Making the next value of inserted node be have the address of head
	First_Node -> next    = Head;
	// Setting the wanted element into first node's element 
	First_Node -> element = element;
	
	// Assigning the head to be the first node's address it was holding to make it at the back
	Head = First_Node;
	
	return Head;          // Return the first node
}
///////////////////////////////////////////////////////////////////////////////
int InsertNodeAfter (Node *Head, int node_number, DATA_TYPE element)
{
	// Check if Linked list was empty
	if (Head == NULL)
	{
		return 0; // Length = 0
	}
	
	// Check if node_number isn't at list's boundaries or is less than 1 as we're not deleting the 1st : Terminate
	if ((node_number > Length(Head)) || (node_number < 1) )
	{
		return -1;
	}
	
	// Inserts a new node with the order I decide (node_number)
	// element here is treated as a value not an address
	// The Node we want to insert : current
	// Setting the previous node to head (our start) & defining current of type node
	Node *Previous = Head;
	Node *Current;
	
	int counter = 1;
	
	// Allocate memory for the New node in the heap memory
	Current = (Node *) malloc (sizeof(Node));
	// Check if it was allocated or not
	if (Current == NULL)
	{
		return 0;           
	}
	
	
	while (node_number > counter)
	{
		Previous = Previous -> next;     // Moving until reaching the desired node_number to insert the node after it
		counter ++;
	}
	
	Current -> element = element;
	Current -> next    = Previous -> next;
	
	
	Previous -> next = Current;
	
	return 1;
}