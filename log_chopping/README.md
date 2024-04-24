# Problem 1672A "Log Chopping"
This is my current best solution to the problem 1672A "Log Chopping", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an an array of integers, representing logs to be chopped, and two players, with the starting player indicated, determine who would win a game where, in a single turn, a player can pick a log an chop it into two pieces (i.e., say the log has length $x$, it gets split into twon integers $y$ and $z$ where $y + z = x$ and $y, z > 0$).

## Method
Determine the total number of moves that are made if the logs are split optimally. This can be obtaned by summing over the array, with every element subtracted by 1. This is due to the fact that every log of length $n$, can be split into two parts $n - 1$ times. Then, if this final number is odd, player 1 wins, otherwise player two wins.