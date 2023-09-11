#pragma once

#include "Colors.hpp"

template <typename T>
class Array {
public:
	Array(); // empty array
	explicit Array(unsigned int n); // array of size n
	Array(Array const &src); // deep copy
	Array &operator=(Array const &rhs); // deep copy
	unsigned int size() const; // return size of array
	T &operator[](unsigned int i); // return reference to element at index i
	~Array(); // destructor


class OutOfBoundsExceptions : public std::exception {
public:
	virtual const char *what() const throw() {
		return "Index out of bounds";
	}
};
private:
	T *_arr;
	unsigned int _size;
};
