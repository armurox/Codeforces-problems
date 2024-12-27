# Problem 2040A "Game Of Division"
This is my current best solution to the problem 2040A "Game Of Division", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integers $n$ and $k$ and an array odf integer $a$ of size $n$, determine if it is possible to pick out an integer such that no other integer in the array has an absolute difference with it that is evenly divisible by $k$.

## Method
This can be done via brute force, as the range of $n$ is $1-100$. Therefore, simply create another array copy of the original, loop through the original, checking if you find any integer that does satsify the conditions. If not, the position you are at satisifies the conditions.