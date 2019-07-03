#ifndef __VEC__MS__SH__
#define __VEC__MS__SH__

#include <stdlib.h> /* abort, NULL */
#include "printable.hpp"

namespace msh
{
	typedef unsigned int size_v;

	template <typename D>
	class Vec : virtual public Printable
	{

	private:
		D * m_data;
		size_v m_size;
		size_v m_capacity;

	public:
		Vec();
		Vec(const Vec<D> &v);
		/**
		 * initialse un vec avec la valeur initilizer de taille size
		 */
		Vec(const size_v size, const D &initilizer);
		virtual ~Vec();
		size_v size() const;
		D &operator[](const size_v index);
		const Vec<D> operator=(const Vec<D> &v);
		bool operator==(const Vec<D> &v) const;
		void erase();
		bool isEmpty() const;
		const D at(const size_v index) const;
		void reserve(const size_v size);
		void reserve(const size_v size, const D &initilizer);
		void push_back(const D &data);
		void push(const D &data);
		D pop();
		size_v capacity() const;

		void out(std::ostream &out_stream) const;
        void in(std::istream &in_stream);
	};



// template implementation must be in header files

	template <typename D>
	Vec<D>::Vec()
	{
		erase();
	}

	template <typename D>
	Vec<D>::Vec(const Vec<D> &v)
	{
		reserve(v.size());

		for (size_v i = 0; i < v.size(); i++)
			m_data[i] = v.at(i);
	}

	template <typename D>
	Vec<D>::~Vec()
	{
		erase();
	}


	template <typename D>
	size_v Vec<D>::size() const 
	{
		return m_size;
	}


	template <typename D>
	const D Vec<D>::at(const size_v index) const
	{
		if (index < m_size)
			return m_data[index];
		// exit msg should be defined after
		// for acessing non reserved memory
		exit(3);
	}


	template <typename D>
	void Vec<D>::reserve(const size_v size)
	{
		erase();

		if (size == 0)	return;

		m_data 		= new D[size];
		m_size		= size;
		m_capacity 	= size;
	}


	template <typename D>
	void Vec<D>::reserve(const size_v size, const D & initilizer)
	{
		this->reserve(size);

		for(size_v i = 0; i < size; i++) 
			this->m_data[i] = initilizer;
		
	}


	template <typename D>
	bool Vec<D>::isEmpty() const
	{
		return m_size == 0;
	}


	template <typename D>
	void Vec<D>::erase()
	{
		if (m_data != NULL)
			delete[] m_data;

		m_data = NULL;
		m_size = 0;
		m_capacity = 1;
	}


	template <typename D>
	void Vec<D>::out(std::ostream &out_stream) const
	{
		out_stream<<"size: "<<m_size<<" capacity: "<<m_capacity<<" ";
	}


	template <typename D>
    void Vec<D>::in(std::istream &in_stream) 
	{
		
	}


	

} // namespace msh

#endif
