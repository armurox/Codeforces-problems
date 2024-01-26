# Problem 1922A "Tricky Template"
This is my current best solution to the problem 1922A "Trickuy Template", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given three lowercase strings a b and c of the same length, determine if it is possible to find a template string t such that t is equal to a and b, but not equal to c. Here, equality is defined such that either for all i's in s_i t_i are equal if they are the same if t_i is lowercase, or if t_i is uppercase, then s_i t_i must be different (from the lowercase version of t_i).

## Method
The important check is in the string c. Looping through the string, count the number of letters it shares with either a or b. If that number is the length of the string, then it is not possible to find a template, as any template which is equal to a and b, will also be equal to c. In all other cases it is possible to find a template, as one can always go the uppercase template direction for letters not shared between a and b and c.