# Problem 1914B "Preparing For The Contest"
This is my current best solution to the problem 1914B "Preparing For The Contest", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are givne two numbers n and k, and a person wants to get excited k times, by solving n problems. The person only gets excited if the problem they solve is more difficult than the previous (where the first problem is not counted as getting excited). Each problem has a distinct difficulty rating from 1 through to n.

## Method
The problem essentially boils down to finding a permutation that has k increasing pairs, and everything else is decreasing. An easy way to do this is to have the first k + 1 elements increasing abd all elements after that decreasing e.g. for k = 2 and n = 6 have 1 2 6 5 4 3. This is just two for loops with the first one printing integers increasing from 1 through to k, and the next one printing integers from n down to k + 1.