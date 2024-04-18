# Problem 1956B "Nene and the card game"
This is my current best solution to the problem 1956B "Nene and the Card Game", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers from $1$ to $n$, where each appears at most two times, determine the max number of points you can earn, if another player has another array satisfying the same conditions (obtained from a pile of $2n$ numbers, each number from $1$ to $n$ appearing twice in it), and in each turn a player chooses a number and puts it down, and gain a point if the number already exists on the pile. Assume the other player plays optimally. 

## Method
Every pair of integers in the array adds a point, as the other player will always play their number card if you place down yours. Simply count the number of pairs in the array, by adding every element of the array to a set as you loop through it, checking if it already exists, and if it does, increment the number of point by $1$.