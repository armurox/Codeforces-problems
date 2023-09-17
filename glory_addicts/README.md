# Problem 1738A "Glory Addicts"
This is my current best solution to the problem 1738A "Glory Addicts", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of move types and and array of damage associated with those move types, with the rule that alternating types cast double damage, identify the maximum possible damage that can be caused by the sequence.

## Method
The algorithm is essentially a greedy algorithm where if the number of one type is greater than the other, then the minimum damages of those extra moves is added to the total damage, and then the remaining damages are multiplied by 2 and added. I chose to do this by storing the types of each and move and their damages in a map, with a vector storing the damages in the value section of the map. The vector was sorted in descending order so that the minimum damage elements could be added to the sum and removed from the end.