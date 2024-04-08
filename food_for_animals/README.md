# Problem 1675A "Food For Animals"
This is my current best solution to the problem 1675A "Food For Animals", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given 5 integers, representing available cat food, dog food, universla food, number of cats and number of dogs, respectively, if it is possible to feed the cats.

## Method
The method is essentially a series of case splits, where, in a greedy manner, first let the cats consume all the cat food, if there is any left over, consume as much of the universal food as possible, and same with the dogs. If either one of them, have any left over, then it is not possible to feed all of them, otherwise it is.