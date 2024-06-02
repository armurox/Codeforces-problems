# Problem 1975B "378QAQ and Mocha's Array"
This is my current best solution (after looking at the editorial) to the problem 1975B "378QAQ and Mocha's array", which is a 1000 rated problem.

## Problem statement
Yo are given an integer array $a$. Determine if there exist two integers $i$ and $j$, such that $\forall k \in \math_bb{Z}$ such that $1 \leq k \leq n$, %a_k$ is divisible by either $a_i$ or $a_j$.

## Method
Remove duplicates and sort the array in ascending order. (If using python, the easiest way to do this would be convert to a set, then a sorted list). Then, make $a_i$ the first element, and loop through the array until you find the first element not divisible by $a_i$. That becomes $a_j$. After that, if any element is not divisible by either of these two, the array does not satisfy the above conditions. This is because if you make this new element $a_i$ or $a_j$, then the previous one is no longer divisible by either, due to the fact that we have sorted the array. 