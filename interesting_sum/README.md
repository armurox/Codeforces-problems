# Problem 1720B "Interesting Sum"
This is my current best solution to the problem 1720B "Interesting Sum", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer array, identify the maximum possible beauty of the array, where beauty is defined as the sum of the difference of the maximum and minimum number of a proper subsugment of the array and the difference of the maximum and minimum number of the original array with the proper subsegment removed.

## Method
The maximum beauty is found by removing a subsegment containing the maximum and minimum elements in the proper subsegment (or vice-verse), and then using the remaining array for the rest up the rest. Whatever the sequence, the sum would be the max - min + the second_max - second_min of the array.