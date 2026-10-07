# Problem 2267A
Given a string, convert it into a palindrome by replacing any one character in each operation, minimizing the number of operations. Then, print out the number of operations

# Solution
Loop through the first half of the array, checking if it matches up with its pair in the second half. If it does not, and does not match the character you have to replace it, then you have to carry out two operations, otherwise one. If the two characters do match, then no new operations have to be carried out for that pair. Sum up the number of operations in this way, and at the end, print out the answer.
