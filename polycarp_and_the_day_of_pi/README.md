This is my current best solution to the problem 1790A "SPolycarp and the Day of Pi", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

Problem statement: Given an integer (as a string), count how many correct digits of pi there are. The maximum number of digits is 30.

Method: I chose to store the first 30 digits of pi as a string, and then compare the input string digit by digit increasing the number of valid matchings counted until an invalid match was found