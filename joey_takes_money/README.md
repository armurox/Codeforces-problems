# Problem 1731A "Joey Takes Money"
This is my current best solution to the problem 1731A "Joey Takes Money", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of n integers, find the maximum possible array sum that can be obtained, if the following operation can be performed on the array an arbitrary number of times:
Choose two distinct elements of the array (a_i, a_j), and find two elements x, y such that x * y = a_i * a_j, replacing a_i with x and a_j with y.

## Method
So, the operation is essentially trying to find the maximum possible sum by repeatedly selecting two elements of the array, finding the product of those two elements and then (using a greedy approach, essentially), picking the largest possible sum that those two elements can produce. This largets possible sum will always be a_i * a_j = first_factor and 1 = second_factor, as that sum will always be 1 + a_i * a_j. So, the idea is to do this repeatedly. Essentially, this is equivalent to finding the product of all the elements, to produce 1 maximal element + (n - 1) one. Therefore, the max sum = product(array) + n - 1.