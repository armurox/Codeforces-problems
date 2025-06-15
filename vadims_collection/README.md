# Problem 2098A "Vladim's Collection"
This is my current best solution to the problem 2098A "Vladim's Collection", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a large integer of $10$ digits, such that the digit at position $i$ from the left is at least $10 - i$ ($1$-indexed), determine the minimum integer that can be obtained by the rearrangement of these digits, preserving this property.

## Method
Loop through the array, keeping track of how many of each digit are there in a hash map. Then, greedily take the lowest legal digit from the hashmap and recreate the integer array. This will be your answer.
