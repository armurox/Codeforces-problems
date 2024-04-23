# Problem 1942A "Farmer John's Challenge"
This is my current best solution to the problem 1942A "Farmer John's Challenge", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integers $n$ and $k$, generate an array where exactly $k$ cyclic shifts of the exist in non decreasing order, otherwise indicate that it is not possible.

## Method
There are three main cases two consider. First, if $k$ is $1$, then we can simply print an array in increasing order. Otherwise, if $k$ is $n$, then a valid array is one with all the integers equal. Any other combination of the two integers is invalid, due to the fact that, no matter what, if there is a change anywhere upwards, then any cyclic shift will make the array unsorted, which leads to all elements needing to be equal, which is the second case above.