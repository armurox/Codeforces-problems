# Problem 1671A "String Building"
This is my current best solution to the problem 1671A "String Building", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a string of $a$'s and $b$'s, determine if it can be constructed from any combination of pairs and/or triples of $a$'s and $b$'s.

## Method
Loop through the string, checking if there are any single consecutive $a$'s or $b$'s. If there are, then it is not possible to generate the string, as the minimum size of a consecutive sequence allowed must be two, else the string can be generated, as any combination of $3$'s and $2$'s can genearate any other number.