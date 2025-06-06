# Problem 2110A "Fashionable Array"
This is my current best solution to the problem 2110A "Fashionable Array", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Determine the minimum number of moves required to make a given integer array have $min(a) + max(a)$ divisible by $2$.

## Method
This is effectively the same as saying, find the minimum number of moves until the two have the same parity. Easiest way to find this is to sort the array, then loop through the left half until it has the same parity as the rightmost digit, and then do the same for the right half and find the minimum number of steps out of the two.
