# Problem 1742A "Stripes"
This is my current best solution to the problem 1742A "Stripes", which is a 900 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an 8x8 grid, where some rows are colored red, and some columns are colored blue (with overlapping conflicts settled by the most recent color added), determine what the most recent colored added to the grid is.

## Method
The idea is simple, we just have to identify if there is a row that is all red, or a column that is all blue, and that will be the most recent color (as each color covers the whole row, so the most recent color will always be the one that fills the whole row / column).