class Solution
{    
    //Function is to check whether two strings are anagram of each other or not.
    public static boolean isAnagram(String a,String b)
    {
        
        // Your code here
      
        //converting string into char array
        char[] c1 = a.toCharArray();
        char[] c2 = b.toCharArray();
      
        //sorting char array
        java.util.Arrays.sort(c1);
        java.util.Arrays.sort(c2);
      
        //store char array into string
        String s1 = new String(c1);
        String s2 = new String(c2);
        return s1.equals(s2);
    }
}
