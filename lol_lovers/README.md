# Problem 1912L "LOL Lovers"
This is my current best solution to the problem 1912A "LOL Lovers", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a string of "L"'s and "O''s, determine (if possible), where to split the string into two parts such that each part contains at least one character, and the number of L's and O's differ between the parts. Print -1 if it is not possible to split the string in this way.

## Method
This can be quite easily brute forced, especially in python. Simply loop through slices of the string, starting from one character and the rest of the string for the other part, all the way to the end, comparing the string slice first part with the second part (s[:i] to s[i:]). If the number of occurences of "L" and "O" differ between the parts, then we just print out i, otherwise, if we have gone through the whole string wihout finding this to be true, then we print out -1.