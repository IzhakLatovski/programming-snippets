#include <stdio.h>

float seriesSum(float x, int n)
{
	float sum=0, i=1, j=1, a, top, bot;
	top=x-1;;
	bot=i;
	sum=top;

	while(i<(2*n+1)) {
		i+=2;
		j+=1;
		top=top*((x-1)*(x-1));
		bot=bot*(i-1)*i;
		sum+=(top/(bot*j));
	}

	return sum;
}
