# Problem 2075A "To Zero"
This is my current best solution to the problem 2075A "To Zero", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integers $n$ and $k$, determine the minimum number of operations to make $n$ zero, where an operation counts as a substraction of $n$ by $1 \leq x \leq k$, where the parity of $n$ for any operation must match the parity of $x$.

## Method
As odd numbers subtracted from odd is odd: $$Let a = 2 \cdot k - 1 and b = 2 \cdot j - 1 \imples a - b = 2 \cdot (k + j) - 2 \imples 2 \cdot (k + j - 1)$$, and even number subtracted from even stay even, we can split our problem into 3 main cases. First, if $n \leq k$, then the minimum number of operations to make $n$ zero is at most $1$. Second, if $n$ is greater than $k$ and is even. then the number of operation is simply the sum of $n$ divided by $k$ (floored) plus the mod of $n$ with $k$. If $n$ is odd, it is exactly tge previous, plus one to subtract of the extra odd number subtraction required to end up in the same state as the previous.