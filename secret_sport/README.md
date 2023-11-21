# Problem 1894A "Secret Sport"
This is my current best solution to the problem 1894A "Secret Sport", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given a sequence of plays made by two players A and B in string form, where the winner of X plays wins a set and the winner of Y sets is the winner of the game. You do not know X and Y. Try and determine the winner from the string. It is guarentted that a valid game in which one player wins occurred.

## Method
As i is guarentted that a valid game in which one player wins occurred, the letter at the last index of the string will be the winner, as the game ended with them.