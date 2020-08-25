// UVa 12019 Doom’s Day Algorithm

import java.util.Calendar;
import java.util.GregorianCalendar;
import java.util.Scanner;

class Main{
	public static void main(String[] args)
	{
        Scanner input = new Scanner(System.in);

        int num_days = input.nextInt();

        String[] days ={
            "", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
            "Friday", "Saturday"};

        for (int i=1; i<=num_days; i++)
        {
            int month = input.nextInt();
            int day = input.nextInt();

            GregorianCalendar gcal = new GregorianCalendar(2011, month-1, day);

            System.out.println(days[gcal.get(Calendar.DAY_OF_WEEK)]);
        }
	}

}
