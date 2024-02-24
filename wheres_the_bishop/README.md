# Problem 1692C "Where's the Bishop?"
This is my current best solution to the problem 1692C "Where's the Bishop", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given the set of squares on a chess board that a bishop attacks' represented by #'s, determine the postion of the bishop, if it is guaranteed not to be on the edges.

## Method
Loop through the provided character, counting the number of hashes and how close they are to each other in each row. When you find hashes that are one space away from each other, then the bishop location must be in the row below, so return the index of the hash you find at that location.