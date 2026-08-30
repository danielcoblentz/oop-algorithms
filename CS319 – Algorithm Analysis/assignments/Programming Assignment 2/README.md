# Search program

This java program demonstrates and compares the performance of **Linear Search** and **Binary Search** on large randomly generated arrays.

## How it works

1. **Data Generation**  
   - We generate an array (`long[]`) of size `n` with random `long` values.
   - This array is then sorted to allow  for binary search to function correctly.

2. **Search Entries**  
   - We generate another array (`long[]`) of size `m`, also filled with random values. each value will be searched for in the data array using both searching algorithms mentioned above.

3. **Time Measurement**  
   - A `Stopwatch` class is used to measure how long it takes to run searches using linear search, and then searches using binary search. It reads `System.nanoTime()` rather than the millisecond clock, because at these sizes a millisecond clock reports zero for most of the runs.
  


4. **Output**  
   - Data size (`n`) and number of search entries (`m`)
   - Number of found items in both searches
   - Total time taken in seconds for each search algorithm, and the average per search



## how to run

1. **Ensure java is installed**  
   - Java 8 or higher is recommended.  
   - Check by running `java -version` in your terminal.

2. **Run the program**  
   ```bash
   javac Search.java
   java Search
   ```
   - or click `run` if using VS Code

The file named `260209` in this folder is the `Stopwatch.java` reference class from the course textbook site, downloaded without its extension. `Search.java` does not use it; it has its own nested `Stopwatch`.
