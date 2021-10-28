#include <iostream>

class Karen
{
    public:

        Karen(void);
        ~Karen(void);
    
        void        complain(int level_id);

        int         get_level_id(char *filter);

        int         getFilter(void);
        void        setFilter(int filter);

    private:

    	void	    (Karen::*f[5])(void);
    	const char  *levels[5];

        int         filter;

        void        debug(void);
        void        info(void);
        void        warning(void);
        void        error(void);
};
