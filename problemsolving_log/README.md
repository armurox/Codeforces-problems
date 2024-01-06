# Problem 1914A "Problem Solving Log"
This is my current best solution to the problem 1914A "Problem Solving Log", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a timeframe a string of problems and hat a person is thinking about every minute, where every problem is labeled from A to Z, each one taking the ASCI decimal equivalent (+ 1) number of minutes to solve, determine the number of problems solved in the timeframe.

## Method
Initialize a hash table (dictionary in python, unordered map in C++), where the keys are the capital letters of the alphabet and the values are the corresponding ASCII decimal equivalent ( + 1). This is a relatively easy initialization in a loop. Next, loop through the string, subtracting 1 each time from the value of the corresponding letter in the hash table, and then check if the value is 0. If it is, the problem has been solved, and the total number of solved problems increases by 1. In this way, as one loops through the string, they can obtain the number of solved problems.