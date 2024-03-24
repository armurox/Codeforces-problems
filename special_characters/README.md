# Problem 1948A "Special Characters"
This is my current best solution to the problem 1933B "Turtle Math: Fast Three Task", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer $n$, determine if it is possible to have a string with $n$ special characters, and if so, print it out. Note: A special character is defined as a character that is equal to exactly one of its values.

## Method
If $n$ is odd, it is not possible, due to the definition of special characters meaning they always come in pairs. If $n$ is even, loop to $n / 2$ printing out each letter of the alphabet from A to Z twice, then starting again at the end (with $\mod$)