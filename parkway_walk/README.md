# Problem 1697A "Parkway Walk"
This is my current best solution to the problem 1697A "Parkway Walk", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array, which represents energy consumtion between consective benches as a person walks, and an initial energy m, determine the minimum amount of energy the person must restore by sitting on a bench to be able to traverse all the benches.

## Method
Loop through the array, reducing the person's energy consumption by $a_i$ until it hits zero, then sum up from $a_{i + 1}$ to the end of the array to get m, accounting for any negative dip.