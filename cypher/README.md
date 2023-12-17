# Problem 1703C "Cypher"
This is my current best solution to the problem 1703C "Cypher", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given an array of integer representing a mixed up bicycle lock. Given the move sequence that lead to each number, reverse engineer the original cypher. (Each digit of the cypher is between 0 and 9). U means that the digit increased by 1 and D means it decreased by 1.
## Method
Looping through the given instruction set at each integer, reverse it first. Then, if you encounter U, subtract 1 from the current cypher digit mod 10, and + 1 for D. Doing that through the whole array will give you the cypher.