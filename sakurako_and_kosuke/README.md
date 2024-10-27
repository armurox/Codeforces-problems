# Problem 2033A "Sakurako and Kosuke"
This is my current best solution to the problem 2033A "Sakurako and Kosuke", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given an integer $n$, which represents the number of games played by $S$ and $K$. $S$ starts, at $0$ and every move is $2 \cdot i - 1$, with $S$ moving in the negative direction and $K$ in the positive. The last move is played by the person who exceeds $n$ in either direction. Determine who plays the last move.

## Method
It boils down to if $n$ is odd, then $K$ plays the last move to exceed it, while $S$ does if $n$ is even.
