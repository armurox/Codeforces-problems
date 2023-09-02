# Problem 1748A "The Ultimate Square"

This is my current best solution to the problem 1748A "The Ultimate Square", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer n, which represents the number of blocks provided, what is the largest side length of a square you can from with the blocks? (not all the blocks have to be used, and the blocks are all 1 unit high, and the ith block is ceil(i / 2) long).

## Method
If we have an odd number of blocks, that would mean that the largest block length would be ceil(i / 2) and additionally there are ceil(i / 2) blocks that can be formed of that length, as the two ceil(i / 2) - 1th would be paired up with block 1, so on and so fortih, with ceil(i / 2 added). Therefore, for an odd number of blocks, the max side length is ceil(i / 2). For even blocks, the largest block length is i / 2, and so we can from a square of side length (i / 2), ignoring extra blocks.