#include <iostream>
#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mutated_stack;

	mutated_stack.push(5);
	mutated_stack.push(17);
	std::cout << mutated_stack.top() << std::endl;
	mutated_stack.pop();
	std::cout << mutated_stack.size() << std::endl;
	mutated_stack.push(3);
	mutated_stack.push(5);
	mutated_stack.push(737);
	mutated_stack.push(0);

	MutantStack<int>::iterator it = mutated_stack.begin();
	MutantStack<int>::iterator ite = mutated_stack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mutated_stack);
	return 0;
}
