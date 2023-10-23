#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template<class T>
class Array {
	public:
		int size() {
			return (_size);
		}
		
		int& operator[](int i) {
			if (i > _size) {
				throw(IndexOutOfBounds());
			}
			return (_elements[i]);
		}

		Array() : _elements(NULL), _size(0) {
		}

		Array(unsigned int n) : _size(n) {
			_elements = new T[n]();
		}

		Array(Array const &ref) {
			_size = ref._size;
			_elements = new T[ref._size]();
			for (int i = 0; i < ref._size; i++) {
				_elements[i] = ref._elements[i];
			}
		}

		Array& operator=(Array const &ref) {
			if (this != &ref) {
				_size = ref._size;
				if (_elements)
					delete _elements;
				_elements = new T[ref._size]();
				for (int i = 0; i < ref._size; i++) {
					_elements[i] = ref._elements[i];
				}
			}
			return (*this);
		}
		~Array() {}

	private:
		T*				_elements;
		unsigned int	_size;

		class IndexOutOfBounds : public std::exception {
			public:
				const char* what() const throw() {
					return ("Index out of bounds");
				}
		};
};

#endif