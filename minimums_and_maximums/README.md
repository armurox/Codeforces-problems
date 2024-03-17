# Problem 1680A "Minimums and Maximums"
This is my current best solution to the problem 1680A "Minimums and Maximums", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given for integer $a b c d$, where $a$ and $b$ represent the mininum and maximum number of the minimun element allowed in the array and $c$ and $d$, the same for the maximum element, determine the minimum number of elements that can be in the array.

## Method
There are three cases to consider. if $c > b$ or $a > d$, then both the minimum and maximum need to be present in the array, and the minimum possible is $a + c$, else if $c$ is in between $a$ and $b$, or vice versa, the answer is just the number which is between the other two.