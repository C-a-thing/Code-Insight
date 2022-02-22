import java.util.*;
import java.io.*;



class Solution{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();

        for(int i=0;i<t;i++)    // test cases
        {

            try
            {
                long x=sc.nextLong();
                System.out.println(x+" can be fitted in:");
                if(x>=-128 && x<=127)System.out.println("* byte");  // A byte is an 8-bit signed integer.
                //Complete the code
                if(x>=-32768 && x<=32767)
                    System.out.println("* short");  // A short is a 16-bit signed integer.
                
                if(x>=-Math.pow(2,31) && x<=(Math.pow(2,31)-1))
                   System.out.println("* int"); // An int is a 32-bit signed integer.

                if(x>=-Math.pow(2,63) && x<=(Math.pow(2,63)-1))
                   System.out.println("* long");  // A long is a 64-bit signed integer.

            }
            catch(Exception e)
            {
                System.out.println(sc.next()+" can't be fitted anywhere.");   // the number cannot be stored in one of the four aforementioned primitives
            }

        }
    }
}



