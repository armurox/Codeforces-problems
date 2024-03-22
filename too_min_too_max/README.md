# Problem 1934A "Too Min Too Max"
This is my current best solution to the problem 1934A "Too Min Too Max", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer array a, find the maximum value of $$|a_i - a_j| + |a_j - a_k| + |a_k - a_l| + |a_l - a_i|$$, where $i$, $j$, $l$ and $k$

## Method
Sort the array, then pick the elements from the ends, this will maximize it.