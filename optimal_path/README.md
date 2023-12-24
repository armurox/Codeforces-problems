# Problem 1700A "Optimal Path"
This is my current best solution to the problem 1700A "Optimal Path", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given 2 integers n and m, which represent a 2-dimensional table, with n rows and m columns, where each cell goes from 1, all the way through to n * m, increasing by 1 moving along the rows (and wrapping around to the columns), determine the minimum cost path of moving from the first cell to the last, where the cost is the sum of all the elements in the cells. Any one move in a path is a move to an adjacent row cell or column cell.

## Method
The minimum path is essentially to move across the first row to the last column, and then down the last column (as moving along the column first and then the path will result in a greater path cost as each cell element will increment by m first). This then results in first a row sum of (m * m + 1) / 2, and then a sum of ((n * (n + 1) / 2) - 1) * m, which added together gives the path cost.