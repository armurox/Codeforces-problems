# Problem 1798A "Showstopper"
This is my current best solution to the problem 1798A "Showstopper", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given two arrays a and b. Determine if it is possible to get $a_n = max(a_1, a_2, ..., a_n)$ and $b_n = max(a_1, a_2, ..., a_n)$. An allowed move is when where you pick an index $i$ and swap $a_i, b_i$.

## Method
To determine if this is possible, we can take a greedy approach. Loop from $1$ through to $i$, checking if $a_i \leq b_n$ and $b_i \leq a_n$ or $a_i \leq a_n$ and $b_i \leq b_n$. If this doesn't hold at any point, then the result cannot be produced.