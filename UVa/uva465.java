import java.math.BigInteger;
import java.util.*;

public class uva465 {
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		
		while (input.hasNext())
		{
			String n1=input.next();
			String op=input.next();
			String n2=input.next();
			
			System.out.println(n1+" "+op+" "+n2);
			
			BigInteger intmax=new BigInteger(Integer.toString(Integer.MAX_VALUE));
			
			BigInteger m1=new BigInteger(n1);
			BigInteger m2=new BigInteger(n2);
			if (m1.compareTo(intmax)==1)
				System.out.println("first number too big");
			
			if (m2.compareTo(intmax)==1)
				System.out.println("second number too big");
			
			if (op.charAt(0)=='+')
				m1=m1.add(m2);
			else m1=m1.multiply(m2);
			
			if (m1.compareTo(intmax)==1)
				System.out.println("result too big");
			
		}
	}
}
