import java.util.*;
public class uva12289 {
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		
		int t=input.nextInt();
		
		for (int i=1;i<=t;i++)
		{
			String word=input.next();
			
			if (word.length()==3)
			{
				if (word.charAt(0)=='o' && word.charAt(1)=='n')
					System.out.println(1);
				else if (word.charAt(0)=='o' && word.charAt(2)=='n')
					System.out.println(1);
				else if (word.charAt(0)=='o' && word.charAt(1)=='e')
					System.out.println(1);
				else if (word.charAt(0)=='o' && word.charAt(2)=='e')
					System.out.println(1);
				else if (word.charAt(1)=='n' && word.charAt(2)=='e')
					System.out.println(1);
				else System.out.println(2);
			}
			else if (word.length()==5)
				System.out.println(3);
		}
		
	}
}
