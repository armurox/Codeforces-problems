# Problem 1729A "Two Elevators"
This is my current best solution to the problem 1729A "Two Elevators", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given 3 integers a, b and c, and two elevators, with the first elevator starting on floor a and moving to the floor it should go to when it is called, and the second elevator starting on floor b, and moving first to floor c, then the floor it should go to, determine if it is faster to call the first, second or either elevator to floor 1. Each elevator takes |x - y| seconds to travel from floor x to floor y.

## Method
We essentially need to compute how long each elevator takes to travel to floor 1, and then just decide whichever one takes the shortest time. The first elevator always takes |a - 1| seconds to travel to floor 1, while the second one takes |b - c| + |c - 1| seconds. Then, we just code in the appropriate decision statements, as stated in the problem.