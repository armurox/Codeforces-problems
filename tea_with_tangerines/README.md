# Problem 1735B "Tea with Tangerines"
This is my current best solution to the problem 1735B "Tea with Tangerines", which is a 900 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given n integers, make the array such that for any pair of integers x, y that 2x > y. The allowed operation (that can be repeated an arbitrary number of times) is to pick any integer, and split it into two parts l and m such that l + m = original integer. Find the minimum number of moves to make the array this way.

## Method
The idea is to divide each integer into parts of size (2x - 1) until the original integer is less than 2x. This can be computed by dividing the original integer by (2x - 1) and then checking if the result of subtracting the integer by this number multipled by 2x - 1 gives us 0, and subtract the number of moves by 1. If not, there is a leftover amount that needed to be added for a move.