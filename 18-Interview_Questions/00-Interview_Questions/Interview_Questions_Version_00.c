/*************************************************** Doaa Maher ******************************************************/
================================================== Problem Solving ====================================================
1- C function to SWAP two variables. (ADAS - VaS) Valeo
---------------------------------------------------------
void swap_two_vars (int *x, int *y)
{
	int temp =  *x;
	*x		=   *y;
	*y 		= 	temp;
}
#########################################################################################################################
2- C function to SWAP two pointers, draw what happens in the Stack. (ADAS - HMI) Valeo
---------------------------------------------------------------------------------------
void swap_two_ptrs (int **ptr1, int **ptr2)
{
    int *temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
#########################################################################################################################
3- C function to get the most repeated element in an array. (ADAS) Valeo
--------------------------------------------------------------------------
int Most_Repeated_Element (int *arr, int size)
{
    int i,j;
    int repeatedElement, max=0;
    int count = 0;

    for (i=0; i<size; i++)
    {
        for (j=i+1; j<size ; j++)
        {
            if (arr[i] == arr[j])
            {
                count ++;
            }

            if (count > max)
            {
                max = count;
                repeatedElement = arr[j];
            }
        }
    }

    return repeatedElement;
}
#########################################################################################################################
4-C function that returns the sum of the digits of an integer number. Example: 1234, the function
should return 1+2+3+4 = 10 (PTS) Valeo
------------------------------------------------------------------------------------------------
int Sum_of_Digits (int number)
{
    int sum = 0;
    int last_digit;

    while (number)
    {
        last_digit = number%10;  // The Last digit
        sum += last_digit;
        number = number/10;      // The Number without the last digit
    }

    return sum;
}
================================================ Embedded Sys. & Computer Architecture ========================================
1- What do you know about Microcontroller Memory Segments? (ADAS - HMI - VaS)
-----------------------------------------------------------------------------
-------------------------------- Memory Segments -------------------------------
|----- RAM ------|											  |----- ROM ------|
|				 |											  |				   |
|	  .stack	 |											  |	  .vector	   |
|				 |											  |				   |
|----------------|											  |----------------|
|				 |											  |				   |
|	  .data		 |											  |	  .data		   |
|				 |											  |				   |
|----------------|											  |----------------|
|				 |											  |				   |
|	  .bss		 |											  |	  .txt = .code |
|				 |											  |				   |
|----------------|											  |----------------|
| 				 |											  | 			   |
|     .heap      |											  |   .rodata      |
|----------------|											  |----------------|

1- (.stack) :												  |	1- (.vector) :
-------------                                                 | ---------------
It has :-                                                     | It has :-
1] Local initialized variables                                | 1] The Interrupt Vector Table (IVT)
2] Local Uninitialized variables                              |
3] Local constant variables                                   |
                                                              |
2- (.data) :                                                  | 2- (.data) :
------------                                                  | ------------
1] Initialized global variables                               | 1] Initialized global variables
2] Static global initialized variables                        | 2] Static global initialized variables
3] Static local initialized variables                         | 3] Static local initialized variables
                                                              |
3- (.bss) :                                                   | 3- (.txt) :
------------                                                  | ------------
1] Uninitialized global variables 		[or initialized by 0] | 1] Functions
2] Static global unitialized variables	[or initialized by 0] |
3] Static local unitialized variavles 	[or initialized by 0] |
															  |
4- (.heap) :                                                  |
-------------                                                 | 4- (.rodata) :
1] malloc                                                     | ---------------
2] calloc                                                     | 1] Static Constant Local variables
3] realloc                                                    | 2] Static Constant global variables
															  | 3] Constant global variables
															  | 4] String Literals
------------------------------------------------------------------------------------------------------------------
#########################################################################################################################

===================================================General & Embedded C=========================================================
1- Difference between static, extern, volatile, and register keywords. (ADAS - VaS) Valeo
--------------------------------------------------------------------------------------------
1] Static :-
------------
- Static variable must be known before the runtime.
- Static uninitialized variables are initialized with zero, & is stored in (.bss) in RAM, & if initialized, stored in (.data) Segment.
- Static Local variables don't lose their values if there's a function called, so they are like a global variables but in a definite scope.

2] Extern :-
--------------
- Extern keyword is used for a function prototype or a variable that will be used in another file/program.
- Extern variables will be externally linked.
- It only can DECLARE a varible & not define it; ex: extern int x; // Declared (in main.c) -- (extern.c) : int x = 10; // Declared & Defined
												 Then, here it'll print 10.
3] Volatile :-
---------------
- Prevents the Compiler from Optimizing the variable, it's used in defining the Registers to make sure the address won't be changed due to any
  unexpected behavior done by the complier. 

4] Register :-
---------------
- Register keyword is used to tell the compiler to use the register as a memory for the variable instead of using the RAM.
- It makes it fast to read/write from/to this variable, which makes the performance & execution time better
- It won't have a memory address as it's not placed in RAM. [will give a Compilation Error]
#########################################################################################################################

2- Define the DDRB register using #define, why you need to make casting and what is the usage of
volatile keyword. (ADAS) Valeo
--------------------------------------------------------------------------------------------
#define				DDRB			(*(volatile u8 *) 0xXX)

0xXX : Base Address from the Datasheet, with the Address that's mapped with RAM (Von-Neumann's Architecture) as we're writing in C-language not Assembly

We Cast to (u8) because :
-------------------------
We Cast the Address of the Register to a pointer to unsigned char (1 Byte) = (it's size) of this Register.

We need volatile because :
--------------------------
We use volatile to make sure everytime the compiler doesn't optimize and change the address of the register DDRB due to
any action.

#########################################################################################################################

3-What is the error if the function does not have a prototype? (HMI)
--------------------------------------------------------------------------------------------
Warning -> Implicit Declaration of Function.
#########################################################################################################################

4-What is the Call Back function? (ADAS)
--------------------------------------------------------------------------------------------
- The function that takes function pointers as a parameters, which can be called back when an event occur.
- If I'm executing a function in MCAL layer, and need to call back the APP layer, which will ruin the Architecture hierarchy [As the HAL is the layer that can communicate with APP layer],
So,  the callback function is used here in this case, which takes the address of the function I want to execute right now, & jumps to execute it.


Ex  :
-----
DIO driver with the ISR functions, when an interrupt fires, the DIO has to inform the APP layer; that's done by using the Callback function
as the Address/Reference of the ISR is passed to the callback function that takes pointer to function as an argument.

Code for Illustration :
------------------------
void Callback_Func ( void (*ptr) () )
{
	// This is the Callback function which takes pointer to Function (Address of another function)
	(*ptr ) (); 		// Callback the Function	
						   [3]
}

int Function ()
{
	// The will-be Called function
	// [4]
}

int main()
{
	void (*ptr)() = &Function; // Calling the Callback_Func that takes an address; & passing it the address of Function.
								 [1]
								 
	Callback_Func(ptr);		  // Calling Function.
								 [2]
}				

================================================ Communication Protocols ===========================================







=================================================== Peripherals & Hardware =========================================








====================================================== RTOS =========================================================








