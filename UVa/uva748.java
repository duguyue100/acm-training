import java.math.BigDecimal;
import java.util.*;
public class uva748 {
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		
		while (input.hasNext())
		{
			String R=input.next();
			String N=input.next();
			BigDecimal result=new BigDecimal(R);
			
			result=result.pow(Integer.parseInt(N));
			
			String resultString=result.toPlainString();
			if (resultString.charAt(0)=='0')
				resultString=resultString.substring(1);
			
			int index=resultString.length()-1;
			while (resultString.charAt(index)=='0')
			{
				index--;
			}
			
			resultString=resultString.substring(0, index+1);
			
			System.out.println(resultString);
		}
	}
}
