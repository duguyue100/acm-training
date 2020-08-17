// UVa 11356 Dates

import java.util.Calendar;
import java.util.GregorianCalendar;
import java.util.Scanner;

class Main{
    public static void main(String [] args)
    {
        Scanner input = new Scanner(System.in);

        int T=input.nextInt();

        String[] months ={
            "January", "February", "March", "April",
            "May", "June", "July", "August",
            "September", "October", "November", "December"};

        for (int t=1; t<=T; t++)
        {
            String date = input.next();
            int days = input.nextInt();

            String[] parsed_date = date.split("-");

            int year = Integer.parseInt(parsed_date[0]);
            int day = Integer.parseInt(parsed_date[2]);

            int month = 0;
            for (int i=0; i<12; i++)
            {
                if (parsed_date[1].equals(months[i]))
                {
                    month = i;
                    break;
                }
            }

            GregorianCalendar gcal = new GregorianCalendar(year, month, day);

            gcal.add(Calendar.DAY_OF_MONTH, days);
            
            System.out.printf(
                "Case %d: %d-%s-%02d\n",
                t,
                gcal.get(Calendar.YEAR),
                months[gcal.get(Calendar.MONTH)],
                gcal.get(Calendar.DAY_OF_MONTH));
        }
    }
}
