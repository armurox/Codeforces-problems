# Problem 1915C "Can I Square?"
This is my current best solution to the problem 1915C "Can I Square?", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of boxes, where the $i$'th box contains $a_i$ unit squares, determine if a square can be formed using all the unit squares from all the boxes.

## Method
The problem boils down to checking if the sum of all the unit squares is a square number, which can be checked pretty easily by finding the square root of it and doing an is_integer check, (or by multiplying the result back to see if you obtain the original square after converting the square root result to an integer).