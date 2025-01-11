# Problem 2051A "Preparing For The Olympiad"
This is my current best solution to the problem 2051A "Preparing For The Olympiad", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two arrays $a$ and $b$ of size $n$, where $a_i$ represents number of problems solved by a person on day $i$, and $b_i$ number solved by another on the same day, and the fact that person $2$ will solve his problems on day $i + 1$ compared to person $1$ (except for the last day), compute the maximum difference in number of problems solved.

## Method
Loop through the arrays, and if $a_i$ is greater than $b_{i + 1}$ add their difference to your sum (which starts counting from $0$). Finally add on the final $a_n$.
