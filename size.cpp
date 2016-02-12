#include <stdio.h>

#define PRINTLEN(x) printf("%-20s %-2lu    %-2lu\n",#x,sizeof(x),8*sizeof(x))

int main()
{
	PRINTLEN(bool);
	PRINTLEN(char);
	PRINTLEN(short);
	PRINTLEN(int);
	PRINTLEN(long);
	PRINTLEN(long long);
	PRINTLEN(float);
	PRINTLEN(double);
	PRINTLEN(long double);
	PRINTLEN(void*);
	return 0;
}
