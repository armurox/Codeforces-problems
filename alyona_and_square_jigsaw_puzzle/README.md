# Problem 2047A "Alyona and a Square Jigsaw Puzzle"
This is my current best solution to the problem 2047A "Alyona and a Square Jigsaw Puzzle", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array $a$ of size $n$ where $a_i$ represents the number of blocks added to a grid being built up of layers of odd perfect squares, determine the number of days where a full square is built.

## Method
Construct a set of the odd square numbers, then loop through the array, checking if the sum at each element exists in the set.
