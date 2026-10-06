# Problem 2266B - Three Piles
Given three piles of stones $a, b, c$, where the final score is $|a - b|$, find the final score when person $a$ wants to maximize the score, and person b wants to minimize it. They can take any number of stones from the third pile in a turn. When both players take no more stones consecutively, then the game ends and we compute the score

# Solution
Since $a$ wants to maximize the solution, you basically check if the current absolute difference between a and b is greater than if you were to add on all of c to a. If it is, leave the game as is, otherwise add on all of c to a, and give that as the final score. Since a goes first, b basically never has the opportunity to make a decision.
