# Problem ""
This is my current best solution to the problem 1716A "2-3 moves", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an integer n, determine the minimum number of moves to reach that coordinate on the x-axis, where the only allowable moves are moving to the left or right by 2 or 3 moves. You start at the origin.

## Method
There are a few cases to consider. First, in the special case of 1, it takes two moves to reach it (0 + 3 - 2). Then, if n % 3 == 0 i.e. n is a multiple of 3, then dividng by 3 gives you the minimum number of moves. (As jumping by 2 would increase the number of moves). If n % 3 == 1 (and is not 1), then the number of moves is n //3 + 1 (as you go till 4 away from the position, then jump by 2 two times). For n % 3 == 2, the number of moves is n // 3 + 1 again, as you just ad two after doing n // 3. Also, consider the special case of n // 2 being less than the calculated number of moves. (or n // 2 + 2).