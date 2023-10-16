# Problem 1725A "Accumultation Of Dominoes"
This is my current best solution to the problem 1725A "Accumulation Of Dominoes", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integers n and m, that represent the rows and columns of a grid, where every row start from 1 to M, then M + 1 to  2*M and so on, determine the number of tight dominoe pairs present, where a tight domino pair is defined as a pair of grid members touching and being separated by 1.

## Method
For all values where the column number is greater than 1, per row, the number of tight dominoes is (m - 1), hence the total number of tight dominoes is n * (m - 1). In the special case of m = 1, the rows can be treated as a single column, and the number of tight dominoes becomes (n - 1).