#ifndef EMPLOYER_H
#define EMPLOYER_H
#include <string>

class employer
{
    public:
        employer( const std::string & , const std::string & );
        ~employer();

        std::string getFirstName( )const;
        std::string getLastName( )const;

        static unsigned int getCount( );

    private:
        std::string firstName;
        std::string lastName;

        static unsigned int counter;
};

#endif // EMPLOYER_H
