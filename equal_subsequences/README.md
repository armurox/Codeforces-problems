# Problem 2118A "Equal Subsequences"
This is my current best solution to the problem 2118A "Equal Subsequences", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integers $n$ and $k$, construct a bitstring with the same number of subsequences of $101$ and $010$ with exactl $k$ $1$'s and of size $n$.

## Method
There is an extremely simple solution to this. Simply print out exactly $k$ one's and then print out $n - k$ zeros. Then there are exactly *zero* $101$'s *and* *zero* $010$'s.
