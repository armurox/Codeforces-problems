# Problem 1746B "Rebellion"
This is my current best solution to the problem 1746B "Rebellion", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of 0's and 1's, sort it into non-descending order, where you can only perform the following operation an arbitrary number of times: pick any two indices, and add the first index element to the second, deleting the first index element from the array.

## Method
Store a temporary copy of the integer array and then sort it. Compare the unsorted version to the sorted, and anywhere there is a mismatch, add 1 to the number of moves. This will almost give you the number of moves, as it is counting swaps (which is essentially what this algorithm is), but it us double counting them, hence we divide by 2 and then output the answer.