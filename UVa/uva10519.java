// UVa 10519 !! Really Strange !!

import java.math.BigInteger;
import java.util.*;

class Main{
    public static BigInteger two = new BigInteger("2");
    public static void main(String [] args)
    {
        Scanner input = new Scanner(System.in);

        while (input.hasNext())
        {
            String num = input.next();

            if (num.equals("0"))
            {
                System.out.println(1);
            }
            else if (num.equals("1"))
            {
                System.out.println(2);
            }
            else if (num.equals("2"))
            {
                System.out.println(4);
            }
            else if (num.equals("3"))
            {
                System.out.println(8);
            }
            else
            {
                BigInteger base = new BigInteger(num);
                BigInteger dec = base.subtract(two);
                BigInteger result = base.multiply(base).subtract(dec);
                System.out.println(result.toString());
            }
        }
    }

}
