#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T &container, int const &value)
{
	return (std::find(container.begin(), container.end(), value));
}
