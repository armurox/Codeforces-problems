# Problem 1721A "Image"
This is my current best solution to the problem 1721A "Image", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
Given a 4x4 matrix of values that can vary from a-z (to represent the colour of a pixel), determine the minimum number of moves for every pixel to be made into the same colour. Note: A move is characterized by picking at most two pixels of the same colour and setting them equal to some other colour.

## Method
There are a few cases to consider. The easiest way to realize all the cases is consider the matrix with every pixel a different colour. This will require three moves at bare minimum. First setting two to the same colour (this then becomes another case, with two the same and two different, requiring two moves for the other two). From here, there are two branching pathways. Either set the 3 and then the 4 colour equal to the first two, or set the other two colours equal andt hen make all 4 equal with another move. This gives us two branching pathways where only one move is required. Finally, if every pixel is the same colour already, then 0 moves are required.