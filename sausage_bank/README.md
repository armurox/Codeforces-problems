# Problem 2269A - Sausage Bank
Given two numbers $n$ and $k$, where $k$ is the number of withdrawals in a bank, and $n$ is the number of times the money in the bank doubles, compute the maximum total amount of money the person can have,

# Solution
We effectively greedily compute the largest doubling first, which is $2^(n - k + 1)$, and then the left over simply just singluar doubling's $k - 1$ times.
