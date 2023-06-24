# Bonus-Question
recursive permutation problem could be implemented using backtracking.

This solution swaps characters in a string using the "Swap" function.
The "RecursivePermute" function generates permutations by recursively swapping characters and backtracking.
It takes the string, starting index, and ending index as parameters.
To find all permutations, the "Permute" function calculates the length of the string and calls "RecursivePermute".
The solution avoids the need for an "ExchangeCharacters" function.
It optimizes the code by eliminating the strlen function inside the loop.
