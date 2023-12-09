# Problem 1907A "Rook"
This is my current best solution to the problem 1907A "Rook", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given the position of a rook on a chessboard, print out all the possible board positions the rook can move to in a single move.

## Method
Juts loop through all the columns with the row fixed (i.e. all letters from a to h, excluding the rook's letter) and then the same with the rows (with column fixed, i.e. loop through all the numbers).