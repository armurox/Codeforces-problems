# Problem 2037B "Intercepted Inputs"
This is my current best solution to the problem 2037B "Intercepted Inputs", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Your are given an input stream of $k$ integers, as well as the integer $k$. The stream of integers (not including $k$ itself) initially represented $n$, $m$, and an $n \times m$ grid of integers. Determine a possible configuration of $n \times m$.

## Method
First, you know that the actual number of integers is $k - 2$, as two of the integers are used to represent $n$ and $m$. So, you are looking for two integers in the pull, such that the result of their product is $k - 2$. Then, the problem essentially turns into a leetcode style [two sum](https://leetcode.com/problems/two-sum/description/?envType=study-plan-v2&envId=top-interview-150), where you are searching for a product instead of a sum.