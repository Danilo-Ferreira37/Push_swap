*This project has been created as part of the 42 curriculum by dosorio-*

# Description
The push_swap is a 42 project whose goal is to sort a stack of integers using a limited set of operations and the smallest number of moves possible.

## Allowed operations
sa: swaps the first two elements of stack A;  
sb: swaps the first two elements of stack B;  
ss: performs sa and sb at the same time;  
pa: moves the first element of stack B to the top of stack A;  
pb: moves the first element of stack A to the top of stack B;  
ra: rotates stack A upwards (the first element goes to the end);  
rb: rotates stack B upwards;  
rr: performs ra and rb at the same time;  
rra: rotates stack A downwards (the last element goes to the top);  
rrb: rotates stack B downwards;  
rrr: performs rra and rrb at the same time.

## Project scope
The project involves:  
Linked list manipulation;  
Implementation of sorting algorithms;  
Operation optimization;  
Logical reasoning and complexity analysis.

In case of an error, the program prints Error\n.  
An error can be:

An argument that is outside the limits of an int;  
An argument containing a character that is not '+', '-', a space, or a number;
Duplicated numbers;  
No arguments.

# Instructions
To compile the program:

make  
./push_swap <numbers>

Example:  
./push_swap 8 5 2
sa  
rra

To clean:  
make clean  
make fclean

## Resources
https://www.youtube.com/watch?v=X_6LTVkymVM  
https://www.youtube.com/watch?v=zXBaLEGv0iM  
Microsoft Copilot – for some clarifications.

## Algorithm
I used radix_sort as the algorithm. I chose it because I found the method very interesting: it sorts numbers by looking at one bit at a time instead of comparing entire integer values directly.

The radix sort goes through all numbers several times, separating them according to the value of each bit (0 or 1), from the least significant (LSB) to the most significant (MSB), until everything is sorted.

Radix sort has complexity O(n · k) because it goes through all elements for each bit/digit analyzed. In push_swap, since k ≈ log₂(n), the practical complexity is O(n log n).
O(n log n) means that the algorithm goes through all elements (n) several times, but the number of repetitions grows very slowly (log n), because it depends only on the number of bits needed to represent the largest number.
