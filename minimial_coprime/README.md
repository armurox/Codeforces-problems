# Problem 2063A "Minimal Coprime"
This is my current best solution to the problem 2063A "Minimal Coprime", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a two integers, representing a segment $l$ and $r$, determine the number of minimal coprime subsegement of the segment. A segement is minimal coprime if it is the only coprime segment out of all its subsegment.

## Method
Basically, two segements are obviously coprime if they are one apart, and they are obviously minimally coprime, apart from $1, 2$ as $1, 1$ is coprime. Hence, given two integers $l$ ans $r$, the numnber of minimum coprime is essentially $l - r$, execpt for $1, 1$ which would be $1$.
