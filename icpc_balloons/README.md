# Problem 1703B "ICPC Balloons"
This is my current best solution to the problem 1703B "ICPC Balloons", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a string, representing all the problems solved in a contest, where each problem is represented by an upper case letter, determine the total number of points awarded. The first team to solve a problem is awarded two points, and then after that each time that solves a problem is awarded 1.

## Method
The main idea is to calculate the number of unique letters in the string, multiply that by 2, and then add on the number of extra duplicates. An easy way to do this is to convert the string to a set (and store the length of the original string somewhere separate). Then, multiply the length of the set by 2, and add on the difference of the string length and the set length, to get the total number of points. This works due to the fact that a set does not allow duplicates, so converting the string to a set means that it only contains the unique characters in the string.