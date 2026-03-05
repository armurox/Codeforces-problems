# Problem 2185B "Prefic Max"
This is my current best solution to the problem 2185B "Prefix Max", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given an array of integers of size n. You can swap any two integers **at most** one time. The value of the array is obtained by taking the sum of the prefixes of the array. Determine the maximum value of the array.

## Method
The way to do this would be to just do it greedily. Put the max value of the array at the front with the swap, and then sum of the array is simply $max(a) \cdot n$ when $n$ is the length of the array.
