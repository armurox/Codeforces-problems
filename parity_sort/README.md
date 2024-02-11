# Problem 1851B "Parity Sort"
This is my current best solution to the problem 1851B "Parity Sort", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array $a$ of integers, determine if it is possible to sort them in non-descending order, where a sort operation counts as picking any two indices, and being able to swap the elements only if they have the same parity.

## Method
Essentially, what you want to check is if, in the sorted array, the parity of the number at that index matches up with the parity of the number in the provided array. To check this, create a copy of the array, and then sort that. Loop through both arrays, comparing the parity of the elements at the same index. If at any point the parity does not match up, you know that it is not possible to sort the array, otherwise it is.