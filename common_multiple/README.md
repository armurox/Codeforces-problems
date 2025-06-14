# Problem 2103A "Common Multiple"
This is my current best solution to the problem 2103A "Common Multiple", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Find the maximum size of a sub-array of an array $a$ of integers such that it is beautiful. A beautiful array is defined as one in which you can construct a second array of the same size, with **all integers distinct** such that the product of every pair of integers in the same position in both arrays is the same.

## Method
In other words, a set on integers with a common multiple, as long as every integer is distinct. i.e., we need find the length of the array of distinct integers. In python, simply read in the input and convert it into a set, and compute its length.
