# Problem 1695A "Subrectangle Guess"
This is my current best solution to the problem 1695A "Subrectangle Guess", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Find the minimum possible area of a subrectangle that must be given such that any subrectangle of a $n \times m$ matrix contains the maximum value.

## Method
Find the index of the maximum value first, then find the minimum height required (which is the maximum of the row index itself or $n - i_r$, where i is the row index) and then similarly find the minimum width required. Multiply the two together to get the minimum possible area.