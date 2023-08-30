# Problem 1750B "Maximum Substring"

This is my current best solution to the problem 1750B "Maximum Substring", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a binary string s, what is the maximum cost of any of its substrings, where the cost of a string is defined as:
For some non-empty string with x 0's and y 1's: x * y if x > 0 and y > 0, x^2 if x > y and y == 0 y^2 if x == 0 and y > 0. Note: Here a substring is obtained by the deletion of some (possibly 0) characters from the start and end of the string s.

## Method
We essentially want to find the maximum consecutive 0's and 1's in the string s. Once this is obtained, we then check if x > y, and if so, return x^2 else y^2. A final check is left, where it is possible that x * y in the whole original string is greater than x^2 or y^2 in the substrings (as that does not require consecutive 1's and 0's).