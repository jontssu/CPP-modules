#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T& arr, int n) {
	return (std::find(arr.begin(), arr.end(), n));
}

template<typename T>
typename T::const_iterator easyfind(T const& arr, int n) {
	return (std::find(arr.begin(), arr.end(), n));
}

#endif