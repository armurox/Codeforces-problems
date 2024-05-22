# Problem 1649A "Game"
This is my current best solution to the problem 1649A "Game", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a binary array, find the minimum possible single jump of size $x$ required to reach the last $1$ from the first $1$, where any adjacent jump is free, but at most one jump of size $x$ can be used, and one can never land on a $0$ of the array.

## Method
Loop through the array from the start, until you find the last consecutive $1$ in the start. Do the same from the end. The minimum jump is the different between those indices. If the index of the last is less than that of the first, then only free jumps are required and the minimum jump is simply $0$.