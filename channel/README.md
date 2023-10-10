# Problem 1863A "Channel"
This is my current best solution to the problem 1863A "Channel", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given an array of pluses and minuses, as well as a person's total number of subscribers and the initial number online, (where + means another subscriber came online, and minus means the opposite), determine whether or not it is guaranteed that all the subscribers saw a message posted at some point, whether it was possible, or finally, impossible.

## Method
For the guaranteed case, one simply needs to keep track of the total number of subscribers that are online at any point, and if it is ever equal to the number of subscribers, then every subscriber had to have seen the message. If this is not the case, one can keep track of the total number of possible unique subscribers by ignoring minuses and just adding one every time a plus is seen. If this ever hits the total number of subscribers, and at no point were all the subscribers online, then one can claim that it is possible all the subcribers saw the message. Finally, if neither of the previously described conditions pass, then it was not possible for every subscriber to see the message.