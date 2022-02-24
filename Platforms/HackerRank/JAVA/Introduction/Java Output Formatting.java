import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("================================");
        for(int i=0;i<3;i++)
        {
            String s1=sc.next();
            int x=sc.nextInt();
            //Complete this line
            System.out.printf("%-15s%03d%n",s1,x);  
            /*Each String is left-justified with trailing whitespace through the first  characters. The leading digit of the integer is the  character, and each integer that 
            was less than  digits now has leading zeroes.*/
        }
        System.out.println("================================");
    }
}
