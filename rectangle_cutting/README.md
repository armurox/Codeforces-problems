# Problem 1928A "Rectangle Cutting"
This is my current best solution to the problem 1928A "Rectangle Cutting", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integers $a$ and $b$, representing an $a \times b$ rectangle, determine if it is possible to cut the rectangle in half, parallel to either side, and then rejoin the pieces in order to form another rectangle. Note that $a \times b$ and $b \times a$ are considering the same rectangle, as one is just a $90 \degree$ rotation of the other.

## Method
A couple of conditions need to be satisfied in order for this to be valid. First, both $a$ and $b$ cannot be odd, and second, if one of them is even, its half cannot be equal to the other number, as that would result in the same rectangle being produced.