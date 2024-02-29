# Problem 1690B "Array Decrements"
This is my current best solution to the problem 1690B "Array Decrements", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two arrays $a$ and $b$ of non-negative integers, determine if it is possible to convert $a$ to $b$, where one operation involves subtracting all the elements of $a$ by $1$, with $0$ set as the minimum (i.e., once a number hits $0$, it will never decrease).

## Method
Loop through $a$, converting all the places where $b$ is $0$ to $0$, and then subtract the difference of any $a_i - b_i$ from every element of $a$. If the two arrays are not equal, it was not possible to make them equal.