import java.util.*;

public class ural1011 {
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		
		double p=input.nextDouble()/100.0;
		double q=input.nextDouble()/100.0;
		
		double m=1;
		
		while (true)
		{
			double n1=Math.floor(m*q*10000+0.5)/10000;
			double n2=Math.floor(m*p*10000+0.5)/10000;
			
			int n=(int)n1;
			
			if (n>n2 && n<n1 && n>=1)
			{
				System.out.print((int)m);
				break;
			}		
			m++;
		}
	}
}
