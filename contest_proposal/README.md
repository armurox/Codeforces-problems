# Problem 1972A "Contest Proposal"
This is my current best solution to the problem 1972A "Contest Proposal", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two arrays $a$ and $b$, determine the minimum number of moves required such that $\forall i \implies a_i \leq b_i$. One move counts as removing the last element of $a$ and adding an element $w$ anywhere you like, and sorting the array into non_decreasing order.

## Method
Loop through $a$, and check if it is less than or equal to $b_i + $ number of $w$ added so far. You do not need to go backwards, as you have the guarantee that the array is sorted in non-decreasing order. Do this until the condition holds, and keep incrementing number of $w$ everytime you have to move one along. Then, print out the number of $w$ at the end.