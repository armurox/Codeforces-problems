# Problem 1759A "Yes-Yes"

This is my current best solution to the problem 1759A "Yes-Yes", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a string s, is it a substring of "Yes" repeated an arbitrary number of times?

## Method
We create a comparison string "Yes". After seeing what the first letter of s is ("Y", "e" or "s"), loop through the string s, comparing it to each letter of "Yes" as it continues, and if any point there is a mismatch, print out "NO\n", else print out 
YES\n"