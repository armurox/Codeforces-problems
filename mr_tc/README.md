# Problem 2106A "Mr. TC"
This is my current best solution to the problem 2106A "Permutation Warm-Up", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a binary string $s$, where an array of binary string's $a_n$ is constructed, such that each element is created by copying $s$, then flipping it's i'th bit, determine the number of one's in $a_n$.

## Method
When a $1$ is flipped, the number of one's count decreases by $1$, and a $1$ is flipped it's number of times. So that contribute num_ones * (num_ones - 1) times. If a zero is flipped, then it contributes num_ones + 1, and it does that num_zero times.
