// UVa 1226 Numerical surprises

import java.math.BigInteger;
import java.util.*;

class Main{
    public static BigInteger two = new BigInteger("2");
    public static void main(String [] args)
    {
        Scanner input = new Scanner(System.in);

        int T = input.nextInt();

        for (int t=1; t<=T; t++)
        {
            BigInteger N = new BigInteger(input.next());
            BigInteger P = new BigInteger(input.next());

            System.out.println(P.mod(N).toString());
        }

    }
}
