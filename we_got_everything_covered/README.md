# Problem 1915A "We Got Everything Covered!"
This is my current best solution to the problem 1915A "We Got Everything Covered!", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integers n and k, where n represents the size of a set of substrings that need to appear, and k represent the number of lowercase letters of the alphabaet (starting in order from a) you have to use to construct those substrings, find the smallest string in which all those substrings are contained.

## Method
An easy string to construct is simply the letters of the alphabet of size k repeated n times. i.e., if n = 2 and k = 3, then you get abcabc. This contains everything in it, as each letter exists ahead and before each other letter.