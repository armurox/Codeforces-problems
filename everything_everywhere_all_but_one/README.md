# Problem 1686A "Everything Everywhere All But One"
This is my current best solution to the problem 1686B "Everything Everywhere All But One", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers of size $n$ determine if it is possible with repeated operations to make every integer in the array equal. An operation is selecting $n - 1$ integers and making them all equal to their mean.

## Method
Compute the sum of the array. Then, loop through the array, checking if any element is equal to the sum minus the element itself, divided by $n - 1$ (i.e., if it is equal to the mean of the other elements). If you find one, then print yes, otherwise print no.