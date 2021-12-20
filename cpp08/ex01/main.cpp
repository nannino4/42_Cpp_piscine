#include "span.hpp"

#define SIZE 10000

int generateNumber(void)
{
	return std::rand();
}

std::vector<int> createRandomVector(unsigned int nb)
{
	std::vector<int> tab(nb);

	std::generate(tab.begin(), tab.end(), generateNumber);
	return tab;
}

int main(void)
{
	std::srand(std::time(NULL));
	std::cout << "Subject's tests" << std::endl;
	{
		Span sp(5);

		sp.addNumber(20);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(21);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "My tests" << std::endl;
	{
		std::vector<int> tabTmp(createRandomVector(SIZE));
		Span sp(tabTmp.begin(), tabTmp.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return (0);
}
