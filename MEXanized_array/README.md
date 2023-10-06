# Problem 1870A "MEXanized Array"
This is my current best solution to the problem 1870A "MEXanized array", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given 3 integers, n, k and x, find the (non-negative integer) array with the maximum possible sum that can be genereated of size n, where the minimum excluded element is k and every element is <= x. If no such array exists, print out -1.

## Method
To find the maximum possible sum, essentially, we first have all the elements from 0 - (k - 1) and then the rest will be equal to x. Then, the only cases where this is not possible is when k > x + 1 or when n is < k - 1.