# Problem 1918A "Brick Wall"
This is my current best solution to the problem 1918A "Brick Wall", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two integer n and m, representing the heigh and width of a brick wall respectively, determine the maximum stability of the wall. Here, maximum stability is the maximum difference between horizontal and vertical bricks, where a brick is a block of size $1 \times k$ where $k$ is at least $2$.

## Method
To get the maximum difference, just make all the blocks horizontal, and as small as possible. Essentially, the answer just becomes $n \times \frac{m}{2}$ as you want all the blocks to be $1 \times 2$ blocks, which the occasional $1 \times 3$ block for odd $m$'s, but those as are accounted for, as the division truncates any leftoves for odd $m$'s.