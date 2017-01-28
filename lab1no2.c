#include <stdio.h>
main(){
	char c,x;
	int char_cnt=0;

	while ((c=getchar()) != '\n')
		x = c;
		if (x == c )
			char_cnt++;
	printf("%d\n", char_cnt);
}
