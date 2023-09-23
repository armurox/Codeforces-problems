# Problem 1733A "Consecutive Sum"
This is my current best solution to the problem 1733A "Consecutive Sum", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of n integers, and a number k, create an array with a block of consecutive integers k, with the maximum possible sum. You can achive this by performing the following operation at most k times: Chose indices i, j such that i mod k == j mod k, and swap a_i a_j.

## Method
The idea in the question is to be sum up k sized blocks and swap their elements with other k-sized blocks until you have a max sum. To achieve this, I computed the sum of the first k sized block, and the for every elemt after, temporarily replace the appropriate index of the k-sized block with that index, and check if the sum has increased, if the sum has not increased, repeat with the next index, and repeat this process for all k-sized blocks.