# Problem 1900A "Cover in Water"
This is my current best solution to the problem 1900A "Cover in Water", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a string of cells, where a '#' represents a blocked cell, and a '.' represents an empty cell, try and fill up all the empty cells with water. Two actions are allowed for this: action 1 is to fill up a cell with water, action 2 is to take water from a full cell and put it in an empty cell (the full cell then becomes empty). An important property of this set up is that if any cell has two full cells adjacent to it, then it becoems full of water. Minimize the number of action one moves required and print it.

## Method
Essentially, there are two main cases to check. If there is a consecutive three empty cells anywhere in the string, then the number of action 1 moves is always 2. (2 for the cells adjacent to the middle, then that keeps filling with water which you can take out and move to any other cell, and then the middle cell refills). If there are no consecutive three empty cells, then the number of action one moves is just the number of empty cells.