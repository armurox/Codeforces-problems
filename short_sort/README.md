# Problem 1873A "Short Sort"
This is my current best solution to the problem 1873A "Short Sort", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
given a string consisting of only the character a,b and c, with the operation "swap any two characters at most once", determine if it is possible to obtain the string "abc" from it.

## Method
This is a relatively small case, so we just need to consider all the strings resulting from two character swaps from "abc", which are "bac", "cba" and "acb", as well as "abc" itself, to account for the no swap case. If the string provided is any of these 4 strings, then print "YES", else print "NO".