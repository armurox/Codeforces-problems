# Problem 1682A "Palindromic Indices"
This is my current best solution to the problem 1682A "Palindromic Indices", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a string $s$, that is a palindrome, determine how many (single) elements can be removed from $s$, such that it remains a palindrome.

## Method
Start at the middle. This will always be one possible index, as $s$ is a palindrome, so removing the middle index should preserve this property. Count how many elements around the middle are equal to it, and that then becomes the total number of allowed removals, (as if an element is equal to the middle, then removing it result in the same string as removing the middle).