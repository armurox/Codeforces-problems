# Problem 2074B "The Third Side"
This is my current best solution to the problem 2074B "The Third Side", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array $a$ of size $n$, determine the maximum possible remaining single element in the array after performing the following operation and arbitrary number of times:
1. Pick any pair of elements in the array.
2. Pick an integer $x$ such that it forms a non-degenerate triange with the other two elements.
3. Remove the two elements from the array and append $x$ to the end of the array.

## Method
To generate the largest possible number, you need a greedy algorithm, where you pick the smallest pair of numbers $a$ and $b$ in the array, and generate an $x$ such that $x = a + b - 1$ to satisfy the non-degenerate triangle condition. Do this repeatedly in increasing pairs until no numbers are left. The way to do this would be to sort the array, then run the algorithm described.
