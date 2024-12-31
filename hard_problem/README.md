# Problem 2044C "Hard Problem"
This is my current best solution to the problem 2044C "Hard Problem", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given $4$ integer $m, a, b, c$, determine the maximum number of $2$-rows of size $m$ that can be filled if the first $a$ items only sit in the first row and $b$ in the second and $c$ in either.

## Method
First fill up the first and second rows with $a$ and $b$ respectively. If not filled yet, the, starting with the smaller row, first fill it up with $c$, and if any $c$ is left over, fill up the bigger row also. Order does not matter if both rows are equal in size already.
