# Problem 1823A "A-Characteristic"
This is my current best solution to the problem 1823A "A-Characteristic", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array size n, and an integer k, is it possible to produce an array of 1's and -1's only such that the total number of pairs of integers multiplied together to give 1 is equal to k? If so, produce this array.

## Method
If the array exists, it can be split into two parts, a set of 1's and a set of -1's, and hence, the total number of 1 pairs will be ((num_ones) * (num_ones - 1)) / 2 + ((num_minus) * (num_minus - 1)) / 2. Hence, creating a loop that considers all possible splits given the array size, we can find out if such an array exists, and if it does, first print out all the 1's, then all the -1's.