#include <cstdint>
#include <stdio.h>

using namespace std;

template<typename T> const char* type_name(T x) { return "unknown"; }
const char* type_name(bool x) { return "bool"; }
const char* type_name(char x) { return "char"; }
const char* type_name(signed char x) { return "signed char"; }
const char* type_name(unsigned char x) { return "unsigned char"; }
const char* type_name(short x) { return "short"; }
const char* type_name(unsigned short x) { return "unsigned short"; }
const char* type_name(int x) { return "int"; }
const char* type_name(unsigned int x) { return "unsigned int"; }
const char* type_name(long x) { return "long"; }
const char* type_name(unsigned long x) { return "unsigned long"; }
const char* type_name(long long x) { return "long long"; }
const char* type_name(unsigned long long x) { return "unsigned long long"; }

#define PRINTLEN(x) printf("%-20s %-2lu    %-2lu\n",#x,sizeof(x),8*sizeof(x))
#define PRINTTYPE(x) printf("%-20s %-20s\n", #x, type_name(static_cast<x>(0)))

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
