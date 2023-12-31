# Problem 1909A "Distinct Buttons"
This is my current best solution to the problem 1909A "Distinct Buttons", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given a sequence of integers $x_i, y_i$, representing a set of special points in the plane. In any sequence of moves, at most you can move in three distinct directions. Determine if it is possible to reach all the points in the plane.

## Method
This essentially boils down to checking the number of quadrants the points are in. I chose to do this by keeping track of if x and y are positive or negative or not, and made individual elements of a 4 elements array equal to 1 based on each of those answers. Summing up the total sum of the array and determine if it was 4 or not allowed me to determine if it was possible to hit all 4 points of the array or not.