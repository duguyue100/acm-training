import java.math.BigInteger;
import java.util.*;
public class uva10106 {
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		
		String num1="";
		String num2="";
		
		while (input.hasNextLine())
		{
			num1=input.nextLine();
			num2=input.nextLine();
			BigInteger result=new BigInteger(num1);
			
			result=result.multiply(new BigInteger(num2));
			
			System.out.println(result);
		}
	}
}
