# Problem 1895A "Treasure Chest"
This is my current best solution to the problem 1895A "Treasure Chest", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are given three integers x, y and k, which represent the positions of a chest, the key to the chest, and the maximum distance a chest can be carried when it is picked up. Determine the minimum path to open the chest, if you need to insert a key into the chest.

## Method
There are three main cases to consider. The first is when we consider the case of the chest being before the key, and we are able to move the chest to the key (i.e. y - x is less than or equal to k and greater than or equal to 0). In this case, we just use y as the minimum path, as no backtracking is required. On the other hand, given we have the same state, but y - x is greater than k, we can pick up the chest, move it closer to y and then move to the key and back. So, the total distance moved in this case become y + diff which is y - (x + k). In the final case, when x > y, the max distance is just y + (x - y) i.e. x itself.