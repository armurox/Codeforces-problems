# Problem 1681B "Card Trick"
This is my current best solution to the problem 1681B "Card Trick", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer array $a$ and an integer array $b$, where $b_j$ tells you how many elements of $a$ to bring from the front to the back for each operation, determine the element at the front after all of the operations indicated in $b$ are completed.

## Method
Set an index $i$ to be $0$ initially. Then, update $i$ with $i + b_j \mod n$ consistently so that by the end it points to the correct index, then print out $a_i$.