# Problem 1754B "Kevin And Permutation"

This is my current best solution to the problem 1754B "Kevin And Permuatation", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer n, can you find a permutation from 1,.., n such that the minimum difference between consecutive integers is maximized?

## Method
For every increase in 2 in n, the maximum possible minimum difference in n increases by 1, with a pattern of n / 2 + 1, 1, n / 2 + 2, 2 etc. Hence, this is what is printed out once the pattern is identified