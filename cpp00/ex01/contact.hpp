#pragma once

#include <iostream>

class Contact
{
    public:
    // constructor & deconstructor
        Contact(void);
        ~Contact(void);
    // setters
        void set_first_name(std::string s);
        void set_last_name(std::string s);
        void set_nickname(std::string s);
        void set_phone_n(std::string s);
        void set_secret(std::string s);
        void set_as_used(void);
    // getters
        std::string get_first_name(void);
        std::string get_last_name(void);
        std::string get_nickname(void);
        std::string get_phone_n(void);
        std::string get_secret(void);
        int get_is_used(void);
    // others

    private:
        int         is_used;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_n;
        std::string secret;
};
