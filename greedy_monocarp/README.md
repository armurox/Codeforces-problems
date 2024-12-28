# Problem 2042A "Greedy Monocarp"
This is my current best solution to the problem 2042A "Greedy Monocarp", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integers $n$ and $k$, and an array $a$ of size $n$, determine the minimum integer to add to one or more chests (distributed) such that if someone greedily removed the elements of the array, they will have exactly $k$ if they stop when they have $k$ or more.

## Method
Sort the array, then greedily remove elements until you have at least $k$. If you do not reach $k$, then the integer to add is $k$ - $total$, otherwise if it is exactly $k$ add no integer, otherwise if you exceed $k$, look at when you were just below $k$, and the difference between $k$ and that value is the integer to add.