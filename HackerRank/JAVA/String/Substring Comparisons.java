import java.util.Scanner;

public class Solution {

    public static String getSmallestAndLargest(String s, int k) {
        String smallest = "";
        String largest = "";
        
        // Complete the function
        // 'smallest' must be the lexicographically smallest substring of length 'k'
        // 'largest' must be the lexicographically largest substring of length 'k'
        java.util.List<String> a = new java.util.ArrayList<>();  // creating an ArrayList of String

        for(int i=0;i<s.length()-k+1;i++)
                a.add(s.substring(i,i+k));  // adding each substring in the List accordingly
        
        java.util.Collections.sort(a);  // sorting the list in ascending order
        smallest = a.get(0);  // smallest substring retrieved
        largest = a.get(a.size()-1);  // largest substring retrieved
        
        return smallest + "\n" + largest;
    }

