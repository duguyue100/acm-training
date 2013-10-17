import java.util.*;
public class uva10324 {
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		
		int counter=1;
		while (input.hasNext())
		{
			String str=input.next();
			
			if (!input.hasNext()) break;
			
			int[] a=new int[1000000];
			
			int sum=0;
			for (int i=0;i<str.length();i++)
			{
				sum+=(int)(str.charAt(i)-'0');
				a[i]=sum;
			}
			
			int n=input.nextInt();
			System.out.println("Case "+counter+":");
			for (int i=1;i<=n;i++)
			{
				int n1=input.nextInt();
				int n2=input.nextInt();
				if (n1>n2)
				{
					int t=n1;
					n1=n2;
					n2=t;
				}
				
				if (((a[n1]==a[n2])&&(str.charAt(n1)!='1')) || 
					((a[n1]-a[n2]==n1-n2)&&(str.charAt(n1)!='0')))
					System.out.println("Yes");
				else System.out.println("No");
			}
			counter++;
		}
	}
}
