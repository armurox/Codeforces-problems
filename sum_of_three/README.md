# Problem 1886A "Sum Of Three"
This is my current best solution to the problem 1886A "Sum Of Three", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given an integer n. Find three distinct integers x, y and z such that their sum is equal to n, with the constraint that none of x, y and z can be divisible by 3.

## Method
First, eliminate all the cases that are not possible. Everything from 1 to 6 is not possible, either because 3 distinct integers cannot be produced, or one of them has to be divisible by 3. Similarly for n being 9. For all other cases, there is an easy way to generate x y and z. First, let x and y be 1 and 2. Then, let z = n - 3. If n % 3 == 0, then this is an invalid configuration, as n is divisible by 3. Therefore, we can just change y to 4, making z = n - 5, and we have a valid configuration. (9 doesn't work with this as it makes z = 4, breaking the distinct constraint on x, y and z).