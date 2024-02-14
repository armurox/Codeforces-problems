# Problem 1698B "Rising Sand"
This is my current best solution to the problem 1698B "Rising Sand", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array integer of at least size 3 and a number $k$, determine the maximum possible number of two tall numbers that can exist simultaneously. The $i$-th number in the array is considered too tall if $a_i > a_{i - 1} + a_{i + 1}$. You can perform the following operaton any number of times: Pick $k$ consecutive elements and increment them by $1$.

## Method
If $k$ is greater than 1, then it will never change the number of two tall elements, as picking any pair or greater of elements to change means that if one was the sum of the other two, that will stay, and if it was not, then it will never change, as it and at least on of its neighbors values is increasing by 1, keeping their relationship the same. If $k = 1$ then the maximum number of two talls elements if $n$ is odd is simply $\frac{n - 1}{2}$ and if $n$ is even, then it is $\frac{n - 2}{2}$