# Problem 2106B "St. Chroma"
This is my current best solution to the problem 210bA "St. Chroma", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integers $n$ and $x$, construct a permutation $p$ with integers from $0$ to $n - 1$ such that when an array formed from the minimum excluded integer at each contiguous sub-array from $p$ at the start, that it is formed with maximum $x$.

## Method
The permutation to construct is relatively simple. First, have all the integers in ascending order $< x$. Then, after that all the integers $> x$, and finally $x$. The algorithm is greedy.
