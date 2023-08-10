# Problem 1768A "Greatest Convex"

This is my current best solution to the problem 1768A "Greatest Convex", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer k, what is the largest integer x < k such that x! + (x - 1)! is a multiple of k.

## Method
For this method, let us first consider the largest x less than k i.e. k - 1. Then, we know that we have (k - 1)! + (k - 2)! and we want to ask if it is a multiple of k. This is true, and can be seen from (k - 1)! = (k - 1)(k - 2) . . . 1 and (k - 2)! = (k - 2) . . . 1. Then, the addition of the two can be written and factored as (k - 2) . . . ((k - 1) + 1) = (k - 2)...(k) i.e. k is a factor the (k - 1)! + (k - 2)!, therefore we can state that when x = k - 1, then (x)! + (x - 1)! is a multiple of k. Then, the actual code is merely a process of reading k and outputting k - 1.