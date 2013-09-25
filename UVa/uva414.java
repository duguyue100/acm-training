import java.util.*;
public class uva414 {
	public static void main(String[] agrs)
	{
		Scanner input=new Scanner(System.in);
		
		int n=Integer.parseInt(input.nextLine());
		while (n!=0)
		{
			int[] a=new int[20];
			int min=100;
			for (int i=1;i<=n;i++)
			{
				String st=input.nextLine();
				int count=0;
				for (int j=0;j<st.length();j++)
					if (st.charAt(j)==' ') count++;
				a[i]=count;
				if (a[i]<min) min=a[i];
			}
			
			int sum=0;
			for (int i=1;i<=n;i++) sum+=(a[i]-min);
			
			System.out.println(sum);
			
			n=Integer.parseInt(input.nextLine());
		}
	}
}
