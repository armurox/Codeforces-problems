# Problem 2030B "Minimize Oneness"
This is my current best solution to the problem 2030B "Minimize Oneness", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given an integer $n$, which represents the length of a binary string $s$. Generate a binary string with length n that minimizes the $\textit{oneness}$ of the string, where oneness is defined to be the difference between the number of substrings with only 0 and the number of substring with only one.

## Method
The answer here is to essentially provide a string with one $1$ and all the rest to be $0$'s. In that case the number of substrings with at least one $1$ will always be one more than the ones with only zeros, as all the zero subsequences are a part of it (with one), in addition to just a $1$ subsequence. The only possible oneness that is smaller is $0$, but this is not possible to obtain, because the moment you have any number of one's and zeros, they zeros will always have an equivalent number of subsequences within the onnes, in addition to all the one's on their own.
