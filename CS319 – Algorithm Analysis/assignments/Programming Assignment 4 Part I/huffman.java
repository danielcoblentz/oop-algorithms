import java.io.*;
import java.util.*;

public class huffman {
    public static void main(String[] args) {
        String filePath = "test/msgspec.txt";  // link to demo file (change path as needed for other files/testing program)
        Map<Character, Integer> frequencyTable = new HashMap<>();

        try (BufferedReader br = new BufferedReader(new FileReader(filePath))) {
            int ch;
            while ((ch = br.read()) != -1) {  // read character by character 
                char letter = (char) ch;

                if (letter == '\r') continue;           // *seperate case in windows line endings it counts as a seperate charcter "/r"

                if (letter == ' ') letter = '-';        // map space to '-'
                else if (letter == '\n') letter = '!'; // map new line to '!'

                // Update frequency table
                frequencyTable.put(letter, frequencyTable.getOrDefault(letter, 0) + 1);
            }
        } catch (IOException e) {
            System.out.println("issue reading file: " + e.getMessage());//debugging
        }



        // add a + for end of file (should only be one per file)
        frequencyTable.put('+', frequencyTable.getOrDefault('+', 0) + 1);
        // Print frequency table
        System.out.println("Frequency table:");
        for (Map.Entry<Character, Integer> entry : frequencyTable.entrySet()) {
            System.out.println(entry.getKey() + " " + entry.getValue());
        }
    }
}
