# Problem 1654B "Prefix Removals"
This is my current best solution to the problem 1654B "Prefix Removals", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a string $s$, determine the final version of the string if the longest prefix string $x$ that exists elsewhere in the string is removed repeatedly.

## Method
The longest prefix strings being removed repeatedly is the equivalent of asking if that character as you loop through the string occurs more than once in the string. A quick way to check this would be to store the count of each character in a hash map (dictionary) (with the character as the key, and the number of times it occurs as the value), and if the count is $1$ anywhere, break the loop. Keep track of how far along the loop you are, and print out the string from that point.