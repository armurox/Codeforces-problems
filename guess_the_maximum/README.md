# Problem 1979A "Guess the Maximum"
This is my current best solution to the problem 1979A "Guess the Maximum", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array $a$, Find the maximum integer $k$, such that for the choice of any contiguous subsegement of $a$, $k$ is always smaller than the maximum value of that subsegment.

## Method
Loop though contiguous subsegements of size $2$ in the array, finding the maximum of the pair. Find the minimum of this collection, and output the minimum - $1$. This works, because larger contiguous subsegements would include the size $2$ minimum subsegement.