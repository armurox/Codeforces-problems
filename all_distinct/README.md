# Problem 1692B "All Distinct"
This is my current best solution to the problem 1692B "All Distinct", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given an integer array n, and are told to convert it into all distinct elements, using only removal of pairs at a time. Determine the length of the new array.

## Method
Convert the array into a set, so that all the elements are unique. If the difference between the length of the origianl array nad the ste is odd, then an extra element must be deleted, and you should print the length of the set minus one, otherwise return the length of the set.