# Problem 2038J "Waiting For..."
This is my current best solution to the problem 2038J "Waiting For", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given $n$ rows of input. Each row is either in the form $P p_i$ or $B b_i$. $p_i$ represents the number of people who are waiting at a bys stop, while $b_i$ is when a bus with $b_i$ free seats arrives. At every $B b_i$ row, determine if an extra person can enter the bus once everyone has piled in.

## Method
Keep an accumalated count of all the number of people waiting at the bus stop, then subtract $b_i$ from them at every row. If the sum becomes negative, then an extra person can enter, otherwise not.