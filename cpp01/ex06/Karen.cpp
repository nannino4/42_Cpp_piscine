#include "Karen.hpp"

Karen::Karen(void)
{
	this->levels[0] = "DEBUG";
	this->levels[1] = "INFO";
	this->levels[2] = "WARNING";
	this->levels[3] = "ERROR";
	this->levels[4] = NULL;

	this->f[0] = &Karen::debug;
	this->f[1] = &Karen::info;
	this->f[2] = &Karen::warning;
	this->f[3] = &Karen::error;
	this->f[4] = NULL;

	return ;
}

Karen::~Karen(void)
{
	return ;
}

void Karen::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" << std::endl;
}

void Karen::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n" << std::endl;
}

void Karen::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now.\n" << std::endl;
}

void Karen::complain(int level_id)
{
	if (level_id < 4 && level_id >= this->getFilter())
	{
		(this->*(f[level_id]))();
		return ;
	}
	if (this->getFilter() >= 4)
    	std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
}

int	Karen::get_level_id(char *filter)
{
	std::string s;
	int 		level_id;

	s = filter;
	level_id = 0;
	while (this->levels[level_id] && s.compare(levels[level_id]))
		level_id++;
	return (level_id);
}

void Karen::setFilter(int filter)
{
	this->filter = filter;
}

int	Karen::getFilter(void)
{
	return (this->filter);
}
