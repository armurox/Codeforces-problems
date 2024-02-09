# Problem 1857A "Array Coloring"
This is my current best solution to the problem 1857A "Array Coloring", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers, determine if it is possible to split it into two distinct integer arrays such that the sums of each individual array have the same parity (both odd, or both even).

## Method
Pick a random combination, such as the first element of the array for the first set, and all the others for the second. If the parity is the same, you have found your array. If it is not, it will never be possible to find one, as this means one is odd and the other even. You can't remove and odd from the second and add it to the first, as that will reverse both parities. Similarly for replacing the first with another number.