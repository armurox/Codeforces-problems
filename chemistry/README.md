# Problem 1883B "Chemistry"
This is my current best solution to the problem 1883B "Chemistry", which is a 900 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given a string s and an integer k. Determine if it is possible to convert s into a palindrome after removing exactly k characters and rearranging the remaining however you wish.

## Method
If allowed to rearrange a string to make a palindrome, then a necessary and sufficient condition for this is if every character exists multiple of two times with at most 1 character existing an odd number of times (as we can put all the even characters on either side, and the odd numbered character in the middle). So, if we just stored the count of each character in a lookup table, where the key is the character and the value is its count, if the required number of moves to reduce everything to all even is greater than k + 1, then the problem is impossible, else it is.