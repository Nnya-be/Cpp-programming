#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

//the function used to output the  info in the file's header / prototype
void outputLine( int , const string& , double );

int main()
{
    ifstream inClientFile( "clients.txt" , ios::in );

    if( !inClientFile )
    {
        cerr << " File could not be opened " <<endl;
        exit( EXIT_FAILURE );
    }

    int account;
    string name;
    double balance;


    // setting the format of the header to disply
    cout << left << setw(10 ) << "Account " << setw(13) << "Name"
    << "Balance" <<endl <<fixed << showpoint;

    // outputting from the clients file
    while ( inClientFile >>account >>name >> balance )
                outputLine(account , name , balance);
}


//function declaration
void outputLine( int account  ,  const string &name , double amount)
{
    cout << left << setw(10 ) << account << setw( 13) << name<<setw( 7) <<setprecision(2 ) <<right <<  amount <<endl;
}
