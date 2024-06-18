# Problem 1979C "Earning on Bets"
This is my current best solution to the problem 1979C "Earning on bets", which is a 1200 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given an array of numbers $k$, which represent a set of multiples of returns for rounds with coins that you place down. i.e., if you place down $s_i$ coins, your return would be $k_i \cdot s_i$. Determine if it is possible to distribute a set of coins such that your return will always be greater than the initial total coins you had.

## Method
Let your initial total number of coins be $S$. Then, it must be the case that: $$\sum_{i=-1}^{n} \frac{S}{k_i} < S$$. Now, we simply construct this set by creating $S$ to be $lcm(k)$, and let the number of coins per $k_i$ be $\frac{S}{k_i}$, and check if the condition is true. $lcm$ is just as valid as any other multiple of all the elements, as the condition will stay true regardless of mutliple.