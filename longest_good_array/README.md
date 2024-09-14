# Problem 2008C "Longest Good Array"
This is my current best solution to the problem 2008C "Longest Good Array", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given two integers $l$ and $r$. Find the maximum number of integers between $l$ and $r$ inclusive that satisfy the condition that:
a. They are all increasing.
b. Their rate of increase is increasing (the different between adjacent pairs is increasing).

## Method
Loop through, starting from $l$ going through until you are greater than $r$, with incrementing the amount of the increase by $1$ each time, starting at $1$.