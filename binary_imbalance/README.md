# Problem 1902A "Binary Imbalance"
This is my current best solution to the problem 1902A "Binary Imbalance", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given a binary string s, with the ability to insert another character an arbitrary number of times between any two. If the two characters are equal, then the character to be inserted must be '1', and if they are different, then the character to be inserted is '0'. Determine if it is possible to make the number of 0's greater than the number of 1's.

## Method
The only thing to check is if there exists a '0' in the binary string. If it does, then one can insert a 0 between it and any neighbouring 1, and do that repeatedly with the new 0 and 1, until the number of 0's exceeds the number of 1's. (If no 1's exist, then the number of 0's is trivially greater than the number of 1's). If no 0's exist in the string, then it is clearly not possible to make the number of 0's greatert than the number of 1's, as any pair will always be equal, and hence we can only insert 1's into the string.