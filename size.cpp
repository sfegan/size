#include <cstdint>
#include <stdio.h>

using namespace std;

template<typename T> const char* type_name() { return "unknown"; }
#define SPECIALISE_TYPE(x) template<> const char* type_name<x>() { return #x; }
SPECIALISE_TYPE(bool);
SPECIALISE_TYPE(char);
SPECIALISE_TYPE(signed char);
SPECIALISE_TYPE(unsigned char);
SPECIALISE_TYPE(short);
SPECIALISE_TYPE(unsigned short);
SPECIALISE_TYPE(int);
SPECIALISE_TYPE(unsigned int);
SPECIALISE_TYPE(long);
SPECIALISE_TYPE(unsigned long);
SPECIALISE_TYPE(long long);
SPECIALISE_TYPE(float);
SPECIALISE_TYPE(double);
SPECIALISE_TYPE(long double);
SPECIALISE_TYPE(wchar_t);

#define PRINTLEN(x) printf("%-20s %-2lu    %-2lu\n",#x,sizeof(x),8*sizeof(x))
#define PRINTTYPE(x) printf("%-20s %-20s\n", #x, type_name<x>())

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
	PRINTLEN(wchar_t);

	printf("\n");
	PRINTTYPE(int8_t);
	PRINTTYPE(uint8_t);
	PRINTTYPE(int16_t);
	PRINTTYPE(uint16_t);
	PRINTTYPE(int32_t);
	PRINTTYPE(uint32_t);
	PRINTTYPE(int64_t);
	PRINTTYPE(uint64_t);

	return 0;
}
