// UVa 10430 Dear GOD

import java.math.BigInteger;
import java.util.*;

class Main{
    public static BigInteger one = new BigInteger("1");
    public static void main(String [] args)
    {
        Scanner input = new Scanner(System.in);

        System.out.println("Dear GOD, Pardon Me");

        BigInteger T = new BigInteger(input.next());
        int N = input.nextInt();

        cal(T, N);

        while (input.hasNext())
        {
            T = new BigInteger(input.next());
            N = input.nextInt();
            System.out.println();
            cal(T, N);
        }

    }

    public static void cal(BigInteger T, int N)
    {
        if (T.toString().equals("1"))
        {
            System.out.printf("X = %s\n", N);
            System.out.printf("K = %s\n", T.toString());
        }
        else
        {
            BigInteger K = T.pow(N);

            BigInteger X = K.subtract(one).divide(T.subtract(one)); 

            System.out.printf("X = %s\n", X.toString());
            System.out.printf("K = %s\n", K.toString());
        }
    }
}
