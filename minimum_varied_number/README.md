# Problem 1714C "Minimum Varied Number"
This is my current best solution to the problem 1714C "Minimum Varied Number", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given an integer s. Determine the minimum number that has distinct digits that sum up to s.

## Method
Using a greedy approach, let us create an array of digits that will satisfy these constraints. We can start at 9, then decrease by 1 each time, going 987...., storing the sum as we go along. If we exceed the sum, then subtract the most recent added digit from the sum, and then add the difference between s and the current sum. Then, we reverse the array and print.