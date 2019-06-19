#ifndef __PRINTABLE__MS__SH__
#define __PRINTABLE__MS__SH__

#include <iostream>

namespace msh
{

	class Printable
	{
        public:
            virtual void out(std::ostream &out_stream) const = 0;
            virtual void in(std::istream &in_stream) = 0;

            friend std::ostream & operator << (std::ostream &out_stream, const Printable & object)
            {
                object.out(out_stream);
                return out_stream;
            }

            friend std::istream & operator >> (std::istream &in_stream,  Printable & object)
            {
                object.in(in_stream);
                return in_stream;
            }

	};

} // namespace msh
#endif
