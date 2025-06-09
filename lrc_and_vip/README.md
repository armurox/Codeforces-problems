# Problem 2107A "LRC and VIP"
This is my current best solution to the problem 2107A "LRC and VIP", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer array $a$, determine if it is possible to split it into two subsequences, each with at least one element and differing g.c.d's. If it is, do the split, else indiciate it is not possible.

## Method
If every element is the same (i.e., the count of the first element is equal to the length of the array), then it is not possible, as the g.c.d of both subsequences will always be that value. Otherwise, it is always possible to construct valid susbequences, by taking the max (or min) value and putting it in one subsequence, and the rest in the other. Then, you will have $2$ subsequences, one which has a g.c.d of the max (or min) value, and the other with another g.c.d.
