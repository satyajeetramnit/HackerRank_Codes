import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        
        String rev = "";
        for (int i = A.length() - 1; i >= 0; i--) {
            rev += A.charAt(i);
        }
        System.out.println(A.equalsIgnoreCase(rev) ? "Yes" : "No");
    }
}