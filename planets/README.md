# Problem 1730A "Planets"
This is my current best solution to the problem 1730A "Planets", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of integers and a cost for a collection of integers with the same value in the array (where the cost is either c for the collection or 1 per integer), find the minimum cost of the array.

## Method
Store each group of similar integers as a key-value pair in a dictionary, where the key is the integer value, and the value is the number of the integers. Then, loop through the dictionary (hash map), and if value is greater than the cost, then add the cost to the minimum cost total, else add the value to the minimum cost total. This is essentially a greedy algorithm, where the minimum cost is taken for each integer collection, to get the minimum cost of the whole array.