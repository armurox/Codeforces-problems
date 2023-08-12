# Problem 1767A "Cut The Triangle"

This is my current best solution to the problem 1767A "Cut The Triangle", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given the three coordinates of a non-degenerate triangle, state whether it is possible to split the triangle into two other non-degenerate triangle with only a horizontal or vertical line

## Method
The only time this is not possible if 2 pairs of vertices in the triangle form independant lines (e.g. x1 and x2 match and y2 matches with y3). Then, we merely consider all these cases and print "NO\n" if they show up, else it is a "YES\n".