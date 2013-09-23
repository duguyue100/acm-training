import java.util.*;
public class ural1800 {
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		
		double l=input.nextDouble()/100.0;
		double h=input.nextDouble()/100.0;
		double w=input.nextDouble()/60;
		
		double t=Math.sqrt((2*(h-l/2))/9.81);
		
		if (l/2>h)
		{
			System.out.println("butter");
			System.exit(0);
		}
		
		double turn=w*t;
		
		while (turn>1)
			--turn;
		
		if ((turn>=0 && turn<=0.25)|| (turn>=0.75 && turn<=1))
			System.out.println("butter");
		else System.out.println("bread");
	}
}
