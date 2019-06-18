#include "str.hpp"


size_v str_len(const char * s)
{
	size_v i = 0;
	while(s[i] != '\0') i++;
	
	return i;
}