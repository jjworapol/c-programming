#include <stdio.h>
void main()
{
	int time,day,hour,minute ;
	printf("Enter computer working time: ");
	scanf("%d",&time);
	day=time/1440;
	time=time%1440;
	hour=time/60;
	time%60;
	minute=time
	printf("It is %d days %d hours and %d minutes.",day,hour,minute);

}