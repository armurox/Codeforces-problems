# Problem 1660A "Vasya and Coins"
This is my current best solution to the problem 1660A "Vasya and Cash", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integers $a$ and $b$, where $a$ represents the number of coins of value $1$ a persion has, and $b$, the number of coins of value $2$, determine the minimum integer that cannot be obtained by some combination of the coins.

## Method
If $a$ is $0$, then that minimum integer is simply $1$, as any $2$ simply skips it. Otherwise, the value is $a + 2b + 1$, due to the fact that as long as one $1$ exists, as $\forall k \in \mathbb{Z}$ s.t. $k < 2b \implies $ $2n ?(+ 1) = k$ for $n \leq b$.