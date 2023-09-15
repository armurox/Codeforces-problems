# Problem 1740A "Factorize N + M"
This is my current best solution to the problem 1740A "Factorize N + M", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a prime number n, find a prime number m such that n + m is not prime.

## Method
The number that will always work is n itself as m. This is because n + n = 2n, and 2 is therefore a factor, making n + n not prime.