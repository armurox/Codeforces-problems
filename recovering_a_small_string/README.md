# Problem 1931A "Recovering a small string"
This is my current best solution to the problem 1931A "Recovering a small string", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer $n$, determine the lexicographically smallest string that has lowercase characters summing up to $n$, with $1$ being $a$ and $26$ being $z$. You also now that the string is of size $3$.

## Method
This problem can be solved greedily. If $n \leq 28$ then the string is $aa$ and then the ascii equivalent of $n - 2$, then for values $29 \leq n \leq 53$, you do $a$, $n - 27$, and similarly for the last one. At each stage, you try and use $a$'s, and wherever you are forced to use something lexographically greater, you keep it as small as possible (while accounting for the amount of integer you have alread used up by printing $a$'s, which is at most $2$).