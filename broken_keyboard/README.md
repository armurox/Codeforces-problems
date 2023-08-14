# Problem 1768A "Extremely Round"

This is my current best solution to the problem 1765B "Broken Keyboard", which is an 800 rated problem. My current solution has a runtime error in test 10, so it is still under development. 

## Problem statement
Given a string, is the current array possible to be printed by a keyboard that alternates between printing pairs and singles.

## Method
Essentially, we run through the array, counting if the previous cases could have been a double or not.