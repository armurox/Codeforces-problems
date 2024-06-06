# Problem 1634A "Reverse and Concatenate"
This is my current best solution to the problem "Reverse and Concatenate", which is an 800 rated problem.

## Problem statement
Given a string, and an integer $k$, which represents the number of operations $k$ you can carry out on the string, determine the number of possible stringst hat could exist **at the end** of applying the operations $k$ times. an operation consists of taking a string, reversing it, and adding the reverse string to either then end or the beginning of the string.

## Method
There are three main cases to consider. If the number of operations is $0$, then clearly the only string that exists is the one you have. Otherwise, if the string is palindromic at the start, then the number of possible strings is again precisely $1$, because the same string gets generated, regardless of where you put the reverse string, and it remains palidnromic. Otherwise, the answer is $2$, as, after the first operation, the string will be made palindromic, restricting the possible strings to the first possible choice you made, where you had two possible choices.