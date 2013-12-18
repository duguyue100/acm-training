import java.math.BigInteger;
import java.util.*;
public class ural424 {
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		
		BigInteger sum=new BigInteger("0");
		String num=input.nextLine();
		while (!num.equals("0"))
		{
			sum=sum.add(new BigInteger(num));
			num=input.nextLine();
		}
		
		System.out.println(sum.toString());
	}
}
