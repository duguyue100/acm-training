// UVa 10992 The Ghost of Programmers

import java.math.BigInteger;
import java.util.*;

class Main{
    public static BigInteger start = new BigInteger("2148");
    public static BigInteger two = new BigInteger("2");
    public static BigInteger five = new BigInteger("5");
    public static BigInteger seven = new BigInteger("7");
    public static BigInteger eleven = new BigInteger("11");
    public static BigInteger fifteen = new BigInteger("15");
    public static BigInteger twenty = new BigInteger("20");
    public static BigInteger twentyeight = new BigInteger("28");
    public static BigInteger thirtysix = new BigInteger("36");
    public static BigInteger four = new BigInteger("4");
    public static BigInteger fourh = new BigInteger("400");
    public static BigInteger oneh = new BigInteger("100");
    public static BigInteger zero = new BigInteger("0");
    public static void main(String [] args)
    {
        Scanner input = new Scanner(System.in);

        boolean flag = false;
        do
        {
            String num = input.next();
            if (num.equals("0")) break;

            if (flag == true)
            {
                System.out.println();
            }
            else
            {
                flag = true;
            }

            System.out.println(num);

            BigInteger n = new BigInteger(num);
            n = n.subtract(start);

            if (n.compareTo(zero) == -1)
            {
                System.out.println("No ghost will come in this year");
            }
            else
            {
                boolean has_ghost = false;
                if (n.mod(two).toString().equals("0"))
                {
                    System.out.println("Ghost of Tanveer Ahsan!!!");
                    has_ghost = true;
                }
                if (n.mod(five).toString().equals("0"))
                {
                    System.out.println("Ghost of Shahriar Manzoor!!!");
                    has_ghost = true;
                }
                if (n.mod(seven).toString().equals("0"))
                {
                    System.out.println("Ghost of Adrian Kugel!!!");
                    has_ghost = true;
                }
                if (n.mod(eleven).toString().equals("0"))
                {
                    System.out.println("Ghost of Anton Maydell!!!");
                    has_ghost = true;
                }
                if (n.mod(fifteen).toString().equals("0"))
                {
                    System.out.println("Ghost of Derek Kisman!!!");
                    has_ghost = true;
                }
                if (n.mod(twenty).toString().equals("0"))
                {
                    System.out.println("Ghost of Rezaul Alam Chowdhury!!!");
                    has_ghost = true;
                }
                if (n.mod(twentyeight).toString().equals("0"))
                {
                    System.out.println("Ghost of Jimmy Mardell!!!");
                    has_ghost = true;
                }
                if (n.mod(thirtysix).toString().equals("0"))
                {
                    System.out.println("Ghost of Monirul Hasan!!!");
                    has_ghost = true;
                }
                if (leap_year(new BigInteger(num)))
                {
                    System.out.println("Ghost of K. M. Iftekhar!!!");
                    has_ghost = true;
                }

                if (has_ghost == false)
                {
                    System.out.println("No ghost will come in this year");
                }
            }

            
        }while (input.hasNext());
    }

    public static boolean leap_year(BigInteger n)
    {
        if (n.mod(oneh).toString().equals("0"))
        {
            if (n.mod(fourh).toString().equals("0"))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if (n.mod(four).toString().equals("0"))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}
