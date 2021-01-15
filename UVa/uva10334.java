// UVa 10334 Ray Through Glasses

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
        while (fibs.size() <= 1000)
        {
            fibs.add(fn);
            fn = fn.add(fibs.get(fibs.size()-2));
        }

        while (input.hasNextInt())
        {
            int idx = input.nextInt();

            System.out.println(fibs.get(idx).toString());
        }

	}

}
