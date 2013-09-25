import java.util.*;

class Main {
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		
		while (input.hasNext())
		{
			System.out.println(Math.abs(input.nextLong()-input.nextLong()));
		}
	}
}
