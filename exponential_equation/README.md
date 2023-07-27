This is my current best solution to the problem 1787A "Exponential Equation", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

Problem statement: Given an integer n, find x and y such that x^y * y + y^x * x = n.

Method: The solution to this problem is a relatively simple realization. Given any number n, we can mere set x^y *y to be n / 2 by picking either x or y to be n / 2 and the other to be 1. This then also hold for y^x * x. Additionally, any n that is not divisible by 2, will not be valid, as it is not possible to do this to it.