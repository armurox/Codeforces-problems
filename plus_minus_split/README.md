# Problem 1919B "Plus-Minus Split"
This is my current best solution to the problem 1919B "Plus-Minus Split", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a string s, which is a sequence of $+$ and $-$, representing $1$ and $-1$ respectively, determine the minimum penatly which is the sum of the penalties of sub-strings that can be picked where a penatly of a substring is its absolute sum multiplied by its length.

## Method
This problem is relatively easy once you realize that splitting the string into substrings will either keep the penalty the same or increase it (due to the length multiplier), hence one merely has to compute the penalty sum as you loop through the array (and the length is one), and that will be the minimum penalty. 