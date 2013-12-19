import java.math.BigInteger;
import java.util.*;

public class uva10494 {
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		
		while (input.hasNext())
		{
			String n1=input.next();
			String op=input.next();
			String n2=input.next();
			
			BigInteger n=new BigInteger(n1);
			if (op.charAt(0)=='/')
				n=n.divide(new BigInteger(n2));
			else
				n=n.mod(new BigInteger(n2));
			
			System.out.println(n);
		}
	}
}
