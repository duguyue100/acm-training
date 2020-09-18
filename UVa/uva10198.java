// UVa 10198 Counting

import java.math.BigInteger;
import java.util.*;

class Main{
    public static BigInteger two = new BigInteger("2");
    public static void main(String [] args)
    {
        Scanner input = new Scanner(System.in);

        BigInteger[] sums = new BigInteger[1001];

        sums[1] = new BigInteger("2");
        sums[2] = new BigInteger("5");
        sums[3] = new BigInteger("13");

        for (int i=4; i<=1000; i++)
        {
            sums[i] = sums[i-1].multiply(two).add(sums[i-2]).add(sums[i-3]);
        }


        while (input.hasNextInt())
        {
            int n = input.nextInt();

            System.out.println(sums[n].toString());
        }
    }

}
