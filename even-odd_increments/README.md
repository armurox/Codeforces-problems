# Problem 1744B "Even-Odd Increments"
This is my current best solution to the problem 1744B "Even-Odd Increments", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers, print out the sum of the array every time a query q is carried out on it. a query q is defined as: a x where a is a single binary digit and x is a positive integer. The result of a query is that if a is 0, then x is added to all even integers in the array, else to all the odd.

## Method
The idea is to split the query up into cases. If x is being added to an odd integer, we care about whether x is even or odd, as that will dictate how the array changes. i.e., if x is odd, then even integers will become odd and odd integers will become even, so we update are even sums and odd sums respectively (as well as the number of evens and odd), and then add those tow independant sums together to get our final sum. If x is even, then there is not parity change in the integers that are being added to.