# Problem 1713A "Traveling Salesman Problem"
This is my current best solution to the problem 1713A "Traveling Salesman Problem", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a set of boxes placed at coordinates on an (x,y) plane (where some are placed on the x-axis and others on the y, but nowhere else), determine the minimum number of moves required to reach all the boxes from the origin and return to it. A single move is represent by 1 unit in any of the four directions (but no other)

## Method
Essentially, the maximum number of moves along any axis is always 2 * the furthest box along that axis, and then we sum up all those to get the total number of moves.