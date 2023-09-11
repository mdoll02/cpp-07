#pragma once

#include <iostream>
#include "Array.hpp"

template<typename T>
Array<T>::Array() : _arr(NULL), _size(0){
	std::cout << "Array() called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n): _arr(new T[n]), _size(n) {
	std::cout << "Array(unsigned int n) called" << std::endl;

}

template<typename T>
Array<T>::Array(const Array &src) : _size(src._size) {
	std::cout << "Array copy constructor called" << std::endl;
	_arr = new T[_size];
	for (unsigned int i = 0; i < _size; i++) {
		_arr[i] = src._arr[i];
	}
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &rhs) {
	std::cout << "Array operator= called" << std::endl;
	if (this != &rhs)
		return *this;
	this->_size = rhs.size;
	delete[] this->_arr;
	this->_arr = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		this->_arr[i] = rhs._arr[i];
	return *this;
}

template<typename T>
unsigned int Array<T>::size() const {
	return _size;
}

template<typename T>
T &Array<T>::operator[](unsigned int i) {
	if (i >= size())
		throw OutOfBoundsExceptions();
	return _arr[i];
}

template<typename T>
Array<T>::~Array() {
	std::cout << "Array destructor called" << std::endl;
	delete[] _arr;
}