# Problem 1747A "Two Groups"
This is my current best solution to the problem 1747A "Two Groups", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers, can you split up the array into two groups (where any group can be 0), such that abs(sum(group_1)) - abs(sum(group_2)) is maximized?

## Method
The idea is to separate positive and negative integers (0's will not affect the sum, no matter which group they are put in). Then, we return the absolute value of the different between the absolute sums of the two groups to get the max value. Note: The reason for the split is that even if negative numbers are put in the same group as the positive integers they will affect them the same way and vice versa. Hence, the output sum would be the same, so it is easier to think of the negative and positive integers in two separate groups.