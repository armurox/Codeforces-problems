# Problem 1858A "Buttons"

This is my current best solution to the problem 1858A "Buttons", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a set of buttons a, b, c and a game which only two players can play such that player 1 can press buttons a and c only, and player 2 can press b and c only, with each button being allowed to be pressed at most once, which player would win a game, if winning counts as being the last person to press a button.

## Method
There are 4 main cases to consider. First, when a and b are not equal, whichever one is greater, will correspond to the player who can press it, as c will not matter in this case, as both player 1 and 2 share it. If a and b are equal, then if c is odd, the first player will win, as player 2 will be the first person to switch away from c. Finally, if c is even, then player 2 will win, as player 1 will be the first person to switch away from c.