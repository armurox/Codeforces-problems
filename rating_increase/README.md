# Problem 1913A "Rating Increase"
This is my current best solution to the problem 1913A "Rating Increase", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a string of digits, where the first digit is non-zero, determine if the string can be split into two integers a and b such that a < b and neither a or b has any leading zeros. If not, print out -1.

## Method
Slice through the string, from the second element onwards, checking if that slice and the other part of the string satisfy the conditions. If they do, print out that split, otherwise, print out -1.