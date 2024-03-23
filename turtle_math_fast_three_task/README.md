# Problem 1933B "Turtle Math: Fast Three Task"
This is my current best solution to the problem 1933B "Turtle Math: Fast Three Task", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer array $a$, determine the minimum number of moves to make its sum divisible by $3$, where a move is either a removal of an element, or the increase in the value of an element by $1$.

## Method
Compute the sum. Compute the the sum $\mod 3$, and if it is $0$, no moves are required. If it is one, loop through the array, checking if any element is also $\mod 3$, and if it is, only one move is required, else $2$. Finally, in the last case (sum $\mod 3 = 2$), $1$ move is required.