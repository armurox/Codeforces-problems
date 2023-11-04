# Problem 1712B "Woeful Permutation"
This is my current best solution to the problem 1712B "Woeful Permutation", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer n, find the permutation that give the largest possible sum for lcm(index, p_index), where we consider permutation to be 1-indexed.

## Method
The easiest way to find the maximum sum is to ensure that every index is matched up with a number that shares no common factors with it, and the easiest way to ensure that is pair up indices with numbers that are one away from them. Essentially, if n is even, then every pair of numbers in an order permutation (i.e. from 1 throught to n), will be swapped (moving by 2 each time). If the array size is odd, then 1 is left as is, and the rest are swapped.