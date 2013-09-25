import java.io.File;
import java.io.IOException;
import java.util.*;

public class uva490 {
	public static void main(String[] args) throws IOException
	{
		//Scanner input=new Scanner(System.in);
		Scanner input=new Scanner(new File("input.in"));
		
		String[] st=new String[101];
		
		int count=1;
		int max=-1;
		while (input.hasNextLine())
		{
			st[count]=input.nextLine();
			if (st[count].length()>max) max=st[count].length();
			count++;
		}
		
		for (int i=0;i<max;i++)
		{
			for (int j=count-1;j>=1;j--)
			{
				if (i<=st[j].length()-1)
				{
					System.out.print(st[j].charAt(i));
				}
				else System.out.print(' ');
					
			}
			System.out.println();
		}
	}
}
