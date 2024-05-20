# Problem 1651A "Playoff"
This is my current best solution to the problem 1651A "Playoff", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer n, determine the final number of the athlete that makes it through a tournamene,t where athletes are paired togetehr initial in the form: $1 - 2$, $3 - 4$ $...$, and the winner of one roun competes against the winner of the adjacent pair in the next round. If, for any $x, y$ in a pair, if $x + y$ is even, then if $x < y$, $x$ wins, else if $x, y$ is odd, the opposite occurs. For any $n$, there will be $2^n$ athelets.

## Method
The answer for any $n$, will always be $2^n - 1$, as we are guaranteed to have $2^n$ athletes, and in the first round, all the sums are odd (as even numbers are being matched up against odd), and after that he sums are always odd. This leads to the maximum odd number always winning, which is $2^n - 1$.