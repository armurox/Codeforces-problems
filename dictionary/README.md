# Problem 1674B "Dictionary"
This is my current best solution to the problem 1674B "Dictionary", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a two letter word, representing a language in which words have only two lowercase letters that are distinct, determine it's index in the dicionary.

## Method
Import in a list of lowercase ascii letters, then multiply the first element by 25 times its index in the dicitonary, and on the on the second letter. If the second letter occurs before the first, subtract one, due to the distinct constraint that is enforced.