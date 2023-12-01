# Problem 1896A "Jagged Swaps"
This is my current best solution to the problem 1896A "Jagged Swaps", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a permutation, where two element a_i and a_i+1 can be swapped only if a_i-1 < a_i > a_i+1, determine if the permuation can be sorted into increasing order.

## Method
The only way in which the permutation cannot be sorted is if the first element is not 1. Otherwise, if the array is out of order but the first element is 1, then there always exists a point which satisfies the conditions for swaps until the array is in order.