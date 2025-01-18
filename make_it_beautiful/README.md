# Problem 1783A "Make it Beautiful"
This is my current best solution to the problem 1783A "Make it beautiful", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers, make it beautiful, if possible, where beautiful is any array which does not have an element which is equal to the sum of its previous elements.

## Method
If every element of the array is the same, it is trivially not possible. For all other cases, sort the array in reverse order, and then simply replace the second element with the last (to avoid the special case when the first two elements are the same when doing this sorting).
