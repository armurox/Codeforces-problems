# Problem 1749A "Cowardly rooks"
This is my current best solution to the problem 1749A "Cowardly Rooks", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an n x n chessboard (where n is specified) and m rooks, it is possible for **exactly** one rook to be moved such that every rook ends up in a different row and column?

## Method
There are three main cases to consider. The first is when m > n (i.e. there are more rooks than distinct rows or columns). Then, it is obviously not possible for a rook to be moved so that the condition above is satisfied. Secondly, if m == n and all the rooks are already in distinct locations, then any move will cause a pair of rooks to match rows or columns. Thirdly, if there number of rooks in the same row or column ever exceeds 1, then the above will never be possible. If none of these conditions are met, then it is possible to move a rook such that we satisfy the problem condition. I choose to store the indices of the rook already read in in a map with the rows as keys and columns as values. This made it easier to compare if a new rook shared a row and column with a previous rook (as the map distinguished between rows and columns by keys and values).