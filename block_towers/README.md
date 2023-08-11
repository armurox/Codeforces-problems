# Problem 1768A "Greatest Convex"
This is my current best solution to the problem 1767B "Block Towers", which is an 800 rated problem. My current solution is still under development, and has passed test 1, but not test 2 as of yet.

## Problem statement
Given an array of integers, how large can you make the first element if you can subtract 1 from any element greater than it in the array and add that 1 to the first element.

## Method
Essentially, running through the array, the largest any element greater than the first element can make it is the difference between them divided by 2 (+ 1 for an odd difference). Updating the first element as you run through the array in this way createsthe allows one to obtain the maximum first element possible