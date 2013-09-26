import java.util.*;

public class uva457 {
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		
		int n=input.nextInt();
		
		for (int i=1;i<=n;i++)
		{
			int[] a=new int[10];
			for (int j=0;j<10;j++)
				a[j]=input.nextInt();
			
			int[] st={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
					1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
			
			printString(st);
			for (int j=1;j<50;j++)
			{
				int[] st1=st.clone();
				for (int k=1;k<=40;k++)
				{
					st1[k]=a[st[k-1]+st[k]+st[k+1]];
				}
				st=st1.clone();
				printString(st);
			}
			if (i!=n)
				System.out.println();
		}
	}
	
	public static void printString(int[] st)
	{
		for (int i=40;i>=1;i--)
		{
			if (st[i]==0) System.out.print(" ");
			else if (st[i]==1) System.out.print(".");
			else if (st[i]==2) System.out.print("x");
			else if (st[i]==3) System.out.print("W");
		}
		System.out.println();
	}
}
