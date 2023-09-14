#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//prototype functions
int getFirstMonday(int month);
int getFirstDay(int year, int month);
int getFirstMondayOfFirstWeek(int firstDay);


int main()
{
    //call function to return the full date for first Monday of every month for the next 20 years
    int year, month, day;
    for (year = 2020; year <= 2040; year++)
    {
        for (month = 1; month <= 12; month++)
        {
            day = getFirstMonday(month);
            printf("%d/%d/%d\n", day, month, year);
        }
    }
    
    return 0;
}

//function to pull dates for bank holidays in the UK for the next 20 years


//implement getFirstMonday function
int getFirstMonday(int month)
{
    //get current year
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int year = tm.tm_year + 1900;

    //get first day of month
    int firstDay = getFirstDay(year, month);

    //get first Monday of month
    int firstMonday = getFirstMondayOfFirstWeek(firstDay);

    //return first Monday of month
    return firstMonday;
}

//implement getFirstDay function
int getFirstDay(int year, int month)
{
    //get first day of month
    struct tm time_in = {0, 0, 0, 1, month, year - 1900};
    time_t time_temp = mktime(&time_in);
    struct tm *time_out = localtime(&time_temp);
    int firstDay = time_out->tm_wday;

    //return first day of month
    return firstDay;
}

//implement getFirstMondayOfFirstWeek function using switch statement
int getFirstMondayOfFirstWeek(int firstDay)
{
    int firstMonday;
    switch (firstDay)
    {
    case 0:
        firstMonday = 7;
        break;
    case 1:
        firstMonday = 1;
        break;
    case 2:
        firstMonday = 2;
        break;
    case 3:
        firstMonday = 3;
        break;
    case 4:
        firstMonday = 4;
        break;
    case 5:
        firstMonday = 5;
        break;
    case 6:
        firstMonday = 6;
        break;
    }
    return firstMonday;
}

