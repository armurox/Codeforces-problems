# Problem 1702A "Round Down The Price"
This is my current best solution to the problem 1702A "Round down the price", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
In this problem, a round number is defined as a power of 10. Given an integer, determine the number that must be subtracted from it to give the nearest round number.

## Method
Essentially, one just has to compute the length of the integer in string form and subtract 1 from it to get the power of the round number (as defined in this problem). Then, the problem is simply a subtraction of that round number from the integer provided to obtain the answer. 