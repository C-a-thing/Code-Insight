import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        int AL = A.length();
        int BL = B.length();
        String fstltr = A.substring(0,1);
        String remltr = A.substring(1);
        String A1 = fstltr.toUpperCase() + remltr;
        String fstltr1 = B.substring(0,1);
        String remltr1 = B.substring(1);
        String B1 = fstltr1.toUpperCase() + remltr1;
        System.out.println(AL + BL);
        if(A.compareTo(B) <= 0)
            System.out.println("No");
        else
            System.out.println("Yes");
        System.out.println(A1 + " " + B1);
    }
}



