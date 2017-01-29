#include <stdio.h>
void main()
{
	char chr,compare;
	int count=0,count_1=0;
	while ((chr=getchar())!= EOF )
	{
		if (chr==compare)
		{
			count_1++;
		}
		else
		{
			compare=chr;
			count_1=0;
		}
		if(count_1==2)
		{
			count++;
			count_1=0;
			compare='\0';
		}
	}
	printf("count = %d\n",count);

}