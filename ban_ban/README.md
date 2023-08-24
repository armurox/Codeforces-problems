# Problem 1747B "BAN BAN"

This is my current best solution to the problem 1747A "BAN BAN", which is a 900 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a number n, you know that you have the string "BAN" concatenated n times. What is the minimum number of swaps of arbitrary string indices needed such that "BAN" will no longer exist as a substring in the string. (Note: Here, substring is any string that can be obtained by the deletion of some (maybe none or all) letters in tbhe string).

## Method
The idea behind the method is simple. Given a string such as "BANBAN", the idea is to turn it into "NANBAB", separating out the first k "BAN"s as "NAN" and the last k ones as "BAB", as this involves the swapping of one letter for every pair of "BAN's". When n is odd, the strategy is the same, except the middle "BAN" will be made into "ABN".