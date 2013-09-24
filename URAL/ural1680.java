// be careful of Java's runtime error.
import java.util.*;

public class ural1680 {
	static LinkedList<String> l=new LinkedList<String>();
	static LinkedList<String> l1=new LinkedList<String>();
	
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		
		int y=input.nextInt();
		int n=input.nextInt();
		int p=input.nextInt();
		input.nextLine();
		
		
		int counter=0;
		
		for (int i=1;i<=n;i++)
		{
			String t=input.nextLine();
			String t1=t;
			t1=t1.toLowerCase();
			
			if (t1.contains("#")==true)
				t1=t1.substring(0, t1.length()-3);
			
			if (!l.contains(t1) && counter!=p+1)
			{
				l.addLast(t1);
				l1.addLast(t);
				counter++;
			}
			
			if (counter==p+1)
			{
				System.out.println(l1.getLast());
				break;
			}
		}
	}
}
