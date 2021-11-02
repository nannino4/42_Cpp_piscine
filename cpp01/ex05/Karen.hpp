#include <iostream>

class Karen
{
    public:

        Karen(void);
        ~Karen(void);
    
        void complain(std::string level);

    private:

    	void	(Karen::*f[5])(void);

        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};
