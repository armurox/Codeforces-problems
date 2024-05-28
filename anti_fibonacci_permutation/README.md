# Problem 1644B "Anti-Fibonacci Permutation"
This is my current best solution to the problem 1644B "Anti-Fibonacci Permutation", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer $n$, generate $n$ permutations such that they are all anti-fibonacci (i.e. $\forall i$ s.t. $3 \leq i \leq n$, $p_{i - 2} + p_{i - 1} \neq p_i$).

## Method
An easy case is a purely descending permutation. Then, simply rotate the number $1$ around the array, as the descending array means that any pair will not add up to the next pair, even if you move the one, as the number before the one will be greater than the one ahead, so adding one to it will never violate the anti-fibonacci constraint.