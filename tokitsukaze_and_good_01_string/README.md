# Problem 1678B1 "Tokitsukaze and Good 01-String (easy version)"
This is my current best solution to the problem 1678B1 "Tokitsukaze and Good 01-String (easy version)", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a binary string, give the minimum number of moves it takes to make the string good. A good string is one where all its contiguous subsegments (a subsegment's elements must all be equal) are even, and a move counts as flipping an individual bit.

## Method
Loop through the string, counting the length of the contiguous subsegment you are at. If it is odd, the number of moves increases by 1 (and flip the bit). Repeat this process throughout the array. This makes all the odd subsegments even. If it is part of a larger subsegment, that two will become even.