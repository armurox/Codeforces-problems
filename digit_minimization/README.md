# Problem 1684A "Digit Minimization"
This is my current best solution to the problem 1684A "Digit Minimization", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer $n$, determine the minimum possible number that can be obtained by Alice at the end, if on her turn in a two player game (where she starts), she swaps any two digits of the integers, and then Bob removes the last integer.

## Method
If the number of digits in $n$ is $2$, then Alice is forced to use the leftmost digit. However, for any values larger than that, Alice can use the minimum value, by always keeping it one away from the end with her swaps.