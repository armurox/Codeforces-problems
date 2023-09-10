# Problem 1742B "Increasing"
This is my current best solution to the problem 1742B "Increasing", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers, determine if it is possible to sort them into strictly increasing order.

## Method
The necessary and sufficient condition for this case is that there need to be no duplicates. The way I chose to check this was to store each integer in a set (so there would be no duplicates) and a vector (list in python), and then determine if the number of each element of the set in the vector was greater than 1. If it was greater than 1, then it is not possible to sort the array, otherwise it is.