#include "oStream.hpp"
#include "str.hpp"

void print(const char * str, const int fd=1)
{
	size_v length = str_len(str);
	print(fd,*str,length);
}


void perr(const char * str)
{
	size_v length = str_len(str);
	print(2,*str,length);	
}


void perr(const l_int n)
{
	print(2,n,L_INT_SIZE);
}


void print(const l_int n, const int fd=1)
{
	print(fd,n,L_INT_SIZE);
}