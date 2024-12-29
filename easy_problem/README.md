# Problem 2044A "Easy Problem"
This is my current best solution to the problem 2044A "Easy Problem", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer $n$, determine the number of ordered pairs $(a, b)$ that can be obtained such that $a = n - b$;

## Method
In other words, it must be the case that $a + b = n$. Since the pairs are ordered, you are essentially counting all combinations from $(n - 1, 1)$ to $(1, n - 1)$, which is precisely $n - 1$ of them, since decrementing $a$ involved incrementing $b$ to maintain the condition.