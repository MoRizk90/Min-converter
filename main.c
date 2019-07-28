/*


*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{


    double minutesEnteredByUser = 0.0;
    double minutesTohours = 0.0;
    double hoursToDay = 0.0;

    double hours = 0.0 ;

    double dayToweek = 0.0;
    double weekToMonth = 0.0;
    double MonthToYear = 0.0;
    double totalToYears = 0.0;
    printf("Kindly enter the desired minutes : ");
    scanf("%lf", &minutesEnteredByUser);
    minutesTohours = minutesEnteredByUser / (double)60;
    hoursToDay = (minutesTohours / (double)24);
    dayToweek = (hoursToDay / 7.0);
    weekToMonth = (dayToweek / 4.34524);
    MonthToYear = (weekToMonth / 12);


    if (hoursToDay <= 1)
    {
        float minutes = 0;
        int hours = 0;
        hours = minutesTohours;
        minutes = minutesTohours - hours;
        printf("the entered minutes is less than one days which is approximately equal to : %d hours and %d minutes", hours, (int)round(minutes));
    }
    else if(dayToweek < 1 )
    {
        int day = 0;
        day = hoursToDay;
        hours = hoursToDay - day;
        printf("the entered minutes is approximately equal to equal to %d days and %d hours", day, (int)(hours));

    }else if(weekToMonth < 1)
    {
        int NoOfWeeks = dayToweek;
        printf("the entered minutes is approximately equal to %d weeks and %d days", NoOfWeeks, (int)hoursToDay);

    }else if(MonthToYear < 1)
    {

        int  monthCount = weekToMonth;
        printf("the entered minutes is approximately equal to %d Month and %d weeks", monthCount, (int)weekToMonth);

    }else if(MonthToYear > 1)
    {

        int yearCount = MonthToYear;

        printf("the entered minutes is approximately equal to %d Years", yearCount);



    }

    return 0;
}
