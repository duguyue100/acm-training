// UVa 12148 Electricity

import java.util.Calendar;
import java.util.GregorianCalendar;
import java.util.Scanner;

class Main{
	public static void main(String[] args)
	{
        Scanner input = new Scanner(System.in);

        GregorianCalendar prev_day, curr_day;
        while (true)
        {
            int n_days = input.nextInt();

            if (n_days == 0) break;

            curr_day = new GregorianCalendar(0, 0, 0);

            int days = 0;
            int sum = 0;
            int prev_c = 0;
            int c = 0;
            for (int i=0; i<n_days; i++)
            {
                // re-assign
                prev_day = curr_day;
                prev_c = c;

                int d = input.nextInt();
                int m = input.nextInt()-1;
                int y = input.nextInt();
                c = input.nextInt();

                curr_day = new GregorianCalendar(y, m, d);

                // compare
                prev_day.add(Calendar.DATE, 1);            


                if ((curr_day.get(Calendar.YEAR) == prev_day.get(Calendar.YEAR)) &&
                    (curr_day.get(Calendar.MONTH) == prev_day.get(Calendar.MONTH)) &&
                    (curr_day.get(Calendar.DAY_OF_MONTH) == prev_day.get(Calendar.DAY_OF_MONTH)))
                {
                    sum += (c-prev_c);
                    days++;
                }
            }
            
            System.out.println(days+" "+sum);
        }
	}

}
