# Problem 1971B "Different String"
This is my current best solution to the problem 1971B "Different String", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a string $s$, determine if it is possible to rearrange it to give a different string, and if it is, do so.

## Method
Loop through the string. If any character is different to the first, then indicate it is possible, and swap that character with the first, and you will have your new string. If not, then every character in the string is the same, and you can indicate that it is not possible ot rearrange the string to give a different one.