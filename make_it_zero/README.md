# Problem 1869A "Make It Zero"
This is my current best solution to the problem 1869A "Make It Zero", which is a 900 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers, make it zero, where you are able to perform the following operation a maximum of 8 times: select any subset of the array, and perform bitwise XOR on all its elements, replacing every element of the subset with the result.

## Method
There are two cases to consider: when the array size is odd, and when the array size is even. When the array size is even, we can choose the whole array, setting all its values equal to the bitwise XOR result, and then repeat it one more time. This result in all the elements being zero as bitwise XOR on an even number of elements that are all the same always outputs zero. For the odd case, we select all the elements from 1 to n - 1, and use the same method to set all those elements to 0 (which makes two operations). Then, we pick the last two elements, and do the operation twice again. The first operation will make a_(n - 1) and a_n equal to a_n, and the second will set them both to 0.