// UVa 713 Adding Reversed Numbers

import java.math.BigInteger;
import java.util.*;

class Main{
    public static void main(String [] args)
    {
        Scanner input = new Scanner(System.in);

        int T=input.nextInt();

        for (int t=1; t<=T; t++)
        {
            String num1 = input.next();
            String num2 = input.next();

            num1 = reverseString(num1);
            num2 = reverseString(num2);

            BigInteger n1 = new BigInteger(num1);
            BigInteger n2 = new BigInteger(num2);

            n1 = n1.add(n2);

            BigInteger result = new BigInteger(reverseString(n1.toString()));

            System.out.printf("%s\n", result.toString());
        }
    }

    public static String reverseString(String str)
    {
        String newString = "";

        for (int i=str.length()-1; i>=0; i--)
        {
            newString += str.charAt(i);
        }

        return newString;
    }
}
