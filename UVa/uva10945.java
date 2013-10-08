import java.util.*;
public class uva10945 {
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		
		String st=input.nextLine().toLowerCase();
		
		while (st.compareTo("done")!=0)
		{
			String s="";
			for (int i=0;i<st.length();i++)
				if (st.charAt(i)>='a' && st.charAt(i)<='z')
					s+=st.charAt(i);
			
			boolean flag=true;
			for (int i=0;i<s.length()/2;i++)
				if (s.charAt(i)!=s.charAt(s.length()-i-1))
				{
					flag=false;
					break;
				}
			
			if (flag==true) System.out.println("You won't be eaten!");
			else System.out.println("Uh oh..");
			
			st=input.nextLine().toLowerCase();
		}
	}
}
