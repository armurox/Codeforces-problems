# Problem 1681A "Game With Cards"
This is my current best solution to the problem 1681A Game With Cards", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two players Alice and Bob, playing a game where they can pick any integer from an integer array they posses, determine who would win if Alice started first, then if Bob started first. The rules of the game are that the person after the previous must always provide an integer greater than the previous.

## Method
Determine the maximum value in each array, and if Alice's is larger than Bob, then Alice will always win, and vice versa for Bob. If the max value's are equal, then the person who starts will win.