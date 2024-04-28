# Problem 1669B "Triple"
This is my current best solution to the problem 1669B "Triple", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers, print out any integer that exists three or more time, else print $-1$.

## Method
Loop through the array, storing each element as a key in a hash_map, incrementing the value whenever duplicate elements are encounted. The moment any value hits 3, print out that element. Otherwise, print out $-1$.