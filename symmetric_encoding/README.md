# Problem 1974B "Symmetric Encoding"
This is my current best solution to the problem 1974B "Symmetric encoding", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an encoded binary string, where the encoding involves taking every distinct letter of the string, putting it in alphabetical order, and then mapping every element of the original string to the reverse of the string extracted (i.e. from last to first). Decode the string

## Method
The idea is relatively simple. Take the string you have, extract all distinct characters in reverse order(by converting to a set then a list, that is reversed). Then also stored a duplicated sorted in aphabetcial order copy. Create a dictionary mapping between the two, then loop through the original string, storing in a new list the value of the key associated with each letter.