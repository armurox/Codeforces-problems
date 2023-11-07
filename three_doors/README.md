# Problem 1709A "Three Doors"
This is my current best solution to the problem 1709A "Three Doors", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a key and three doors, where a key unlocks a door if its number matches with the door, and two other doors possess keys behind them, determine if it is possible to unlock all the doors.

## Method
This problem is essentially just three cases. If there are no keys behind the door that is unlocked by the first number, then it is not possible. Second, if there is a key behind that door, but there is no key behind the door it unlock, then it is also not possible to unlock all the doors. That leaves the third case, which does allow for all the doors to be unlocked. 