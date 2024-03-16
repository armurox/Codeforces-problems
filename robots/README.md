# Problem 1716B "Robots"
This is my current best solution to the problem 1716B "Permutation Chain", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a 2D array, with robots in the array, determine if it is possible to move a robot to the upper left corner, without moving any robot out of the array. One move counts as moving all the robots one square orthogonally adjacent to their current position (in the same direction).

## Method
Loop through the array (row-wise) until you find your first robot, then loop through the array column-wise, in all columns before your current position. If a robot exists there, then it is not possible to move your robot to the first corner, otherwise it is. (Also, remember to account for the case when no robots are found).