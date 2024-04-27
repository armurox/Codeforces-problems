# Problem 1669C "Odd / Even Increments"
This is my current best solution to the problem 1669C "Odd / Even Increments", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers, detemrine if it is possible to make all the integers have the same parity. The following two operations are allowed any number of times:
- Pick all the odd indices (the array is treated as 1-indexed), and increment all of them by $1!.
- Equivalently for even indices.

## Method
Loop through the odd indices and then the even. If any integer in either of those sequences does not have the same parity as all the others in that sequence, it is not possible to make the array satisfy the above condition, as every increment by $1$ will flip that element's parity relative to the others in that sequence.