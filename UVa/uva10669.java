// UVa 10669 Three powers

import java.math.BigInteger;
import java.util.*;

class Main{
    public static BigInteger three = new BigInteger("3");
    public static void main(String [] args)
    {
        Scanner input = new Scanner(System.in);

        while (input.hasNext())
        {
            Long idx = Long.parseUnsignedLong(input.next());

            if (idx == 0) break;
            idx --;

            String b_str = Long.toBinaryString(idx);

            System.out.printf("{ ");
            int power = 0;
            
            for (int i=b_str.length()-1; i>=0; i--)
            {
                if (b_str.charAt(i) == '1')
                {
                    BigInteger num = three.pow(b_str.length()-1-i);
                    
                    if (i == 0)
                    {
                        System.out.printf("%s ", num.toString());
                    }
                    else
                    {
                        System.out.printf("%s, ", num.toString());
                    }
                }
            }

            System.out.println("}");
        }

    }
}
