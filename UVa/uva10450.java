// UVa 10450 World Cup Noise

import java.math.BigInteger;
import java.util.*;

class Main{

	public static void main(String[] args)
	{
        Scanner input = new Scanner(System.in);

        ArrayList<BigInteger> fibs = new ArrayList<BigInteger>();
        fibs.add(new BigInteger("1"));
        fibs.add(new BigInteger("2"));

        BigInteger fn = new BigInteger("3");
        while (fibs.size() <= 60)
        {
            fibs.add(fn);
            fn = fn.add(fibs.get(fibs.size()-2));
        }

        int T = input.nextInt();

        for (int t=1; t<=T; t++)
        {
            System.out.println("Scenario #"+t+":");
            int idx = input.nextInt();

            System.out.println(fibs.get(idx).toString());
            System.out.println();
        }

	}

}
