# Problem 1735A "Working Week"
This is my current best solution to the problem 1735A "Working Week", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer n, identify the a set of (3) holidays set in the days 1... n (where the cycle starts repeatedly), such that the difference between the segments of the working week are maximized (or rather, the minimum difference is maximized).

## Method
Keeping the first holiday as close as possible to the front, and the last holiday at the end, keeps one of the segment sizes minimum i.e. 1. Then, the decision becomes where we can place the middle holiday. Essentially, for evey 3 days increased in the working week, the minimum difference between the segments can be increased by 1, starting at 6 being 0. This is the equivalent of n / 3 - 2, so for every n, the maximum minimum difference between segments is n / 3 - 2.