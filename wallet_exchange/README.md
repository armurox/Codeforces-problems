# Problem 1919A "Wallet Exchange"
This is my current best solution to the problem 1919A "Wallet Exchange", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integer a and b, where a is Alice's coins and b is Bob's coins, determine who would win the game if Alice starts and the person who loses is the one who's turn starts when both a and b are 0. On one turn, a person can reduce either a or b by 1.

## Method
If the sum of a and b is odd, then Alice wins, as she always starts, and therefore she will always be reducing the coin total by an odd number. Bob will win if the sum is even, for the same reason (and the fact that he starts second).