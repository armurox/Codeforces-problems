# Problem 1660B "Vlad and Candies"
This is my current best solution to the problem 1660B "Vlad and Candies", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers, determine if it is possible to make all the integers $0$. One operation counts as picking the maximum integer (if there are many, any of them can be picked), and reducing its value by $1$. The same array element cannot be picked twice in a row.

## Method
There are a few cases to consider. First, uf we have a one element array, then if the integer is $1$, the case is possible, otherwise it is not. For arrays that are not single element, if the maximum and second maximum element have a difference greater than $1$, the above is not possible, as we will be forced to pick the maximum element at least twice, otherwise it is, as we can alternate between the two elements to approach any other element in the array, then alternate between those elements and so on.