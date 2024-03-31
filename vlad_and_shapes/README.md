# Problem 1926B "Vlad and Shapes"
This is my current best solution to the problem 1926B "Vlad and Shapes", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a 2D binary array, determine if the shapes drawn with one's is a triangle or a square.

## Method
Loop through each row in the array, and if the number of ones differ between rows (after the first row has ones, and the current row also has ones), it must be a triangle, else it is a square.