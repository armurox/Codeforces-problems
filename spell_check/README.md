# Problem 1722A "Spell Check"
This is my current best solution to the problem 1722A "Spel Check", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Determine if the string provided is a permutation of the name "Timur"

## Method
The easiest way to do this is to employ C++ is_permutation algorithm built into thre standard template library (and also check that the length of the two strings is the same). An alternative implementation is to sort the letters of "Timur" and sort the letters of the string to be compared, and check if the two are equal.