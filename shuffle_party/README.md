# Problem 1937A "Shuffle Party"
This is my current best solution to the problem 1937A "Shuffle Party", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer $n$, representing an array from $1$ to $n$, arranged precisely in increasing order, determine the final position of $1$, after a swap action has been performed on each of $2$ to $n$. A swap counts as finding the largest divisor of the number at that position and swapping it with the index at that location.

## Method
Loop through the powers of 2. If $n$ is a power of 2, then print out $n$, otherwise print out the power of of 2 less than the power of 2 just greater than $n$. This is because $1$ will only shift to power of two locations, since they have their largest divisor wherever $1$ was previously swapped.