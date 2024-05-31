# Problem 1638A "Reverse"
This is my current best solution to the problem 1638A "Reverse", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a permutation, identify a subsegment (at most once), that you can reverse to get the lexicographically smallest permutation.

## Method
Loop through the permutation, until you find the first place where a value does not match its index (using $1$-indexing). Then, find the index of the value, and reverse everything in between. This will work, because all prior indices will have the lexicographically smallest permutation, and your spot will make it smaller, once reversed.