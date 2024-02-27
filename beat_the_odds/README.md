# Problem 1691A "Beat The Odds"
This is my current best solution to the problem 1691A "Beat The Odds", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers, determine the minimum number of elements to remove such that the sum of every consecutive pair of integers is even.

## Method
Essentially, the parity of every pair must be even. Count the number of odds and evens, and remove the minimum of the two from the array.