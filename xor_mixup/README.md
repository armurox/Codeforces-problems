# Problem 11698A "XOR Mix-Up"
This is my current best solution to the problem 1716B "Permutation Chain", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers of size n, and being told that it is produced from having n - 1 integers, and an integer x which is the bitwise xor of the n - 1 integers, find x.

## Method
Pick any of the integers and it will be x, since by the nature of xor, if a number was produced from the bitwise xor of all the others, putting it in the bitwise xor makes the total 0, so any number can be pulled out and generated from the others, as the bitwise xoro of 0 and a number, is the number itself.