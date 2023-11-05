# Problem 1712A "Wonderful Permutation"
This is my current best solution to the problem 1712A "Wonderful Permutation", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer n, and an integer k <=n, where n represents the size of a permutation an k represents the size of a subset of the permutation, determine the minimum number of swaps required so that the sum within k is minimized.

## Method
The minimum sum in k is obtained when k the subset of the permutation in n is itself a permutation. Therefore, the easiest way would be to create a set (in python, its an unordered_set in C++), containing all the values from 1 through to k. Then, looping through p_1 through to p_k in n, for every element in the sub-array not present in the set, the number of swaps increases by 1. In this way, we calculate the mininimum number of moves to make p_1 through to p_k into a permutation itself.