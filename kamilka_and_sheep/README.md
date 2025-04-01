# Problem 2092A "Kamilka and the sheep"
This is my current best solution to the problem 2092A "Kamilka and the sheep", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array $a$ of integers, determine the maximum possible g.c.d of any pair of them, if any non-negative integer $d$ can be added to every element of the array.

## Method
In essence, if any two numbers have a difference between them, that different will be preserved as they increase, and the highest g.c.d will be that difference (think about the mod of both numbers by the difference, they are the same difference away from zero). So, then the problem just becomes finding the maximum difference of the array, which is simply $max - min$
