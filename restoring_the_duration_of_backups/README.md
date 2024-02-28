# Problem 1690C "Restoring The Duration Of Backups"
This is my current best solution to the problem 1690C "Restoring The Duration Of Backups", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integer arrays s and f, where $s_i$ is the time at which some task is provided and $f_i$ is the time at which it ends, (where only one task can be performed at a time), determine the duration of each task, and put it in an array d, where $d_i$ is the duration of the %i$'th task.

## Method
Loop through s and f, and compare $f_{i-1}$ to $s_i$ and whichever one is greater is the start time of the task, and thne simply subtract it from $f_i$.