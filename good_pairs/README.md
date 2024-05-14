# Problem 1656A "Good Pairs"
This is my current best solution to the problem 1656A "Good Pairs", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers of size $n$, find two indices $i$ and $j$ such that $$|a_i - a_j| = |a_i - a_k| + |a_j - a_k|$$ $\forall k$ s.t. $1 \leq k \leq n$.

## Method
The indices are simply the locations of the maximum value and the minimum value. All numbers between, and including them will satsify the constraint due to the fact that the absolute value will make it cancel out, i.e. $|a_i - a_k| + |a_j - a_k| = a_i - (- a_k) + (-a_k) + a_j = |a_i - a_j|$.