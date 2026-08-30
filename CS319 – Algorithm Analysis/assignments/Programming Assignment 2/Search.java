// libraries
import java.util.Arrays;
import java.util.Random;

public class Search {

    // stopwatch class as provided
    public static class Stopwatch { 
        private final long start;

        public Stopwatch() {
            start = System.nanoTime();
        } 

        public double elapsedTime() {
            long now = System.nanoTime();
            return (now - start) / 1_000_000_000.0; // convert to  nonoseconds (when using normal seconds most of the reuslts were zero except for hte final search so i converted to nano for better precision)
        }
    }



    // generate random numbers for the tests (n,m), count = number of vals to generate 
    private static long[] generateRandomNumbers(int count) {
        Random random = new Random();
        long[] numbers = new long[count];
        for (int i = 0; i < count; i++) {
            numbers[i] = random.nextLong();
        }
        return numbers;
    }


    // linear search method (LS) *
    private static int linearSearch(long[] data, long key) {
        for (int i = 0; i < data.length; i++) {
            if (data[i] == key) {
                return i;
            }
        }
        return -1;
    }


    // Binary search method (BS) *
    private static int binarySearch(long[] data, long key) {
        int L = 0;
        int R = data.length - 1;
        while (L <= R) {
            int mid = L + (R - L) / 2;
            if (data[mid] < key) {
                L = mid + 1;
            } else if (data[mid] > key) {
                R = mid - 1;
            } else {
                return mid;
            }
        }
        return -1;
    }

    // main method for testing all vals and collecting time info to use later

    public static void main(String[] args) {
        //data sizes (n) and search entries (m)
        int[] nValues = {100, 10000, 1000000, 100000000};
        int[] mValues = {50, 1000, 1000, 1000};

        for (int i = 0; i < nValues.length; i++) {
            int n = nValues[i];
            int m = mValues[i];


            // generate and sort data for binary search so it can work correctly
            long[] data = generateRandomNumbers(n);
            Arrays.sort(data);

            // generate search numbers
            long[] searchNumbers = generateRandomNumbers(m);

            // LS time to record ----------------
            Stopwatch totalLinearTimer = new Stopwatch();
            int foundLinear = 0;
            for (long searchNumber : searchNumbers) {
                if (linearSearch(data, searchNumber) != -1) {
                    foundLinear++;
                }
            }
            double totalLinearTime = totalLinearTimer.elapsedTime();
            double avgLinearTimePerN = totalLinearTime / m; // average per dataset size



            // BS time to record ----------------
            Stopwatch totalBinaryTimer = new Stopwatch();
            int foundBinary = 0;
            for (long searchNumber : searchNumbers) {
                if (binarySearch(data, searchNumber) != -1) {
                    foundBinary++;
                }
            }
            double totalBinaryTime = totalBinaryTimer.elapsedTime();
            double avgBinaryTimePerN = totalBinaryTime / m; //  average per dataset size


                // print results to user for this dataset size
            // --------------------------
            
            System.out.println("data size (n): " + n + " | search entries (m): " + m);
            System.out.println("# found in LS: " + foundLinear);
            System.out.println("# found in BS: " + foundBinary);
            System.out.println("total time (LS): " + totalLinearTime + " seconds");
            System.out.println("total time (BS): " + totalBinaryTime + " seconds");
            System.out.println("average time per search for LS (n = " + n + "): " + avgLinearTimePerN + " seconds");
            System.out.println("average time per search for BS (n = " + n + "): " + avgBinaryTimePerN + " seconds");
            System.out.println(); // separate previous runs from the next (can add more for clarity if terminal gets voerloaded with info)
        }
    }
}
