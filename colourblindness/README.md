# Problem 1722B "ColourBlindness"
This is my current best solution to the problem 1722B "ColourBlindness", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You possess 2 rows of n columns, where every cell is either "R", "G" or "B". With the additional constraint that "G" == "B", determine if the two rows are the same or not.

## Method
This is just a loop through 0 to n - 1, comparing the elements at each index, and setting "G" == "B" as a valid same check. i.e., two cells are considered the same if both cells are either "R", or both cells are either one of "G" or "B". If every cell satisfies these constraints, then both rows are considered equal, otherwise they are not.