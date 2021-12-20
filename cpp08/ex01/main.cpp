#include "span.hpp"

#define SIZE 10

int generateNumber(void)
{
	return (std::rand() % 10000);
}

std::vector<int> createRandomVector(unsigned int nb)
{
	std::vector<int> vec(nb);

	std::generate(vec.begin(), vec.end(), generateNumber);
	std::cout << "vector generated:" << std::endl;
	for (unsigned int i = 0; i < nb; ++i)
	{
		std::cout << vec[i] << std::endl;
	}
	std::cout << std::endl;
	return (vec);
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
	std::cout << std::endl;
	std::cout << "My tests" << std::endl;
	{
		std::vector<int>	vec_tmp(createRandomVector(SIZE));
		Span				sp(vec_tmp.begin(), vec_tmp.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return (0);
}
