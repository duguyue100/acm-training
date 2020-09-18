// UVa 1647 Computer Transformation

import java.math.BigInteger;
import java.util.*;

class Main{
    public static BigInteger two = new BigInteger("2");
    public static void main(String [] args)
    {
        Scanner input = new Scanner(System.in);

        BigInteger [] nums = new BigInteger[1001];

        nums[1] = new BigInteger("0");
        nums[2] = new BigInteger("1");
        nums[3] = new BigInteger("1");
        nums[4] = new BigInteger("3");

        for (int i=5; i<=1000; i++)
        {
            nums[i] = nums[i-1].add(nums[i-2].multiply(two));
        }

        while (input.hasNextInt())
        {
            System.out.println(nums[input.nextInt()].toString());
        }

    }
}
