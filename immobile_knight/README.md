# Problem 1739A "Immobile Knight"
This is my current best solution to the problem 1739A "Immobile Knight", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given chessboard size (with a row size and column size), determine the square at which a knight is isolated (cannot move). If this does not exist, then print out any square.

## Method
This is essentially case-splitting, for cases less than or equal to a 3x3 chessboard, as the idea is to put the knight, where it can only move one square in any direction. For boards of size 1 and 2, this is anywhere, so we care aboue 2x3, 3x2 and 3x3 boards. For 2x3, the 1,2 spot works, for 3x2 the 2,1 spot works, and for 3x3 2,2 works. For all other boards, we just print out the row and column size themselves, as there exist no isolated squares.