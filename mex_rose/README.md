# Problem 2149C "MEX rose"
This is my current best solution to the problem 2149C "MEX rose", which is a 900 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given an array $a$ of length $n$ and a non-negative integer $k$. Determine the number of operation to make $MEX(a) = k$.

## Method
We know, to get $MEX(a) = k$, every integer less than k from $0 \rightarrow k - 1$ must exist, and $k$ must be excluded. The answer then becomes the maximum of the different between the numbers left over in $0 \rightarrow k - 1$ after removing the elements that exist in $a$ and the number of $k$'s themselves. We can quickly compute this by first sorting $a$, and then looping through it and removing evermatch and getting the count of $k$. The time complexity of this is then $n log n + n$ ($n log n$ for sorting, then $n$ for the loop).
