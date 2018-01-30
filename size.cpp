#include <cstdint>
#include <stdio.h>

#include <immintrin.h>

using namespace std;

template<typename T> const char* type_name() { return "unknown"; }
#define SPECIALISE_TYPE_NAME(x) template<> const char* type_name<x>() { return #x; }
SPECIALISE_TYPE_NAME(bool);
SPECIALISE_TYPE_NAME(char);
SPECIALISE_TYPE_NAME(signed char);
SPECIALISE_TYPE_NAME(unsigned char);
SPECIALISE_TYPE_NAME(short);
SPECIALISE_TYPE_NAME(unsigned short);
SPECIALISE_TYPE_NAME(int);
SPECIALISE_TYPE_NAME(unsigned int);
SPECIALISE_TYPE_NAME(long);
SPECIALISE_TYPE_NAME(unsigned long);
SPECIALISE_TYPE_NAME(long long);
SPECIALISE_TYPE_NAME(unsigned long long);
SPECIALISE_TYPE_NAME(float);
SPECIALISE_TYPE_NAME(double);
SPECIALISE_TYPE_NAME(long double);
SPECIALISE_TYPE_NAME(wchar_t);
#ifdef __SSE__
SPECIALISE_TYPE_NAME(__m128);
#endif
#ifdef __AVX__
SPECIALISE_TYPE_NAME(__m256);
#endif
#ifdef __AVX512F__
SPECIALISE_TYPE_NAME(__m512);
#endif

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
#ifdef __SSE__
	PRINTLEN(__m128);
#endif
#ifdef __AVX__
	PRINTLEN(__m256);
#endif
#ifdef __AVX512F__
	PRINTLEN(__m512);
#endif

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
