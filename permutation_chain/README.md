# Problem 1716B "Permutation Chain"
This is my current best solution to the problem 1716B "Permutation Chain", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given an integer n. Determine the length of the maximum possible permutation chain that can be produced and produce it. A permutation chain is defined as a sequence of permutation, where the number of fixed points per permutation is strictly decreasing in the sequence. (Note: A fixed point is a case when an element of the permutation p is such that p_j = j). Also, not that the length of a permutation chain is the number of permutations in it.

## Method
The easiest way to get a strictly decreasing permutation chain is to start with an ordered permutation (from 1 to n), and swap the first element forward by 1 each time. This strictly decreases the number of fixed points by 1 each time, until the 1 has reached the end. Then, it is only possible to keep the fixed point either the same or increase them (as the number of fixed pointd will have hit 0). The length of this permutation chain is precisely n.
