import java.util.*;
import java.text.*;
import java.text.NumberFormat;

public class Solution {
    
    static String currencyformat(Locale locale, double payment){    
    NumberFormat formatter = NumberFormat.getCurrencyInstance(locale);  
    String currency = formatter.format(payment);  
    return currency;  
    }  
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();
        
        // Write your code here.
        NumberFormat inFormat = NumberFormat.getCurrencyInstance(new Locale("en", "in"));
        
        String us = currencyformat(Locale.US, payment);  
        String india = inFormat.format(payment);
        String china = currencyformat(Locale.CHINA, payment);
        String france = currencyformat(Locale.FRANCE, payment);
        
        System.out.println("US: " + us);
        System.out.println("India: " + india);
        System.out.println("China: " + china);
        System.out.println("France: " + france);
    }
}
