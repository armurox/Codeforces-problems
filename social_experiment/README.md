# Problem 2184A "Social Experiment"
This is my current best solution to the problem 2184A "Social Experiment", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer $n$, work out if it can be split between two civilization, each of which can be constructed by any mix of $2$ or $3$. Print out the minimum difference you can get between civilizations.

## Method
There are basically three cases. If $n$ is $2$ or $3$, then the civilization difference will be $n$. Otherwise, if $n$ is divisible by $2$, then $n$ can be split evenly between the two civilizations. Otherwise the difference will be $1$.
