// UVa 10070 Leap Year or Not Leap Year and ...

import java.math.BigInteger;
import java.util.*;

class Main{
    public static BigInteger four = new BigInteger("4");
    public static BigInteger oneh = new BigInteger("100");
    public static BigInteger fourh = new BigInteger("400");
    public static BigInteger fifteen = new BigInteger("15");
    public static BigInteger fiftyf = new BigInteger("55");

	public static void main(String[] args)
	{
        Scanner input = new Scanner(System.in);

        String num = input.nextLine();
        BigInteger year = new BigInteger(num);

        print_result(year);
        while(input.hasNext())
        {
            num = input.nextLine();
            year = new BigInteger(num);

            System.out.printf("\n");
            print_result(year);
        }
	}

    public static void print_result(BigInteger year)
    {
        boolean leap_year = false;
        boolean flag = false;

        if (year.mod(four).intValue() == 0)
        {
            if (year.mod(fourh).intValue() == 0)
            {
                leap_year = true;
            }
            else if (year.mod(oneh).intValue() == 0)
            {
                leap_year = false;
            }
            else
            {
                leap_year = true;
            }
        }

        if (leap_year)
        {
            flag = true;
            System.out.printf("This is leap year.\n");
        }

        // if huluculu
        if (year.mod(fifteen).intValue() == 0)
        {
            flag = true;
            System.out.printf("This is huluculu festival year.\n");
        }
        
        // if bulukulu
        if (leap_year && year.mod(fiftyf).intValue()==0)
        {
            flag = true;
            System.out.printf("This is bulukulu festival year.\n");
        }

        if (leap_year == false && flag == false)
        {
            System.out.printf("This is an ordinary year.\n");
        }
    }

}
