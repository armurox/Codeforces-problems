# Problem 1977A "Little Nikita"
This is my current best solution to the problem 1977A "Little Nikita", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integers $n$ and $m$, determine if it is possible to get $m$ after exactly $n$ moves, where each move involves adding or subtracting $1$.

## Method
If $n \geq m$, then we must ensure that $(n - m) \mod 2$ is $0$. In this case, it is possible. In all other cases it is not.