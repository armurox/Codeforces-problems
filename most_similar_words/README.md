# Problem 1676C "Most Similar Words"
This is my current best solution to the problem 1676C "Most Similar Words", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of words, determine the words that are tge most similar (i.e., the minimum difference between them, where the difference is the sum of the distances between the letters without wrapping around 26).

## Method
This can be solved by brute force, as the problem space is relatively small. Loop through each word, and compare it to all the words ahead of it, computing their difference. If the difference is less than the currently computed minimum, that becomes the new minimum. 