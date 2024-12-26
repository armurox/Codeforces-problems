# Problem 2039A "Shohag Loves Mod"
This is my current best solution to the problem 2039A "Shohag Loves Mod", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer $n$, generate an array of strictly increasing integers $a_1 ... a_n$, such that $a_i \mod i \neq a_j \mod j$ for all $1 < i < j < 100$.

## Method
The easiest way to satisfy this condition is to make the $\mod$ of every integer in the array different. To achieve this, we can simply have the first two elements be $2$ and $3$, and every following integer will increment by $2$, so that the value of the $\mod$ will always be the maximum associated with the $i$ associated at $a_i$.