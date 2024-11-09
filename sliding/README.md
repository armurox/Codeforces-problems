# Problem 2035A "Sliding"
This is my current best solution to the problem 2035A "Sliding", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given $4$ integers $n$, $m$, $r$, $c$, where $n$ and $m$ are the rows and columns of an $n \times m$ with $r$ and $c$ being the removal of an element from position $(r, c)$. Note that the matrix is one-indexed. Determine the sum of the manhattan distances moved by the remaining items such that they fill all remaing holes except for the last.

## Method
This essentially boils down to constructing a formula. First, every row below $r$ will be included, so the first element of a sum will be $(n - r) \cdot m$. Then, this is followed by the fact that, for every row below the one where the element is removed, the shift will be by precisely one for every colum (minus one). So, the second element of the sum becomes $(m - 1) \cdot (n - r)$, and the final element will be the number of columns minues $c$, i.e. $m - c$. Therefore, the final result is $$m \cdot (n - r) + (m - 1) \cdot (n - r) + (m - c)$$