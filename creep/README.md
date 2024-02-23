# Problem 1694A "Creep"
This is my current best solution to the problem 1694A "Creeo", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integers $a$ and $b$ representing the number of $0$'s and $1$'s in a binary string respectively, find the binary string with the minimum possible creepiness associated with it. The creepiness of a binary string is defined as the maximum score of all its prefixes, where the score of a prefix is the difference between the number of $1$'s and $0$'s in it.

## Method
This problem can easily be solved in a greedy way. First, while both $a$ and $b$ are greater than $0$, alternate between zero and one. Then, print out the remaining. In this way, the score is kept as minimal as possible as your create the prefixes, until you are forced to creater a greater score (but it will still be minimal given the resources).