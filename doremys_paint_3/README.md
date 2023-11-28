# Problem 1890A "Doremy's Paint 3"
This is my current best solution to the problem 1890A "Doremy's Paint 3", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers, determine if there exists some permutation where all pairs of the integers add up to the same integer.

## Method
The minimumn constraint for this to be true is that there can be at most 2 distinct integers in the array, and that they are equal in number, or 1 apart. Any other condition will not make the array possible, as say a_1 + a_2 == k, then a_2 + a_3 == k must be true, but as a_2 is constant, it means that a_3 must be equal to a_1. As a_1 and a_2 are arbitrary, this reasoning holds throughout the array, and therefore there can be at most only two 2 distinct integers in the array. The program then is just implementing this idea.