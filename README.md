**Purpose**

Push Swap is project from 42 School, coded in C. Purpose is to discover sorting algorithms and use them to sort number with minimum of movements (Time Complexity O()).
The program acepts a list of integers (range within 8-bytes signed integer definition), and provides a list of movements to sort those numbers using only 2 stacks. 

**Installation**

the library compiles with gcc or clang, using "cc" alias command.
In your terminal run "make" in the main directory, which compiles all files and creates a program named push_swap
launch in your terminal "./push_swap" followed by signed integer numbers separated by spaces (accept arguments within quotes or not).

"make clean" removes object files created.
"make fclean" removes object files and the program.
"make re" does a "make fclean" followed by a "make" to regenerate all files.

**Additional information**

The program uses a Turk Algorithm to sort 100 random numbers in less than 700 operations, and 500 numbers in less than 5500 operations, using only 2 stacks ('a' and 'b'). 
Operations allowed are:
- sa: swap the first 2 elements of stack a. Does nothing if there is none or just one.
- sb: swap the first 2 elements of stack b. Does nothing if there is none or just one.
- ss: executes sa and sb at the same time.
- pa: takes the first element of stack b and moves it on top of stack a. Does nothing if b is empty.
- pb: takes the first element of stack a and moves it on top of stack b. Does nothing if a is empty.
- ra: rotates stack a, first element becomes the last.
- rb: rotates stack b, first element becomes the last.
- rr: ra and rb executed at the same time.
- rra: inverse rotation of stack a, last element becomes first. 
- rrb: inverse rotation of stack b, last element becomes first.
- rrr: rra and rrb executed at the same time.

I first tried using a Radix sorting algo, although it was pretty simple to code it wasn't efficient to meet the minimum requirements of efficiency for the project... 
