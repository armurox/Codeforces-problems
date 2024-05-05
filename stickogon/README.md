# Problem 1957A "Stickogon"
This is my current best solution to the problem 1957A "Stickogon", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of $a$ integers, where each integer represents a stick of length $a_i$ (a single side length of a polygon), determine the maximum number of equal-sided polygons that can be constructed from the sticks.

## Method
To construct one such polygon, you need $3$ sticks of equal length, and every time there are three, you can construct another. Hence, loop through the array, storing the lengths in a hash_map, counting the number of them in the values. Every time a value hits a multiple of three, increment the number of polygons by $1$. At the end, print out the number of poygons you have calculated, and this will be the maximum, because you have kept using the minum number of required sticks to construct a polygon.