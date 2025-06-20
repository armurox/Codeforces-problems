# Problem 2117A "False Alarm"
This is my current best solution to the problem 2117A "False Alarm", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integers $n$ and $x$ and a list of binary integers, $1$ representing a closed door and $0$ the opposite. Determine, if it is possible for someone to pass through all doors, if he can open them once for at least $x$ seconds.

## Method
The distanct between the last closed door and first closed door must be less than or equal to $x$.
