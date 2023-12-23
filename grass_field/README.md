# Problem 1701A "Grass Field"
This is my current best solution to the problem 1701A "Grass Field", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a 2x2 binary array, where the number of ones in the same row and column can be made into 0 with one operation, determine the minimum number of operation required to make the array completely 0.

## Method
Count the nunber of ones in the array. If there are 4, the minimum number of operations required is 2 (1 to eliminate 3 of them, and 1 more to eliminate whatever was left in the corner). Otherwise, if there is at least one 1, then the number of operations comes out to 1. Finally, in the trivial case in which the binary array is already all zeros, no moves are required.
