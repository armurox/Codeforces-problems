# Problem 1743B "Permutation Value"
This is my current best solution to the problem 1743B "Permutation Value", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer n, generate a permutation from 1 to n where the number of sub-segments that are permutations is minimal.

## Method
The simplest way to do produce this is to have 1 at the beginning of the permutation and 2 at the end (as this would mean that 2 is missing in every subsegment, preventing the generation of a permutation). Then, the only subsegments that are permutations are 1 and the original permutation itself. In between, I chose to just print out all the remaining numbers in reverse order down to 2.