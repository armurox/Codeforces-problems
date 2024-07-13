# Problem 1992B "Angry Monk"
This is my current best solution to the problem 1992B "Angry Monk", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer array, determine the minimum number of moves required to combine all the elements into one, given $k$ pieces. The allows moves are:
a. Pick any element and break of a piece of length $1$ from it.
b. Pick any element and an element of length $1$, and combine them.

## Method
The easiest way to minimize the number of moves is to merge all the other pieces into the piece with the maximum size. Then,it is simply a matter of calculating the number of moves associated with this. We know that all the rest must be made into 1's and combined into it, so the combination move involves at the least $$\sum_{i=2}^{k}a_i$$. Then, actually splitting each one involves summing up $k - 1$ elements each $1$ less than its original, i.e. $$\sum_{i=2}^{k}a_i - (k - 1)$$, which gives the final answer as: $$2 \cdot \sum_{i=2}^{k}a_i - (k - 1)$$