# Problem 1688A "Cirrno's Perfect Bitmasks Classrom"
This is my current best solution to the problem 1688A "Cirrno's Perfect Bitmasks Classrom"", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer $x$, find the minimum integer $y$ that satisfies these two constraints: $x$ and $y > 0$, $x$ XOR $y > 0$.

## Method
The minimum requirement is to have a $1$ in the bit representation of $y$ in the rightmost place where a $1$ appears in $x$ to satisfy the first requirement. Then, at least one other $1$ must be present where either $y$ has a $0$ or $x$ has a $0$. If $x$ has more than one $1$, then our $y$ construction is complete, otherwise we add a $1$ to the rightmost possible position in $y$, after adding the previous $1$. Then, if needed, depending on the language an the manner in which this has been implemented, convert the bit representating of $y$ into the integer and print it.