# Problem 1763A "Absolute Maximization"

This is my current best solution to the problem 1763A "Absolute Maximization", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array a of integers, what is the maximum difference you can get of max(a) - min(a), where you are allowed to repeat the following operations an arbitrary number of times: pick any two integers and swap any of their digits in their binary representation.

## Method
The idea is to maximize max(a) in minimize min(a). The manner in which we do this is to loop through the array, binary "and"ing the array element with min(a) and binary "or" ing with max(a). This will ensure that by the end, as many 0's as can be converted to 1's in the max(a) will have done so, and the converse for min(a).