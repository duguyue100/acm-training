import java.util.*;
public class uva10424 {
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		
		while (input.hasNextLine())
		{
			String name1=input.nextLine().toLowerCase();
			String name2=input.nextLine().toLowerCase();
			
			int sum=0;
			for (int i=0;i<name1.length();i++)
				if (name1.charAt(i)>='a' && name1.charAt(i)<='z')
					sum+=(int)(name1.charAt(i)-'a'+1);
			double n1=calculateValue(Integer.toString(sum));
			sum=0;
			for (int i=0;i<name2.length();i++)
				if (name2.charAt(i)>='a' && name2.charAt(i)<='z')
					sum+=(int)(name2.charAt(i)-'a'+1);
			double n2=calculateValue(Integer.toString(sum));
			
			if (n1>=n2) System.out.printf("%.2f %%\n", n2/n1*100);
			else System.out.printf("%.2f %%\n", n1/n2*100);
		}
	}
	
	public static double calculateValue(String str)
	{
		if (str.length()==1) return Double.parseDouble(str);
		else
		{
			int sum=0;
			for (int i=0;i<str.length();i++)
				sum+=(int)(str.charAt(i)-'0');
				
			return calculateValue(Integer.toString(sum));
		}
	}

}
