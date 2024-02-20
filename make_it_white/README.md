# Problem 1927A "Make It White"
This is my current best solution to the problem 1927A "Make It White", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a string of "W"'s and "B"'s only, determine the size of the minimum consecutive segment which you can convert to all "W"'s to get an all "W"'s string.

## Method
Loop through the array, accoutning the first and last index of B, and subtract the difference between them (more precisely, for 0-indexing, subtract last - (first - 1)) to get the length of the minimum required segment.