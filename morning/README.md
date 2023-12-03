# Problem 1883A "Morning"
This is my current best solution to the problem 1883A "Morning", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a 4-digit string (where every character is a digit), determine the minimum number of moves it takes to enter that sequence. Assume you start at 1, and in any move you can either press the key you're at, or move to an adjacent key. The key set up is 1234567890

## Method
Essentially, you just sum up the absolute difference between neighboring elements of the array, and deal with the special case of 0, which you can treat as the number 10.