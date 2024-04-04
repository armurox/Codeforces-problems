# Problem 1678A "Tokitsukaze and All Zero Sequence"
This is my current best solution to the problem 1678A "Tokitsukaze and All Zero Sequence", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers, determine the minimum number of moves to make the array all zeros. A single move counts as picking two integers and making one of them 0 if they are equal, otherwise making them both equal to their minimum.

## Method
There are a few cases to consider. If zeros exists in the array already, then the minimum number of moves is the size of the array minus the number of zeros present. Next, check if there are duplicates in the array (for example, by comparing the length of the array to the length of its set), and if there are, then the number of moves is simply the number of elements in the array, one to get a zero, then the length of the array minus the zero, plus the move already done. Finally, if there are no duplicates, it is the length of the array plus an extra move to get a duplicate.