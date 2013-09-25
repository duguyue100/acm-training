import java.util.*;

public class uva494 {
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		
		while (input.hasNext())
		{
			String st=input.nextLine();
			int count=0;
			
			for (int i=0;i<st.length();i++)
				if (!((st.charAt(i)>='a' && st.charAt(i)<='z')||
					(st.charAt(i)>='A' && st.charAt(i)<='Z')))
				{
					char ch=st.charAt(i);
					st=st.replace(ch, ' ');
				}
			
			String[] a=st.split(" ");
			
			for (int i=0;i<a.length;i++)
				if (a[i].compareTo("")!=0)
					count++;
			
			System.out.println(count);
		}
	}
}
