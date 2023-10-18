# Problem 1722C "Word Game"
This is my current best solution to the problem 1722C "Word Game", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given 3 arrays of strings, (which represent the words written down be 3 different people in a word game), determine then number of points each person obtains. If a person does not share a particular word with either of the other two, then that word nets him 3 points, if he shares it with one other person, it nets him 1 point, and in the final case it nets him no points.

## Method
Essentially, storing each array in a set data structure (an unordered set in the case of C++, as that is the one that hashes its values), allows one to loop through each set individually, quickly checking if a word is present in either of the other two sets. If it is in none, then increment his point variable by 3, else if it is shared by either of the other two sets (but not both), increment his point variable by 1, else just continue through the loop. Do this for all three sets, and print out the final calculated point values. 