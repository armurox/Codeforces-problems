# Problem 1742B "Funny Permutation"
This is my current best solution to the problem 1742B "Funny Permutation", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer n, determine if it is possible to produce a permutation such that a: every element has a neighbor that is 1 away from it and b: no element is in its index location (i.e., the second array index does not have the number 2 in it). If it is possible, print out this element.

## Method
The idea behind this is to just shift every element by 2, and swap the firsgt two elements. This prevents every element from being in its initial location, and allows the first two elements to be one away from each other. This method produces the appropriate array for all n except for 3, hence, I claim that only in the case of 3 can a "funny" permutation not be produced.