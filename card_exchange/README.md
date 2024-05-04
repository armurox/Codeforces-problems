# Problem 1966A "Card Exchange"
This is my current best solution to the problem 1966A "Card Exchange", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integer $n$ and $k$, being the size of an array of integers, and the number of equal integers that can be picked in a single operation respectively, determine the minimum size that a given array of integers can be made into. In a single operation, you can pick $k$ integers that are the same, and convert them into $k - 1$ integers of any value, as long as those are also equal.

## Method
Check if any element of count at least $k$ exists in the array, storing the count in a hash_map to quickly access elements that reach $k$. If you do, then them minimum size of the array is $k - 1$, as you can always reduce the size i.e. k becomes $k - 1$, if at least one other integer exists, then make $k - 1$ into that value, and you will have $k$ integers to work with again, which applies recursively until you have $k - 1$ integers. If no element exists $k$ times in the array, then its size cannot be reduced, and the answer is simply $n$.