# Problem 2049A "MEX Destruction"
This is my current best solution to the problem 2049A "MEX Destruction", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array $a$ of non-negative integers, determine the number of operations needed to make it an array of all zeros, where an operation is defined to take any sub-array $b$ of the original array, and make it into a single MEX (minimum excluded integer).

## Method
The maximum number of operations is $2$, as, in the worst case you have an array of not all zeros, sepearated by zeros which you convert into all non-zeros, and with one more move into all zeros. Thereforce, loop through teh array, counting through th number of distinct consecutive non-zero groups. If these are less then $2$, print that number, otherwise print $2$.
