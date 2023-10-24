# Problem 1719A "Chip Game"
This is my current best solution to the problem 1719A "Chip Game", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given two integers n and m, representing the dimension of a board (with n being columns and m being rows). Two players are playing a game, where a chop starts in the bottom left corner, and in any move you can move the chip and odd number of steps to the right or up (exclusively). The loser is the one who can no longer make moves. Determine the winner if both players play optimally.

## Method
There are two cases to cosnider. If both m and n have the same parity, then the second player will win. (As if both are even, at the end of the first row or column run, the second one will start, swapping over to the first one. For both odd, the first one will start again, which means they will lose the second). If the integers have different parity, then the first person will win.