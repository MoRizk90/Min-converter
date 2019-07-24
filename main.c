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
    double dayToweek = 0.0;
    double weekToYear = 0.0;
    printf("Kindly enter the desired minutes : ");
    scanf("%lf", &minutesEnteredByUser);
    minutesTohours = minutesEnteredByUser / (double)60;
    hoursToDay = (minutesTohours / (double)24);

    if (hoursToDay <= 1)
    {
        float minutes = 0;
        int hours = 0;
        hours = minutesTohours;
        minutes = minutesTohours - hours;
        printf("the entered minutes is less than one days which is approximately equal to : %d hours and %d minutes", hours, (int)round(minutes));
    }
    else
    {
        int day = 0;
        double hours;
        day = hoursToDay;
        hours = hoursToDay - day;
        printf("the entered minutes is approximately equal to equal to %d days and %d hours", day, (int)(hours));

    }
    /*
    dayToweek = minutesToDay / (double)7;
    weekToYear = dayToweek  / 52.1429;
    printf("the no days are : %.3lf \n", minutesToDay);

    printf("the no weeks are : %.3lf \n", dayToweek);
    printf("the no years are : %.3lf \n", weekToYear);
    */
    return 0;
}
