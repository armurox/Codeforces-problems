# Problem 1916A "2023"
This is my current best solution to the problem 1916A "2023", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers, b that was created by removed integers from an array a, determine if it was possible for a to be an integers such that the product of all its elements were 2023. If so, output what the missing integers to go from b to a are.

## Method
An easy way to solve this problem is to check if the product of all the elements of b is divisible by 2023. If it is, then one merely has to multiple by 2023 / product and then keep multiplying by 1 to create a possible a. If not, then no possible a exists that can be mutliplied by b's product to produce 2023.