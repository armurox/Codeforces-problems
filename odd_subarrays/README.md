# Problem 1686B "Odd Subarrays"
This is my current best solution to the problem 1686B "Odd Subarrays", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a permutation array, split it into sub-arrays, with the maximum number of sub-arrays with odd inversions and print out this number of max sub-arrays which are odd.

## Method
Loop through the permutation, and for every consecutive pair of inverted numbers you see, increment the number by 1, and skip the next number. This is due to the fact that you only need to have a pair of inverted numbers in the sub-array for it to be odd. Anymore and it may become even, and the sub-array will become large, overcounting inversions, reducing the max sub-array number.