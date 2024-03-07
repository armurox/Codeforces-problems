# Problem 1684B "Z Mod C = X"
This is my current best solution to the problem 1684B "Z Mod C = X", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given three integers $a$, $b$ and $c$. Find integers $x$, $y$ and $z$ such that $x \mod y = a$ and $y \mod z = b$ and $z mod x = a$.

## Method
The easiest way is to construct this backwards. Let z = $c$ and $y = c + b$. Then, it is trivially true that the third part of the statement holds. Then, we let $x = c + b + a$, and the second part becomes true. The first part is also true in this case as $c < c + b + a$.