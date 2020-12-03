#include <stdio.h>
#include <stdlib.h>
#include "calendar.h"
int main(int argc, char* argv[]){
    int year,month, day;
    int daysInMonth,weekDay=0,startingDay;
    char choice;


    while(1) {
      printf("1. Find day based on given date\n");
      printf("2. Display  calendar of a particular month\n");
      printf("3. Print calendar of a desired year\n");
      printf("4. Exit\n");
      printf("Enter your choice: ");
      scanf("\n%c", &choice);
      switch(choice) {
        case '1':
        printf("Enter the day, month and year: ");
        scanf("%d %d %d", &day, &month, &year);
        printf("The day is : %s\n", getName(getDayNumber(day, month, year)));
        break;
        case '2':
        printf("Enter the month and year: ");
        scanf("%d %d", &month, &year);
        calendar(year, month);
        break;
        case '3':
        printf("\nEnter your desired year:");
        scanf("%d",&year);
        char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
        int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};

        if((year%4==0&&year%100!=0)||year%400==0)
          monthDay[1]=29;

       startingDay=get_1st_weekday(year);

   for(month=0;month<12;month++){

      daysInMonth=monthDay[month];
      printf("\n\n---------------%s-------------------\n",months[month]);
      printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");

      for(weekDay=0;weekDay<startingDay;weekDay++)
        printf("     ");

      for(day=1;day<=daysInMonth;day++){
        printf("%5d",day);

        if(++weekDay>6){
            printf("\n");
            weekDay=0;
        }
        startingDay=weekDay;
      }
     printf("\n");
   }
        break;
        case '4':
        printf("Bye!!");
        exit(0);
        break;
        default:
        printf("Not a valid option\n");
        break;
      }
    }

return 0;
}
