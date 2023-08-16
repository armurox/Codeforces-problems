# Problem 1855A "Dalton The Teacher"

This is my current best solution to the problem 1855A "Dalton The Teacher", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a permutation (an array of integers from 1 to n, where n is the size of the array, in any order), how many swaps (where any two elements can be picked) does it take so that no integer matches its index in the array (specifically for a 1-indexed array).

## Method
We loop though the array, identifying integers that do match their index in the array and for every two new integers, it take 1 more move (starting at 1 incorrect integer) to make the array satisfy the problem statement i.e. if i is the number of invalid integers and m is the minimum number of moves required, they are related by the formula m = i / 2 + i % 2.