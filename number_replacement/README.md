# Problem 1744A "Number Replacement"
This is my current best solution to the problem 1744A "Number Replacement", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers and a string, determine if it is possible to convert the integers into a string if you can perfrom the following operation any number of times: Select an integer an any letter. Replace all instance of that integer with that letter.

## Method
I chose to store every unique integer in the keys of a hash_map, and the indices where it shows up as the values in a vector. Then, I indexed into the string at each index provided in the hash_map and made sure that all the letters at those indices were equal. If they were not, then the string could not be produced from the integer array.