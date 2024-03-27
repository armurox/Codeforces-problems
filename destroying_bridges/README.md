# Problem 1944A "Destroying Bridges"
This is my current best solution to the problem 1944A "Destroying Bridges", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer n and k, where is n is island number and k is number of bridges that have been destroyed (where every pair of islands is connected by a bridge), determine how many islands can be reached from the first if the bridges have been destroyed optimally with the goal of minimizing these.

## Method
If k is less than n - 1, then the number of islands that can be reached is n, otherwise it is 1, as all the brides from the first island would have been destroyed.