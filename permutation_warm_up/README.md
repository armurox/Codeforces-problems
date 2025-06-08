# Problem 2108A "Permutation Warm-Up"
This is my current best solution to the problem 2108A "Permutation Warm-Up", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer $n$ determine all the possibile distinct values of the function:

$$f(p) = \sum_{i=1}^{n}|p_i - i|$$

## Method
The key realization to this problem is that every possible permutation can be only even. The problem then becomes, calculate the max value, and then every even number below that, all the way to zero. That set of values becomes the set of distinct values. Those values start from max, and decrease by 4 each time, all the way to the no permutation. Another way to think about it is, imagine the maximum swap (i.e., max_val - 1) and decrease that by 2 and add 1 finally. That is the total number of distinct values of the function.
