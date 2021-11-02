#include "Karen.hpp"

Karen::Karen	(void)
{
	this->f[0] = &Karen::debug;
	this->f[1] = &Karen::info;
	this->f[2] = &Karen::warning;
	this->f[3] = &Karen::error;
	this->f[4] = NULL;
	return ;
}

Karen::~Karen	(void)
{
	return ;
}

void Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string	level)
{
	const char *levels[5] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
		NULL
	};

	int	level_id;

	level_id = 0;
	while (levels[level_id] && level.compare(levels[level_id]))
		level_id++;
	if (level_id < 4)
	{
		(this->*(f[level_id]))();
		return ;
	}
    std::cout << "error: complain level not found: " << level << std::endl;
}
