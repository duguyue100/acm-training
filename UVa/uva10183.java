// UVa 10183 How many Fibs?

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
        while (fn.toString().length() <= 100)
        {
            fibs.add(fn);
            fn = fn.add(fibs.get(fibs.size()-2));
        }

        while (input.hasNext())
        {
            String a_str = input.next();
            String b_str = input.next();
            if (a_str.equals("0") && b_str.equals("0")) break;

            BigInteger a = new BigInteger(a_str);
            BigInteger b = new BigInteger(b_str);

            int count = 0;
            for (int i=0; i<fibs.size(); i++)
            {
                if (fibs.get(i).compareTo(a) != -1 && fibs.get(i).compareTo(b) != 1)
                {
                    count++;
                }
                else if (b.compareTo(fibs.get(i)) == -1)
                {
                    break;
                }
            }

            System.out.println(count);

        }

	}

}
