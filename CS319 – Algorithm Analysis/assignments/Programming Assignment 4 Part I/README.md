# HuffmanEncoder
This program reads input from a file and loads the letters as keys and their frequencies as values, it will also convert specific items into special characters for example: `-' for space, `.' for period, `!' for new line, and `+' for end-of-message. Then the program prints the results to the terminal for the user to view/verify.

First, we create a hashtable to store the key-value pairs. Then, we use the specified file path (which can be changed) to read input character by character while accounting for special characters(listed above). These values are dynamically loaded into the hashtable initialized earlier.

How to Run:
You can run this program in VS Code by clicking run in the top left.
