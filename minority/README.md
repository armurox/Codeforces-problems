# Problem 1633B "Minority"
This is my current best solution to the problem "1633B", which is an 800 rated problem.

## Problem statement
Given a binary string, you are allowed to perform the following operation at most once:
- Pick any substring and eliminate the element which is repeated the minimum number of times in the substring. (The number of times each is repeated have to be unequal, otherwise, do nothing).

Finally, determine the maximum number of characters that can be removed.

## Method
There are essentially just two cases. First, it will be the minimum of the number of ones or zeros in the whole string, as that is the maximum substring you can encompass, and therefore remove (provided the numbers are unequal). If the numbers are equal, then the answer is simply one less than the minimum, which you can always do by shrinking your substring size by $1$.