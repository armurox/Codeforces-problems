# Problem 1791B "Mathematical Circus"
This is my current best solution to the problem 1791B "Mathematical Circus", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integers n and k, (where n is even), determine if it is possible to split an array from 1 through to n into pairs of numbers a and b, where (a + k) * b is divisible by 4. If it is possible, print out this list of pairs.

## Method
There are a few cases to consider. First, if k is odd, then it will always be possible. This is due to the fact that we can pair up all odd and even numbers , with odd + odd giving us even and two even numbers multiplied together being divisible by 4. If k is odd, then the only requirement is that at least half of the even numbers (that are themselves not divisible by 4) + k are divisible by 4. In that case, the strategy is to pair up all odd numbers with the even numbers that are divisible by 4, and those that are not, end up matching with the other even numbers, which we know, when k is add, are divisble by 4. Finally, if k is 0, then it will never be possible, as you cannot alter the odd numbers at all, or the even numbers that are not divisible by 4.