# Problem 2263A - Solution Explained

## Problem Statement:
Given a binary array, two players play a game, where one player chooses two adjacent elements $x$ and $y$ and finds $max(x, y)$, while the other player does the min. This repeats until only one element is left. Find the winner. The player who finds the max starts first.

## Solution:
Basically, in this case, we simply compute the number of one's and number of zero's. If the number of one's is greater than or equal to the number of zeros, then player one wins, otherwise player two wins.
