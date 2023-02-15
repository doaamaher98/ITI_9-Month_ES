/* Interview Questions : V.02 
   ____________________________
   Doaa Maher
   ITI_43
*/

/************************************** PS **************************************/
1- C function to multiply two integer numbers. (HMI)
______________________________________________________
int Multiply_2_Integers (int num1, int num2)
{
	return num1*num2;
}


2- C function to toggle a specific bit in 8-bits variable. (HMI)
_________________________________________________________________
int Toggle_Bit (int u8var, int bit)
{
	int toggled = u8var ^ (1 << bit);
	return toggled;
}


3- C function to print array elements using pointer. (ADAS)
____________________________________________________________
void PrintArr (int * arr, int size)
{
	int i;
	for (i=0; i<size ; i++)
	{
		printf("%i\t", *(arr+i));
	}
}

/************************************** General & Embedded C **************************************/
1- Discuss C compilation / build process in details. (ADAS – HMI - VLS)
_________________________________________________________________________
								  Build Process
								|----------------|
								|          		 | The first phase of the build process is the preprocessor phase; that's responsible for removing the pre-processor directives (hashes) that represents text replacements 
								| Preprocessor   | which are not included at the compilation process, but they are pre-compiled.
								|           	 | Outputs : (.i file) free of hashes (#define, #include, #if, #elif , #endif, ...)
								|           	 |
								|----------------|
								|	Compiler     | The second phase of the build process is the compilation phase; where the the compiler compiles the (.c) file
								|				 | Outputs : (.a file) assembly code 
								|				 |
								|----------------|
								|  Assembler     | The third phase of the build process is the assembler's job; that converts the assembly code into machine code = object code.
								|				 | Outputs : (.o file) object file.
								| 				 |
								|				 |
								|----------------|
								|     Linker	 | Last phase is the Linker's phase; where the object files are linked together to give the executable code, it links function calls with their definitions, libraries, other object files,..
								|                | Linking can be :
								|				 | 1- Static  : It is performed during the compilation of source program, where linking is performed before execution. It takes collection of relocatable object files and generates a fully linked object file that can be loaded and run.
								|				 | 				It does 2 tasks : 1] Symbol Resolution : Every symbol has a  predefined task & 2] Relocation : It relocates code and data section and modifies the symbol references to the relocated memory locations.
								|				 | 2- Dynamic : It is performed during the runtime, This linking is accomplished by placing the name of a shareable library in the executable image.
								|				 |
								|----------------|
								|    Executable  | Outputs.
								|	 (.exe)		 |
								|	 (.elf)		 |
								|	 (.hex)		 |
								|	 (.map)		 |
								|----------------|
									

2- Difference between if and #if. (ADAS)
_________________________________________________________________
- #if : is a preprocessor directive that's executed in pre-building, in compilation time.
	    used in pre-build configurations, it checks the conditions before runtime.
		Can be re-configured before compilation.
	  
- if  : the traditional if condition which's executed at runtime.
		

3- Difference between constant pointer and pointer to constant variable and how to write both. (HMI)
________________________________________________________________________________________________
1- Constant Pointer :
   ------------------
   It indicates that the pointer can't point to another place in memory as it is constant placed at the ROM in (.rodata) segment.
   So, it's address can not be changed.
   
   int x = 10, y = 5;
   int * const ptr = &x;
   
   ptr = &y; // This is forbidden! Pointer ptr is constant.


2- Pointer to Constant :
   ---------------------
   Can be represented in multiple ways :
   
   const int *ptr = &x;
   const *int ptr = &x;
   
   ptr = &y; // This is Valid.
   
   
   It indicates that the Variable that the pointer points at is the one that's constant, so it can not change its address, while the pointer itself can pointes to another variable.
   So, the address of the pointer can be changed as it's located in the stack (if local)
  
/************************************** Embedded Sys. & Computer Architecture **************************************/
1- Difference between microcontroller and microprocessor. (ADAS – HMI – VaS - VLS)
__________________________________________________________________________________

|--------------------------------------------|-------------------------------------------|
|	        Microprocessor		             |            Microcontroller           	 |
|--------------------------------------------|-------------------------------------------|
|  Memory & I/O Devices are External         |  Memory & I/O Devices are Internal        |    		                                     	  |
|  Does not have RAM,ROM or Peripherals      |  Has RAM,ROM & Peripherals                |     		                                     	  |
|  Has External Bus for interfacing          |  Has internal bus for communication       |          	                    	  |
|  Higher Speed & Power Comsumption          |  Lower Speed & Power Consumption          |       		                	  |
|  More Expensive & more complex             |  Less Expensive & Less complex            | 		        
|  Requires More Instructions                |  Requires Less Instructions               |              
|  Can handle more data                      |  Used only for specific applications      |		        
|  Made on an IC                             |  Made wth mircoprocessors & peripherals	 |              
|  Follows Von-Neumann's Model               |  Follows Harvard Model             		 |              
|  Mainly used in personal computers         |  Mainly used in machines like printers    |                          	  |
|  Has Less Registers                        |  Has more Registers    		             |              
|  Has Larger Circuit                        |  Has a smaller circuit  		             |              
|  Doesn't have power featuers               |  Has power features             		     |              
|--------------------------------------------|-------------------------------------------|



2- What is the Difference between stack and heap? (ADAS)
________________________________________________________
Stack :
-------
- Stack has the local variables (initialized & non-initialized)
- Stack has constant local variables.
- It's variables can not be re-sized.
- Fixed size
- Limited.
- Stack can be overflowed.

Stack Allocation :
__________________
- Temporary memory allocation when the function is running; & de-allocates when the function is out of scope.
- Faster allocation & de-allocation.
- Happens on contiguous blocks of memory
- Fixed allocation size is fixed
- Smaller than heap memory



Heap :
-------
- Has memory allocations & de-allocations : (malloc, calloc & realloc)
- Variables Can be re-sized
- Resizing is possible.
- Takes more time in execution tha stack

Heap Allocation :
_________________
- Allocated in runtime of the program.
- De-allocation is not automatic, you have to de-allocate the allocated memory.
- Happens in a random order in memory.
- Allocation size is choosen by the user.
- Larger than stack memory
