# Problem 1877A "Goals Of Victory"
This is my current best solution to the problem 1877A "Goals Of Victory", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given a sequence of n - 1 integers, representing the efficieny of n - 1 teams. The efficiency of a team is the sum of the differences in goals scored by the team minus the goals scored by their opponent. There exist n teams, given this sequence of integers, calculate the efficiency of the n_th team.

## Method
Our current array contains efficiency of the for $e_1, e_2,...e_{n-1}$. To compute $e_n$, let us blow up a fixed $e$, in this case $e_1$. This gives us $e_1 = a_1 - a_2 + a_1 - a_3 ... a_1 - a_n$, which can be rearranged into th form $e_1 = (n - 1) \cdot a_1 - a_2 - a_3 ... - a_n$. Now, summing up all the efficiencies once they've been rearranged in this way gives us: $\sum_{k = 1}^{n-1}$ $e_k = a_1 + a_2 ... a_{n - 1} - (n - 1) \cdot a_n$, so if we multiply this by -1, we get precisely the efficiently $e_n$.