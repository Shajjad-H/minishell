#ifndef __O__MS__SH__HPP__
#define __O__MS__SH__HPP__

#include <unistd.h> /*	ssize_t write	*/

#include "typedefs.hpp"

namespace msh{

/*
precondition: valide fd, data and size initilized
post-condition: writes the data of size to the fd.
				be carefull it is a blocking function. 
*/
template<typename T>
l_int print(const int fd,const T & data, const l_int size);

/*
precondition: valide fd
post-condition: writes the string to the given file descriptor
				by default the output is set to sedout.
*/
void print(const char * str, const int fd=1);
void perr(const char * str, const int fd=2);

void print(const l_int n, const int fd=1);
void perr(const l_int n,  const int fd=2);








//--------------------------------------------------
// template functions implementations

template<typename T>
l_int print(const int fd,const T & data, const l_int size)
{
	l_int data_wrote = 0;
	// if the data can't be written at once
	while(data_wrote < size)
	{
		l_int i = write(fd,(&data)+data_wrote, size - data_wrote );
		if(i < 0)
		{
			perr("failed to write on fd ");
			perr(fd); perr("\n");
			return -1;
		}
		data_wrote += i;
	}
	return data_wrote;
}

void print(const char * str, const int fd=1)
{
	msh::print(fd,*str,msh::str_len(str));
}
void perr(const char * str, const int fd=2)
{
	msh::print(fd,*str,msh::str_len(str));
}




}

#endif

