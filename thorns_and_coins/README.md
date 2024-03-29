# Problem 1932A "Thorns and Coins"
This is my current best solution to the problem 1932A "Thorns and Coins", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a string and an integer $n$, where the string represents $n$ cells which can contain nothing, thorns, or coins. You can move at most $2$ cells to the right at time. Determine the maximum number of coins you can collect (Note: You are not allowed to land on a thorn).
## Method
You can collect as many coins as you want until two thorns exist consecutively. In other words, loop through the string, counting all the coins before the first consecutive thorn sequence greater than 1.