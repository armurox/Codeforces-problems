# Problem 1895B "Points and Minimum Distance"
This is my current best solution to the problem 1895B "Points and Minimum Distance", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of 2n integers, determine the arrangement of integers into pairs that represent points such that the path created by passing through adjacent pairs is minimized (Note: The distance between two points is measured as the Manhattan distance |x - x_1| + |y - y_1|.)

## Method
Sorting the array is the easiest way to deal with this problem. Once sorted, the minimum distance is the sum of the difference of the array (sorted in descending order), skipping the difference at the index n - 1 (as the array is zero indexed). Then, everything in the left half, starting from the first element can be the x point values and everything in the right half starting from the last element can be the y point values. This is a greedy approach, as we are minimizing the difference between neighboring x's and y's in this way.