# Problem 1743A "Password"
This is my current best solution to the problem 1743A "Password", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Compute the number of different 4-digit passwords that could be produced, given a set of digits that cannot be used, and that exactly two digits are used, twice each.

## Method
This is just a brute for method, as, even brute forces, the maximum number of cases is 10^4, which is easily manageable in the time frame provided. Hence, a brute force method, with a decision statement for the conditions (where the invalid digits can be stored in a set to make "in" checks possible in O(1) time) is what I chose to use here.