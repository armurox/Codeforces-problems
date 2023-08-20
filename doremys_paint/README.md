# Problem 1764A "Doremy's Paint"

This is my current best solution to the problem 1764A "Doremy's Paint", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers, pick a subset with the indices l, r (i.e. [a_l..a_r]) such that l - r - c(l, r) is maximized. Here c(l,r) is a function that produces the maximum number of distinct integers in the subarray.

## Method
There is one guarenteed way to maximize the this sum. Essentially, the problem is asking us to find the subarray with the minimum number of distinct elements, and the largest difference between elements. Let us assume we find this subarray. If we were to expand it by 1, with 1 more distinct integer, c(l, r) would increase, but so would l - r, by the exact same amount! i.e., the l - r - c(l, r) stays the same once the maximum subarray is found. Therefore, if we set l = 1 and r = size_of_array, then we will always get the maximum form of l - r - c(l, r).