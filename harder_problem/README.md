# Problem 2044D "Harder Problem"
This is my current best solution to the problem 2044D "Harder Problem", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer $n$ and an array $a$ of size $n$, construct an array $b$, where one of the modes of $b$ is $a_i$ at every point $i$.

## Method
The easiest way to constuct $b$, is to uniquely add on each element of $a_i$ once when you come across it (and then add it to a used set). Then, for all future occurrences of $a_i$, simply add a random number to $b$ which is between $1$ and $n$, that does not already exist in the set.
