#include<iostream>
#include<cstdio>

using namespace std;

long n_day=0, day=0, mon=0, year=0;
int a[13]={0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int b[13]={0,31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeap(int n)
{
	if (n%100==0)
		if (n%400==0) return true;
		else return false;

	if (n%4==0) return true;
	else return false;
}



int main(void)
{
	while (scanf("%ld %ld %ld %ld", &n_day, &day, &mon, &year)!=EOF)
	{
		if (n_day>=0 & n_day<=999999999)
		{
			if ((day>=1 && day<=31) &&
				(mon>=1 && mon<=12) &&
				(year>=1998 && year<=2999))
			{
				int new_day=day, new_mon=mon, new_year=year;

				// adding year
				while (n_day>=365)
				{
					if (new_mon>2)
					{
						if (isLeap(new_year+1))
						{
							n_day-=366;
							new_year++;
						}
						else
						{
							n_day-=365;
							new_year++;
						}
					}
					else
					{
						if (isLeap(new_year))
						{
							n_day-=366;
							new_year++;
						}
						else
						{
							n_day-=365;
							new_year++;
						}
					}
				}

				// adding month within a year

				while (new_mon<12 && n_day>=31)
				{
					if (isLeap(new_year) && new_mon==2)
					{
						n_day-=b[new_mon];
						new_mon++;
					}
					else
					{
						n_day-=a[new_mon];
						new_mon++;
					}
				}

				// adding month across year

				if (new_mon==12 && n_day>31-new_day)
				{
					new_year++;
					new_mon=1;
					if (n_day<31)
					{
						new_day=n_day-(31-new_day);
						n_day=0;
					}
					else
					{
						n_day-=31;
					}
				}

				while (new_mon<12 && n_day>=31)
				{
					if (isLeap(new_year) && new_mon==2)
					{
						n_day-=b[new_mon];
						new_mon++;
					}
					else
					{
						n_day-=a[new_mon];
						new_mon++;
					}
				}

				// adding days within a month

				if (isLeap(new_year))
				{
					if (n_day<=b[new_mon]-new_day)
					{
						new_day+=n_day;
						n_day=0;
					}
					else
					{
						n_day-=b[new_mon]-new_day;
						new_mon++;
						while (n_day-b[new_mon]>0)
						{
							n_day-=b[new_mon];
							new_mon++;
						}
						new_day=n_day;
						n_day=0;
					}
				}
				else
				{
					if (n_day<=a[new_mon]-new_day)
					{
						new_day+=n_day;
						n_day=0;
					}
					else
					{
						n_day-=a[new_mon]-new_day;
						new_mon++;
						while (n_day-a[new_mon]>0)
						{
							n_day-=a[new_mon];
							new_mon++;
						}
						new_day=n_day;
						n_day=0;
					}
				}

				cout << new_day << " " << new_mon << " " << new_year << endl;
			}
		}
	}

	return 0;
}



