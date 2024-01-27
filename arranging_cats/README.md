# Problem 1921B "Arranging Cats"
This is my current best solution to the problem 1921B "Arranging Cats", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a pair of binary strings $s$ and $f$, determine the minimum number of moves required to convert $s$ into $f$ if a move counts as:

1. A conversion of an $s_i$ $0$ to $1$.
2. A conversion of an $s_i$ from $1$ to $0$.
3. The movement of $1$ to a $0$ spot, with $1$ being located at an $s_i$ and the $0$ being located at an $s_j$.

## Method
Count the number of elements to be removed and the number of elements to be added separately. Then, whichever one is greater will be the minimum number of moves (if they are equal, pick either). This works due to the fact that, say we have number to remove greater than number to add. Then, some of the removal elements will be used in the number to add case. It still counts as 1 move, due to option $3.$ above counting as a move. The remaining is just the number to remove, with total adding up to the number of elements to remove. Same for the inverse case.