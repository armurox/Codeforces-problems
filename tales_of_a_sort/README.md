# Problem 1856A "Tales Of A Sort"

This is my current best solution to the problem 1856A "Tales Of A Sort", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of positive integers, how many operations does it take to sort it a non-descending, with an operation being defined as for all i in a_i, set a_i = max(0, a_i - 1).

## Method
The element that will decide the number of operations is the largest element which is greater than the next. Then, we merely search for that element, and print it out.