# Problem 1729B "Decode String"
This is my current best solution to the problem 1729B "Decode String", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an encoded string, where a each letter less than 10 is encoded into its equivalent integer (not in ASCII, but starting from q), and for numbers greater than 10, they are encoded into their equivalent integer with a 0 added to the end. Determine the original sequence of (lowercase) letter.

## Method
Essenially, for every letter, look two ahead to check if a 0 exists (and look 1 ahead of that to make sure there is not another zero, because if there is, then the zero you have seen counts as part of 10 or 20, not as representative of your letter being 10 or greater). If it does, then decode the string using the two numbers before the 0, else treat each integer individually. Execute this in a loop, with the appropriate decision statements present. 