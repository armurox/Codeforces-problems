# Problem 1981A "Turtle and Piggy Are Playing a Game"
This is my current best solution to the problem "Turtle and Piggy Are Playing a Game ", which is an 800 rated problem.

## Problem statement
Given two integers $l$ and $r$, find the maximum score from choosing an $x$ between them, such that the number of divisions of $x$ by an integer $p \ge 2$ is maximized (in order to make $x = 1$ ).

## Method
To maximize this number, we simply make $x$ the maximum power of $2$ that is less than $r$. Then, the score is simply the power of $2$. (This works as $2$ is the minimum divisor here, and constantly dividing by it, will give the maximum number of possible divisions).