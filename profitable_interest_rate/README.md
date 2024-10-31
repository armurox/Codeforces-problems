# Problem 2024A "Profitable Interest Rate"
This is my current best solution to the problem 2024A "Profitable Rate", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integers $a$ anc $b$ determine if it is possible to open a bank account, where the conditions are that $a$ must be greater than $b$ and every removal of $x$ for $a$ reduces $b$ by $2 \cdot x$. Print out how many $a$ will be left for the user to open the bank account at the end.

## Method
The numbers can be at most their difference apart from one another, due to the reduction by $1$ overall reducing the difference by $1$. In other words, the minimal condition is that $a > b - a$ must hold true. In that case, the answer is simply $a - (b - a)$ and if $a > b$ the answer is simply $b$. Otherwise the answer is $0$.

