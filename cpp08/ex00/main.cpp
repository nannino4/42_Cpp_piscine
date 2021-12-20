#include "easyfind.hpp"

#define CONTAINER_SIZE 5
#define CONTAINER_TYPE list

int main(void)
{
	std::CONTAINER_TYPE<int>	container;
	int							i;

	for (i = 0; i < CONTAINER_SIZE; i++)
		container.push_back(i);
	for (i = 0; i < CONTAINER_SIZE + 3; i++)
	{
		if (easyfind< std::CONTAINER_TYPE <int> >(container, i) == container.end())
			std::cout << "Could not find occurence of the value \"" << i << "\" in the container." << std::endl;
		else
			std::cout << "Occurence of the value \"" << *easyfind< std::CONTAINER_TYPE <int> >(container, i) << "\" found in the container." << std::endl;
	}
	return (0);
}
