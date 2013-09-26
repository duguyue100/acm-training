import java.util.*;

public class uva445 {
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		
		while (input.hasNextLine())
		{
			String str=input.nextLine();
			
			int count=0;
			for (int i=0;i<str.length();i++)
			{
				if (str.charAt(i)=='!')
					System.out.println();
				else if (str.charAt(i)>='0' && str.charAt(i)<='9')
				{
					count=(int)(str.charAt(i)-'0');
					while (str.charAt(i+1)>='1' && str.charAt(i+1)<='9')
					{
						i++;
						count+=(int)(str.charAt(i)-'0');
					}
				}
				else
				{
					if (str.charAt(i)=='b')
					{
						for (int j=1;j<=count;j++)
							System.out.print(' ');
					}
					else
					{
						for (int j=1;j<=count;j++)
							System.out.print(str.charAt(i));
					}
					count=0;
				}
			}
			System.out.println();
		}
	}
}