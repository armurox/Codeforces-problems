# Problem 1849A "Morning Sandwich"

This is my current best solution to the problem 1849A "Morning Sandwich", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given b bread pieces, c cheese piece, and h ham pieces, what is the maximum number of layers a sandwich can be, if the first and last layers are bread pieces, and every layer after alternates with cheese or ham, followed by bread, and then again cheese or ham.

## Method
There are two main cases to consider. When there are more bread pieces than the sum of the cheese and ham, and when there are less. When there are more bread pieces, the total number of layers is limited by two times the cheese and ham sum, plus the additional bread piece. In the second case, the sum is limited by the number of bread pieces, which we multiply by 2 and subtract by 1, as the bread wraps the cheese, not the other way around.