#ifndef __VEC__MS__SH__
#define __VEC__MS__SH__

typedef unsigned int size_v;

template<typename D>
class Vec {

private:
	D * m_data;
	size_v m_size;
public:
	Vec();
	Vec(const D * const data);
	Vec(const Vec<D> & v);
	~Vec();
	size_v size();
	D& operator[](const size_v index);
	const Vec<D> operator=(const Vec<D> &v);
	const Vec<D> operator==(const Vec<D> &v) const;
	const Vec<D> operator+(const vec<D> &v) const;
	void erase();
	bool isEmpty() const;
	const D at(const size_v index) const;

}

#endif

#include "vec.tpp"