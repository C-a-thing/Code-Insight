import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        
        StringBuilder sb = new StringBuilder(A);  // representing a mutable sequence of characters
        sb.reverse();  // reversing the characters
        if(A.equals(sb.toString()))  // whether the reversed string is equal to the original
            System.out.println("Yes");
        else
            System.out.println("No");
    }
}

