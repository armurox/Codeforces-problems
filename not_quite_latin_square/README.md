# Problem 1915B "Not A Latin Square"
This is my current best solution to the problem 1716B "Not A Latin Square", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a 2x2 matrix of characters of either A, B, C or ?. Determine what letter the signlem missing ? should represent, if every row and column should have exactly 1 A, B or C.

## Method
Loop through the rows, and check in each row if a, b and c are present by storing each in an appropriately named integer variable. If any of them are 0, then that is the missing one.