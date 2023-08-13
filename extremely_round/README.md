# Problem 1766A "Extremely Round"

This is my current best solution to the problem 1766A "Extremely Round", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer 1, what is the number of integer x such that 1 <= x <= n and x contains only 1 non-zero digit?

## Method
Essentially, for every digit increase (i.e. single to double, double to triple), the number of digits increases by 9, therefore, we count the number of 0's, and multiply those by 9 and then add the digit left to get the number of x's. i.e. the formula is 9(num_digits - 1) + first_digit.