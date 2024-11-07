# Problem 1629B "GCD Arrays"
This is my current best solution to the problem 1629B "GCD Arrays", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given three integers $l$, $r$ and $k$ which represent a strictly increasing array from $l$ to $r$ inclusive and a number $k$, which allows you to perform the following operation on the array $k$ times:
1. Pick any two elements of the array
2. Remove them, and their product to the array.

Determine if the g.c.d of the array is greater than one after performing the operation at most $k$ times.

## Method
There are a few conditions to check. If $l$ and $r$ are eqaul (and are not $1$) then the g.c.d is clearly greater than 1. Second, if the different between $l$ and $r$ divided by two $ceil$ 'ed is less than $k$, then again, the g.c.d can be made greater than $1$, by making it at least $2$, by multiplying consecutive digits. Finally, if it is equal to $k$, as long as at least one of the end elements is even, the same logic can be applied to make the g.c.d at least $2$. Otherwise it is not possible, especially with a large sequence of consecutive elements, for the g.c.d to be greater than $1$.