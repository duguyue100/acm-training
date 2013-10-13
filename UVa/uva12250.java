import java.util.*;
public class uva12250 {
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		
		int counter=1;
		while (true)
		{
			String str=input.nextLine();
			
			if (str.equals("#")) break;
			
			if (str.equals("HELLO"))
			{
				System.out.println("Case "+counter+": ENGLISH");
				counter++;
			}
			else if (str.equals("HOLA"))
			{
				System.out.println("Case "+counter+": SPANISH");
				counter++;
			}
			else if (str.equals("HALLO"))
			{
				System.out.println("Case "+counter+": GERMAN");
				counter++;
			}
			else if (str.equals("BONJOUR"))
			{
				System.out.println("Case "+counter+": FRENCH");
				counter++;
			}
			else if (str.equals("CIAO"))
			{
				System.out.println("Case "+counter+": ITALIAN");
				counter++;
			}
			else if (str.equals("ZDRAVSTVUJTE"))
			{
				System.out.println("Case "+counter+": RUSSIAN");
				counter++;
			}
			else
			{
				System.out.println("Case "+counter+": UNKNOWN");
				counter++;
			}
		}
	}
}
