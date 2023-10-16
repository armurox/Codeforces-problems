# Problem 1728A "Colored Balls Revisited"
This is my current best solution to the problem 1728A "Colored Balls Revisited", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers, and an operation where a pair of indices are picked, and the pair of elements are reduced by 1, determine the index of a possible leftover element.

## Method
I chose to always select the index of the maximum element of the array (the first, if there are multiple), as that will always remain. For all pairs, greedily pick all others, until you're left with either just the max element, or a number and the max element, in which case, the max element will be left once that number is set to 0, as it is by definition greater than the number (Note: We can always make it not equal to, as if there are multiple max numbers, we just make them part of our reduction in the early phase, so if they end up paired with the current max number, they will be less than it).