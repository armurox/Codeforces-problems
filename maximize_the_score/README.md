# Problem 1930A "Maximize Score"
This is my current best solution to the problem 1930A "Maximize Score", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers of size $2 \times n$, where $n$ is given, determine the maximum score you can obtain from the array, if the score starts at zero, and increase by picking to element $x$ and $y$ from the array, deleting them and adding their minimum to the score.

## Method
Sort the array. The maximum score then becomes the sum of the alternating elements from the first, as any other combination results in a smaller element being present in the sum, and hence a small sum.