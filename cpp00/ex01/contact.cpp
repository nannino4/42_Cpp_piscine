#include "contact.hpp"

// constructor -------------------------------------

Contact::Contact(void)
{
    this->is_used = 0;
}

// deconstructor -------------------------------------

Contact::~Contact(void)
{
}

// setters --------------------------------------------

void Contact::set_first_name(std::string s)
{
    this->first_name = s;
}

void Contact::set_last_name(std::string s)
{
    this->last_name = s;
}

void Contact::set_nickname(std::string s)
{
    this->nickname = s;
}

void Contact::set_phone_n(std::string s)
{
    this->phone_n = s;
}

void Contact::set_secret(std::string s)
{
    this->secret = s;
}

// getters --------------------------------------------

std::string Contact::get_first_name(void)
{
    return (this->first_name);
}

std::string Contact::get_last_name(void)
{
    return (this->last_name);
}

std::string Contact::get_nickname(void)
{
    return (this->nickname);
}

std::string Contact::get_phone_n(void)
{
    return (this->phone_n);
}

std::string Contact::get_secret(void)
{
    return (this->secret);
}

int Contact::get_is_used(void)
{
    return (this->is_used);
}

// others --------------------------------------------

void Contact::set_as_used(void)
{
    this->is_used = 1;
}
