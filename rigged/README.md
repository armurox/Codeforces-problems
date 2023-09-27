# Problem 1879A "Rigged!"
This is my current best solution to the problem 1879A "Rigged!, which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of weightlifters, with strength s_i and endurance e_i, try and ensure that the first weightlifter always wins (the weightlifter that wins must be able to pick up the weight w, where w <= s_i and also have the maximum endurance out of all those who can lift it).

## Method
The easiest way is to first minimize the number of weightlifters competing with the first weight lifter, hence w = s_0. Then, for all weightlifters that have s_i >= w, if any of them have e_i >= e_0, then they can either tie with or beat the first weightlifter, and it is not possible to make the first weightlifter win