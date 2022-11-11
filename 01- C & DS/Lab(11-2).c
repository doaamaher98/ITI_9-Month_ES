#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define    MAX_SIZE    7
#define    DATA_TYPE   int

// Lab(11-2) : Circular Queue [FIFO] all Functionalities on array of integers

// Front of Queue & after it is Rear of Queue
// Increase in Queue [ENQUEUE] [Rear  + 1]
// Decrease in Queue [DEQUEUE] [Front - 1]

// A structure to represent a queue
typedef struct 
{
	DATA_TYPE elements[MAX_SIZE];           // Queue Array 
	int front;                              // Front, the first to be removed
	int rear;                               // The other part
}Queue;

// Functions Prototypes
void InitQueue (Queue *ptr_queue);
int QueueFull (Queue *ptr_queue);
int QueueEmpty (Queue *ptr_queue);
int QueueSize (Queue *ptr_queue);
void ClearQueue (Queue *ptr_queue);
// Adding an item to Queue's rear
int EnQueue (Queue *ptr_queue , DATA_TYPE data);
// Removing an item from Queue's front [FIFO] "passing addresses"
int DeQueue (Queue *ptr_queue , DATA_TYPE *ptr_data);

// Driver program to test above functions./
void main(void)
{
    Queue queue;
	Queue *ptr_queue = &queue;

	DATA_TYPE element;
	DATA_TYPE *ptr_data = &element;
	
	int counter =0, temp =0;
	
	// Initializing
	InitQueue(ptr_queue);
	
	EnQueue(ptr_queue, 1);
	EnQueue(ptr_queue, 2);
	EnQueue(ptr_queue, 3);
	EnQueue(ptr_queue, 4);
	EnQueue(ptr_queue, 5);

	if (QueueFull(ptr_queue))
	{
		printf("Queue is FULL");
	}
	else if (QueueEmpty (ptr_queue))
	{
		printf("Queue is EMPTY!");
	}
	else 
	{
		printf("Queue Size is : %d", QueueSize(ptr_queue));
	}
	printf("\n=============================\n");
	
	// DEQUEUE the element at front 
	// temp has index of front
	temp = ptr_queue -> front;
	
	for (counter = temp; counter <= ptr_queue -> rear; ++counter)
	{
		DeQueue(ptr_queue, ptr_data);
		printf("Element %d\n",*ptr_data);
		printf("Size is %d\n",QueueSize(ptr_queue));
		printf("--------------------\n");
	}
	getch();
	clrscr();
}
//////////////////////////////////////////////////////
void InitQueue (Queue *ptr_queue)
{
	// Intializing the Queue by setting it to be empty
	// Queue is empty when [front = rear = -1]
	ptr_queue -> front = -1;
	ptr_queue -> rear  = -1;
}
///////////////////////////////////////////////////////
int QueueEmpty (Queue *ptr_queue)
{
	// Checks if Queue is Empty by asking if it's front & rear == -1
	if ((ptr_queue -> front == -1 ) && (ptr_queue -> rear == -1))
	{
		return 1;                   // EMPTY
	}
	else
	{
		return 0;                   // NOT EMPTY
	}
}
/////////////////////////////////////////////////////////
int QueueFull (Queue *ptr_queue)
{
	// Checks if the Queue was full or not
	// Full when rear + 1 % MAX_SIZE = front
	if ((ptr_queue -> rear + 1) % MAX_SIZE == ptr_queue -> front)
	{
		return 1;                 // FULL
	}
	else
	{
		return 0;                 // TERMINATE
	}
}
/////////////////////////////////////////////////////////
void ClearQueue (Queue *ptr_queue)
{
	// Make the Queue Emptpy
	ptr_queue -> front = -1;
	ptr_queue -> rear = -1;	
}
///////////////////////////////////////////////////////
int EnQueue (Queue *ptr_queue , DATA_TYPE data)
{
	// Check if Queue was full
	if ((ptr_queue -> rear + 1) % MAX_SIZE == ptr_queue -> front)
	{
		return 0;                 // FULL - TERMINATE
	}
	
	// Check if Empty 
	else if ((ptr_queue -> front == -1) && (ptr_queue -> rear == -1))
	{
		// Points to the location 0 for both rear & front [as it'll be the only element]
		ptr_queue -> front = ptr_queue -> rear = 0;
	}
	// Else it has elements
	else 
	{
		// Points the ptr_queue to rear to next location to locate it's index
		ptr_queue -> rear = (ptr_queue -> rear + 1) % MAX_SIZE;
	}
	
	// Add the element
	ptr_queue -> elements[ptr_queue -> rear] = data;
	
	return 1;
}
////////////////////////////////////////////////////////////////
int DeQueue (Queue *ptr_queue , DATA_TYPE *ptr_data)
{
	// Check if Empty 
	if ((ptr_queue -> front == -1) && (ptr_queue -> rear == -1))
	{
		return 0;                        // EMPTY QUEUE, Can't de-queue
	}
	
	// Deleting element at front
	// Get the front element
	*ptr_data = ptr_queue -> elements[ptr_queue -> front];
	
	// Move this front element forward to exit the queue
	// If it has 1 element in Queue
	if (ptr_queue -> front == ptr_queue -> rear)
	{
		// The element will be removed
		ptr_queue -> front = ptr_queue -> rear = - 1;
	}
	
	// If it has more than 1 element, Dequeue
	else
	{
		ptr_queue -> front = (ptr_queue -> front + 1) % MAX_SIZE;
	}
	return 1;
}
/////////////////////////////////////////////////////////////////
int QueueSize (Queue *ptr_queue)
{
	// Check if Empty
	if ((ptr_queue -> front == -1) && (ptr_queue -> rear == -1))
	{
		return 0;                        // EMPTY QUEUE
	}
	
	// if Rear > Front
	else if (ptr_queue -> rear > ptr_queue -> front)
	{
		
		return (ptr_queue -> rear - ptr_queue -> front +1);
	}
	
	// if Front > Rear
	else if (ptr_queue -> front > ptr_queue -> rear)
	{
		
		return (( MAX_SIZE - ptr_queue -> front) - (ptr_queue -> rear +1));
	}
	
	else 
	{
		return 1;
	}
}