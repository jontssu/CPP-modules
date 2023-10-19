#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int main()
{
	Data data;

	std::cout << &data << '\n';
	std::cout << Serializer::deserialize(Serializer::serialize(&data)) << '\n';
	return 0;
}
