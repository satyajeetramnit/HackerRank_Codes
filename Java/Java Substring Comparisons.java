import java.io.*;
import java.util.*;

public class Solution {
    
     public static String getSmallestAndLargest(String s, int k) {
        // String smallest = "";
        // String largest = "";
        
        // Complete the function
        // 'smallest' must be the lexicographically smallest substring of length 'k'
        // 'largest' must be the lexicographically largest substring of length 'k'
        
        String smallest = s.substring(0, k);
        String largest = s.substring(0, k);
        for (int i = 0; i <= s.length() - k; i++) {
            String subStr = s.substring(i, k + i);
            if (smallest.compareTo(subStr) > 0) {
                smallest = subStr;
            } else if (largest.compareTo(subStr) < 0) {
                largest = subStr;
            }
        }
        return smallest + "\n" + largest;
    }
    

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}