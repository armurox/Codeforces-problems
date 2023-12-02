# Problem 1903a "Halloumi Boxes"
This is my current best solution to the problem 1903A "Halloumi Boxes", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers and an integer k, determine if it is possible to sort the array so that it is monotonically increasing (non-decreasing). The operations allowed is the reversal of any sub-array of the array any number of times, where the size of any of the sub-arrays to reverse can be at most k.

## Method
Essentially, the array can be sorted if the conditions satisfy a bubble sort. So, there is only one case when the array cannot be sorted, which is when it is itself not in non-decreasing order, and k is less than 2 (since no swaps are allowed in that situation). All other cases allow at least a bubble sort, or are at least already sorted.