# Problem 1676B "Equal Candies"
This is my current best solution to the problem 1676B "Equl Candies", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers, determine the minimum total number to remove to make all the integers equal, where a removal counts as subtracting one from any element of the array.

## Method
Compute them minimum of the array. All the integers must be made equal to this. Then, loop through the array, summing up the difference between the current element and the minimum. Finally, print out this sum.