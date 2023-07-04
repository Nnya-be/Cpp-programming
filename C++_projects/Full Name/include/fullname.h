#ifndef FULLNAME_H
#define FULLNAME_H
#include <iostream>
#include <string>



class fullname
{
    friend std::istream &operator>>( std::istream &, fullname &);
    friend std::ostream &operator <<(std::ostream & , fullname &);
    public:
        fullname();

    private:
        std::string firstName;
        std::string secondName;
};

#endif // FULLNAME_H
