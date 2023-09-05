# Problem 1746A "Maxmina"
This is my current best solution to the problem 1746A "Maxmina", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of 0's and 1's and an integer k (> 1 and < n), is it possible to convert into an array of just 1 (with exactly 1 element), if you can perform the followng operation an arbitrary number of times:
Either pick any two consecutivie integers and replace them with their minimum or
pick k consecutive integers and replace them with their maximum

## Method
As long as a 1 exists in the array, it will always be possible. A good way to think about this is that if there are any sets of zeros around the one, they will be replaced with their minimums until the array is shrunk down to size k. Then, k can be applied to set the array to 1. Therefore, all we need to do to confirm if it is possible to turn the array into a single element of 1, is to check whether or not there is a 1 in the array.