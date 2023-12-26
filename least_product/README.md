# Problem 1917A "Least Product"
This is my current best solution to the problem 1917A "Least Product", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers, determine the minimum number of moves (and what the moves could possibly be), that produces the minimal possible product of all the elements of the array. A single move counts as taking one element of the array, and replacing with the any integer between zero and itself.

## Method
If 0 is contained in the array, then no moves are possible, as the product of the array will always be 0. If 0 is not present in the array, then the next thing to do is to count the number of negative elements present in the array. If there are an odd number of negative elements, then no moves need to be completed. If there are even number, then the array product will be positive (as 0 has already been accounted for in the first case check), and therefore a simple solution is to replace the first element of the array (whatever it may be), with 0, to reduce the array product down to 0. Any further moves are not possible, as now we are in the case where 0 is contained the array, so the product will always be 0.