# Problem 1765B "Broken Keyboard"

This is my current best solution to the problem 1765B "Broken Keyboard", which is an 800 rated problem. My current solution has been accepted, so I consider it to be complete. Of course, as always, if I am able to think of a more efficient solution, I shall return to the problem.

## Problem statement
Given a string, is it possible to be printed by a keyboard that alternates between printing pairs and singles.

## Method
Essentially, we run through the array, counting if the previous cases could have been a double or not.