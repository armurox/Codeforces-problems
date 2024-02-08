# Problem 1882A "Increasing Sequence"
This is my current best solution to the problem 1882A "Increasing Sequence", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an sequence of positive integers, $a$ find the minimum possible last element of all possible sequences of positive integers $b$ that are strictly increasing such that $a_i \neq b_i \forall i \in \mathbb{Z}^{+}$ 

## Method
This problem can be solved quite easily using a greedy approach. Start with the number 0. Loop through $a$, incrementing the initial number by 1 and then, for each $a_i$, checking if that number is equal to $a_i$. If it is, then increment it again. Repeat this process until the end of the array and the answer will be obtained, as at each stage you are picking the minimum possible number that satisifies the conditions (this works as the array must be strictly increasing). 