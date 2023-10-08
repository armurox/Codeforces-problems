# Problem 1866A "Ambitious Kid"
This is my current best solution to the problem 1869A "Ambitious Kid", which is a 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers, where a single operation on the array involves picking an integer, and increasing or decreasing its value by 1, determine the minimum number of operations required to make the array product equal to 0.

## Method
Essentially, the minimum number of operations will be the minimum absolute value integer. So, setting every element of the array equal to its absolute value, find the minimum value.