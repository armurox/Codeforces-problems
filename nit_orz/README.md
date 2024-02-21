# Problem 1696A "NIT Orz!"
This is my current best solution to the problem 1696A "NIT Orz!", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer z and an array of integers, determine the maximum possible value you can make in the array by doing the following operations some (possibly zero) number of times. Select and index $i$ of the array, then convert $a_i = a_i | z$ and simultaneously $z = a_i$ and $z$ where we are using bitwise or and and.
## Method
We can do at most one operation, as this will reduce z and at most increase any one of the numbers once (as more increases will not be possible, as the result will be a submask of the new one). Hence, we find the maximum of applying z once to each element of the array (vs not applying it at all).