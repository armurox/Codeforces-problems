# Problem 1741A "Compare T-Shirt Sizes"
This is my current best solution to the problem 1741A "Compare T-Shirt Sizes", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given two strings (a and b) that represent T-Shirt sizes, output whether a T-shirt is > < or = the next.

## Method
This is essentially a case of comparing the two T-Shirt case-by-case eg: if 'L' is present in the first T-Shirt and not the second, then the firt T-Shirt is larger. We continue this for other cases (comparing number of 'X''s and also the "special" letters. such as 'S', 'M' and 'L', to decide what combination of letters is greater than what.) The equals case can be compared with an == sign for object-oriented languages which contain a string datatype with the == operator having been overload to compare the two strings character by character. 