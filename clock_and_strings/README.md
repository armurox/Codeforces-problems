# Problem 1971C "Clock and Strings"
This is my current best solution (after looking at the editorial) to the problem 1971C "Clock and Strings", which is a 900 rated problem.

## Problem statement
Given $4$ integers $a, b, c, d$, representing integers on a clock face, with $a, b$ representing the ends of one string and $c, d$, the ends of another, determine if the two strings intersect.

## Method
I solved this by case analysis. Essentially, if any of the integers from $a, b$, were equal to the other two, then the strings interesected. Additionally, if either of $c$ or $d$ was less than or greater than both $a$ and $b$, and the other integer was between, then too did they intersect. If none of these cases were satisfied, then the two strings did not intersect.