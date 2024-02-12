# Problem 1816A "Ian Visits Mary"
This is my current best solution to the problem 1816A "Ian Visits Mary", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a pair of integers $x$ and $y$, representing Mary's coordinate on a plane, determine the move set that allows Ian to move to Mary, where a move is a jump from the Ian's current coordinate to any coordinate that does not have additional coordinate points in the line segment between Ian's current point and the ending point. Ian is allowed at most 2 moves to get to Mary and starts at the origin.
## Method
Essentially, one wants to stay within one row, and then one column of Mary. Therefore, the first move is to $(x - 1, 1)$, staying within the same "row" and the second move is to $(x, y)$, staying within the same "column".