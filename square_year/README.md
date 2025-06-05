# Problem 2114A "Square Year"
This is my current best solution to the problem 2114A "Square Year", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer $n$, determine if it is possible to represent it using two integers $a$ and $b$ in the format $(a + b) ^ 2$. If not, print $-1$.

## Method
Simply check if the input number is a perfect square, by computing the square root and checking it the result $mod 1$ is $0$. If it is, print out $0$ and the result, otherwise print out $-1$.
