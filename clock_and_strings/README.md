# Problem 1971C "Clock and Strings"
This is my current best solution (after looking at the editorial) to the problem 1971C "Clock and Strings", which is a 900 rated problem.

## Problem statement
Given $4$ integers $a, b, c, d$, representing integers on a clock face, with $a, b$ representing the ends of a red string and $c, d$, the ends of a blue string, determine if the two strings intersect.

## Method
I solved this by case analysis. Essentially, if any of the integers from $a, b$, were equal to the other two, then the strings interesected. Additionally, if either of $c$ or $d$ was less than or greater than both $a$ and $b$, and the other integer was between, then too did they intersect. If none of these cases were satisfied, then the two strings did not intersect.

## Editorial Method
The editorial method here is particularly interesting (and quite simple too!). The idea is to loop through from 1 through to 12, and append to a string whenever you find $a$ or $b$ to be a red string element, and vice versa for a blue string integer. If they interweave each other, then they intersect, if not, then they do not.