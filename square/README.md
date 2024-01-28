# Problem 1921A "Square"
This is my current best solution to the problem 1921A "Square", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given the coordinates of the 4 corners of a square on a coordinate, with the guarantee that all the sides of the square are parallel to either the x or y axis, determine the area of the square.

## Method
There can be at most two distinct numbers for each of the x and y coordinates. The area then becomes the product of the absolute difference between the two x coordinates and the two y coordinates.