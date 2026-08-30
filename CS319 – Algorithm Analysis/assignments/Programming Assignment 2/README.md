# Search program

This java program demonstrates and compares the performance of **Linear Search** and **Binary Search** on large randomly generated arrays.

## How it works

1. **Data Generation**  
   - We generate an array (`long[]`) of size `n` with random `long` values.
   - This array is then sorted to allow  for binary search to function correctly.

2. **Search Entries**  
   - We generate another array (`long[]`) of size `m`, also filled with random values. each value will be searched for in the data array using both searching algorithms mentioned above.

3. **Time Measurement**  
   - A `Stopwatch` class is used to measure how long it takes to run searches using linear search, and then searches using binary search. (measured in nano seconds becuase if using seconds most of the time(s) will be zero)
  


4. **Output**  
   - Data size (`n`) and number of search entries (`m`)
   - Number of found items in both searches
   - Total time taken (in nanoseconds) for each search algorithm and the average



## how to run

1. **Ensure java is installed**  
   - Java 8 or higher is recommended.  
   - Check by running `java -version` in your terminal.

2. **Run the program**  
   ```bash
   javac Search.java
   ```
   - or click `run` if using VS-Code
