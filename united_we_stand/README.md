# Problem 1859A "United We Stand"

This is my current best solution to the problem 1859A "United We Stand", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of length n, is it possible to produce two other arrays b and c from its elements such that both are non-empty, and non of the elements of c are divisible by any elements of b. Print b and c and their sizes if it is possilbe, otherwise print -1.

## Method
I chose to go about this by finding all the maximum elements of a. After all, none of the maximum elements will be divisors of any of the other elements once removed. If all array elements are equal, then it is not possible to produce b and c with the appropriate conditions satisfied. Otherwise, we can store all the max elements in c and the rest in b.