#include<stdio.h>
#include<conio.h>
#include<time.h>

void main()
{
	time_t t;
	time(&t);
	clrscr();
	printf("\n Current Year,Date,Day,Time: %s",ctime(&t));
	getch();
}