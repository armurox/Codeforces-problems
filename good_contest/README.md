# Problem 2266A
The question is, given a contest with 3 problems, and an array which tells you the number of people who solved each problem, determine the minimum possible number of people who did not solve all the problems.

# Solution
The answer here is relatively simple. In the array, find the minimum number. i.e., lets say yoy have the array $9, 8, 7$, where there were $9$ people total. You know, since you're minimizing it, that at minimum, $2$ people could not solve every problem because $9 - 7 = 2$. In particular, you are finding the minimum here, as the maximum would be $3$ if you assume $8$ and $7$ is due to different people not solving the problem.
 