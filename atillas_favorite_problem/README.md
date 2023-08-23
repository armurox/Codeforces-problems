# Problem 1760B "Atilla's Favorite Problem"

This is my current best solution to the problem 1760B "Atilla's Favorite Problem", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a string, what is the maximum number of letters needed from the alphabet to produce that string (note, letters can only be produced in order from the first letter i.e. to produce "hello", you would need all the letters from a-o).

## Method
We just need to find the maximum letter in the string, and as it is all lowercase, subtract 96 from it (the ascii range of lowercase letters is 97-122) and output that.