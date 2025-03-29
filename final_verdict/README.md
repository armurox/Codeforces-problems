# Problem 2078A "Final Verdict"
This is my current best solution to the problem 2078A "Final Verdict", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given two integers $n$ and $x$. Determine if it is possible to convert a given array of integers of size $n$ by dividing it into equal length subsequences repeatedly, and replacing each subsequence with its average.

## Method
The condition above is essentially a convoluted way of doing a simple mean. Doing a simple mean on subsequences and summing those up repeatedly until you have one value is the same as doing repeated means on subsequences until you have only one value remaining. Then, the problem boils down to computing the mean of the array and checking if it is equal to $x$.
