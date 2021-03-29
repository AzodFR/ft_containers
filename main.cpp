#include "List.hpp"

#include <iostream>
#include <list>

int main()
{

	std::list<int> Test (985, 400);
	std::cout << Test.size() << std::endl;
	std::cout << *Test.begin() << std::endl;
	std::cout << *Test.end() << std::endl;
	return 0;
}