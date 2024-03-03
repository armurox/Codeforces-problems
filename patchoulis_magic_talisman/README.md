# Problem 1688B "Patchouli's Magical Talisman"
This is my current best solution to the problem 1688B "Patchouli's Magical Talisman", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer array $a$, determine the minimum number of moves to make all the elements even, where a move is either combining two integers by adding them together, or dividing one integer by 2.

## Method
Count the number of even numbers in the array. If an odd integer exists in the array, then the minimum number of moves is simple the number of evens, since we can add the odd number to each of the evens. If an odd number is not present, simply identify the even number with the minimum number of trailing zeros in it bit representation, which becomes the number of moves to make it odd, and then add the number of evens - 1 to it.