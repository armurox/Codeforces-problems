# Problem 1923A "Moving Chips"
This is my current best solution to the problem 1923A "Moving Chips", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a binary array, determine the minimum number of moves it takes to make all the ones contiguous. A move counts as picking a $1$ cells and moving the one from the cell to the closest $0$ cell.

## Method
The number of moves are simply the number of zeros in between the ones. Loop through the array, counting these, store them in an array of the zeros in between ones, ad return the sum at the end.