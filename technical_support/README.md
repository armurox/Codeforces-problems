# Problem 1754A "Technical Support"

This is my current best solution to the problem 1754A "Technical Support", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a string of Q's and A's, is it a valid customer support message sequence (Q being customer, A being support, where every Q must be associated with 1 or more A's).

## Method
We consider ever subset of the string, starting with the whole, and getting smaller and smaller, and if, at any point, there are more Q's than A's, it means that there exists at least 1 Q that does not correspond to an A sequence before the next set of questions registers.