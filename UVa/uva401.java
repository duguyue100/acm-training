import java.util.*;

public class uva401 {
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		
		while (input.hasNext())
		{
			String str=input.next();
			
			if (palindrome(str))
			{
				if (mirrored(str))
				{
					System.out.println(str+" -- is a mirrored palindrome.");
					System.out.println();
				}
				else
				{
					System.out.println(str+" -- is a regular palindrome.");
					System.out.println();
				}
			}
			else
			{
				if (mirrored(str))
				{
					System.out.println(str+" -- is a mirrored string.");
					System.out.println();
				}
				else
				{
					System.out.println(str+" -- is not a palindrome.");
					System.out.println();
				}
			}
		}
	}
	
	public static boolean palindrome(String str)
	{
		for (int i=0;i<str.length()/2;i++)
		{
			if (str.charAt(i)!=str.charAt(str.length()-i-1))
				return false;
		}
		
		return true;
	}
	
	public static boolean mirrored(String str)
	{
		String a2="A   3  HIL JM O   2TUVWXY5";
		String b2="1SE Z  8 ";
		
		String st="";
		for (int i=0;i<str.length();i++)
		{
			if (str.charAt(i)>='A' && str.charAt(i)<='Z')
			{
				if (a2.charAt((int)str.charAt(i)-'A')==' ')
					return false;
				else st+=a2.charAt((int)str.charAt(i)-'A');
			}
			else if (str.charAt(i)>='1' && str.charAt(i)<='9')
			{
				if (b2.charAt((int)str.charAt(i)-'1')==' ')
					return false;
				else st+=b2.charAt((int)str.charAt(i)-'1');;
			}
			else if (str.charAt(i)=='0')
				st+=str.charAt(i);
		}
		
		for (int i=0;i<str.length();i++)
		{
			if (str.charAt(i)!=st.charAt(st.length()-i-1))
				return false;
		}
		
		return true;
	}
}
