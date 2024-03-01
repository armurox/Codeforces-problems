# Problem 1690A "Print A Pedestal (Codeforces Logo?)"
This is my current best solution to the problem 1690A "Print A Pedestal (Codeforces Logo?)", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer $n$, representing $n$ blocks, construct three pedestals using all the blocks such that $h1 < h2 > h3$ and $h1 + h2 + h3 = n$ and $h2 > h1$. Additionally $h2$ must be kept minimum under these constraints. (Note: $h_i$ is the height of the $i$-th block).

## Method
As we have three blocks, the easiest way to deal with this is to first divide n by 3. Then, the remainder must be added to $h2$, as $h2$ must be at least $2$ blocks greater than its neighbors as that allows it to remain maximum after shuffling. Then, if $h2$ is still less than 2 blocks greater, move one block from $h3$ to $h2$, otherwise move the block to $h1$.