import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        // Write your code here.
        String[] tokens = s.split("[^a-zA-Z]");
         int noTokens = 0;
        
        for (int i=0; i<tokens.length; ++i) 
            if (tokens[i].length() > 0) 
                noTokens ++;
             
        System.out.println(noTokens);
        
        for (int i=0; i<tokens.length;++i)
            if (tokens[i].length() > 0)
                System.out.println(tokens[i]);
                
        scan.close();
    }
}

