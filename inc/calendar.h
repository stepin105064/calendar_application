#ifndef __Calendar_H__
	#define ___CalendarH__

	int isLeapYear( int year );
int leapYears( int year );
int todayOf( int y, int m, int d);
long days( int y, int m, int d);
void calendar(int y, int m);
int getDayNumber(int d,int m,int y);
char *getName(int day);
int get_1st_weekday(int year);
int compiled(int A);

	#endif
