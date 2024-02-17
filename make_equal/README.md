# Problem 1931B "Make Equal"
This is my current best solution to the problem 1716B "Permutation Chain", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers $a$, and an integer $n$, as well as a guarantee that the array's sum is divisible by $n$, determine if it is possible to make all the integers equal, where an operation is reducing the integer size of any index of $a$, and increasing the value of the integer at any greater index by exactly that amount.

## Method
First, computed the number that all the integers must be. As we know that the sum of the array is divisible by $n$, that dividisor is the result to use. After that, loop through the array, keeping an amount to add to each number, based on the difference between it and the required number. If that required amount ever hits 0, then it is not possible make all the integers equal, as the previous numbers had to satisfy the amount in that way, so anything that does not, would require altering the previous numbers, making them unequal.