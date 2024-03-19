# Problem 1941A "Rudolf And The Ticket"
This is my current best solution to the problem Problem 1941A "Rudolf And The Ticket", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integer arrays $n$ and $m$, and an integer $k$, determine all the ways that the integers of $m$ and $n$ can be combined (only) with each other in pairs, such that their sum does not exceed $k$

## Method
Loop through $n$ (fixed) and $m$, adding 1 to a counter each time the sum of that index of $n$ and $m$ is less than or equal to k.