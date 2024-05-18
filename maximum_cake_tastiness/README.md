# Problem 1654A "Maximum Cake Tastiness"
This is my current best solution to the problem 1654A "Maximum Cake Tastiness", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array $a$ of integers, determine the maximum "tastiness" of the array, where the tastiness of the array is the maximum value of the sum of two adjacenet elements in the array. You are allowed to reverse any subsegment of the array at most one time.

## Method
The allowed operation essentially allows us to bring any two elements of our choice close together, so the maximum tastiness is simply the sum of the maximum element and the second maximum element.