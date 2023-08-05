This is my current best solution to the problem 1776A "Walking Boy", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

Problem statement: Given an array of integers, is it possible for an interval of at least two 120's to exist between two consecutive points on the array, if implicitly the array starts at 0 and ends at 1440.

Method: Find the maximum consective interval, if it is 240 or greater, then it is possible. If this is not the case, and it is greater than or equal to 120, you check the second maximum interval, and if it is also greater than or equal to 120, then it is possible, else it is not.