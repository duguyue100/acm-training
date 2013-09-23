import java.util.Scanner;

public class ural1295 {
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		
		int n=input.nextInt();
		
		if (n%4==3)
		{
			System.out.println(2);
		}
		else if (n%4==1 && n%5!=0)
			System.out.println(1);
		else if (n%4==2)
			System.out.println(1);
		else if (n%5==0 && n%4!=0)
			System.out.println(2);
		else System.out.println(0);
		
	}
}
