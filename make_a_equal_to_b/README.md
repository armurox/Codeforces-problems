# Problem 1736A "Make A Equal to B"
This is my current best solution to the problem 1736A "Make A Equal to B", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two binary arrays a and b(each integer is either 0 or 1), determine the minimum number of moves to make them equal, where each move is: either swap 0 and 1 for an element of a, or rearrange a however you want.

## Method
The method essentially boils down to first making sure that a and b have the same number of ones (or by symmtry, number of zeros). So, at a bare minimum, the number of moves is at least the absolute difference between the number of ones in a and the number of ones in b. After that, if the two arrays are still not equal, one more additionaly move of rearranging a is required to make them equal.