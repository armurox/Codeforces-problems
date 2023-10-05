# Problem 1879B "Chips on the Board"
This is my current best solution to the problem 1879B "Chips On The Board", which is a 900 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an n x n grid and two integer arrays a and b, both of size n, find the minimum cost of filling up the board with chips, where the following condition is satisfied: there exists at least 1 chip in the same row or column as any (i, j) cell. The cost of adding a chip to a cell (i, j) on the board is a_i + b_j.

## Method
It is useful to think of a and b as the cost of rows and column respectively, coinciding at individual cells. Then, looping through a and b, one must find the minimumn possible sum, where either every row must be used, or every column. I chose to minimize the sum using a greedy approach. Essentially, I found the minimum values of a and b, and then chose to find the minimum of the sum of that value with every element of the opposite array (producing two distinct sum of min(a) + (every element of b) and min(b) + (every element of a)). This is essentially summing up all the values of an array, and then adding the minumum value times n to it, and doing the same with the opposite array, and finding the minimum.