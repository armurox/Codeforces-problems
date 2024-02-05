# Problem 1905A "Constructive Problems"
This is my current best solution to the problem 1905A "Constructive Problems", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given 2 integers a and b, repesenting an a x b matrix, where any cell automatically becoems coloured if any cells horizontally and verticallhy adjacent to it are colored. Determine the minimum number of cells to manually colour yourself in order for the whole matrix to become colored.

## Method
Essentially all the diagonals need to be coloured, and, more precisely, the number of squares equal to the largest of a and b needs to be colored (if both are equal, then either number works). Therefore, identifying the largest of a and b and printing it out will give the answer.