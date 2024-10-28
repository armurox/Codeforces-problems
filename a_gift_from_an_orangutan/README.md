# Problem 2030A "A Gift From An Orangutan"
This is my current best solution to the problem 2030A "A Gift From An Orangutan", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array $a$, find the maximum score of it, which can be found by constructing two other arrays $b$ and $c$, where every element of $b$ is the minimum value of a's element from the first element upto the current index being considered, while $c$ is the maximum. $a$ can be shuffled in any way before constructing $b$ and $c$.

## Method
The maximum score will be obtain when the first two elements are the maximum and minimum of $a$. This will make the first element of $b$ and $c$ be either max or min, followed by $c$ always having the max and $b$ the min. This then makes the final maximum score: $$(n - 1) \cdot max(a) \cdot min(a)$$ 
