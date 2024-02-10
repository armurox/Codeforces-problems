# Problem 1873D "1D Eraser"
This is my current best solution to the problem 1873D "1D Eraser", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of of white and black cells, and an integer k, which indicates a set of any k consectuive cells that can be converted to white, determine the minimum number of moves of size k that can be used in order to make all the cells in the array white.

## Method
Loop through the array (from the left), and if you come across a black cell, set it to white, increment the number of moves by 1, then skip k - 1 cells to the right. This works, as you can always assume that all the right cells are working with this method, so any large B set will always be encapsulated in your move set.