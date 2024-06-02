# Problem 1637A "Sorting Parts"
This is my current best solution (after looking at the editorial) to the problem 1637A "Sorting Parts", which is a 800 rated problem.

## Problem statement
Given an array of integers, determine if it is possible that it is not sorted in non-decreasing order after you have picked an index from $1$ to $n - 1$ (inclusive), and sorted the individual subests sperataed by that index in non-decreasing order.

## Method
There are simply two cases. If the array is already sorted, then it will remain so, as you cannot change this with the moves available. If the array is not sorted, you can always pick the index at the point when the elements are out of order comapred to each other on either side of the index, and those will never be sorted.