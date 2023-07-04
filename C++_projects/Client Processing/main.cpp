#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include "ClientData.h"

using namespace std;

int enterChoice( );
void createTextFile ( fstream &);
void updateRecord ( fstream &);
void newRecord ( fstream & );
void deleteRecord (fstream &);
void outputLine( ostream & , const ClientData & );
int getAccount( const char *  const );

enum Choices { PRINT = 1 , UPDATE , NEW , DELETE , END };

int main()
{
    fstream inOutCredit ( "credit.dat" , ios::in | ios::out | ios::binary);

    if( !inOutCredit )
    {
        cerr << "File could not be created :" <<endl;
        exit( EXIT_FAILURE );
    }

    int choice;

    while ( (choice = enterChoice() ) != END )
    {

        switch(choice)
    {
    case PRINT:
        createTextFile( inOutCredit );
        break;
    case UPDATE:
        updateRecord( inOutCredit );
        break;
    case NEW:
        newRecord( inOutCredit );
        break;
    case DELETE:
        deleteRecord( inOutCredit );
        break;
    default :
        cerr << "incorrect choice " <<endl;
        break;
    }//end of switch

    inOutCredit.clear( );
    }//end of while

}//end of main

//taking user input choices
int enterChoice( )
{
    cout << "\nEnter your choice :" <<endl
    <<"1 - store a formatted text file of accounts " <<endl
    <<"      called \"print.txt\" for printing " <<endl
    << "2 - update an account " <<endl
    << "3 - add a new account " <<endl
    << "4 - delete an account " << endl
    << "5 - end program\n? ";

    int menuChoice;
    cin >> menuChoice;

    return menuChoice;
}// end of choice function

//create formatted txt file for printing
void createTextFile( fstream &readFromFile )
{
    ofstream outPrintFile( "print.txt" , ios::out );

    //exit program if ofstream cannot create file
    if( !outPrintFile )
    {
        cerr << "File could not be created . " <<endl;
        exit( EXIT_FAILURE );
    }

    //outputting file heads to the file to be printed
    outPrintFile << left <<setw(10 ) << "Account " << setw( 16 ) << "Last Name" <<setw( 11)
    << "First Name " << right << setw( 10 )  << "Balance" << endl;

    //set file position pointer to the beginning of the file to be read from
    readFromFile.seekg( 0 );

    //read first record from record file
    ClientData client;
    readFromFile.read( reinterpret_cast<char *>( &client ) , sizeof( ClientData ) );

    while ( !readFromFile.eof( ) )
    {
        // write single record to text file
        if( client.getAccountNumber( )  != 0 )//skip empty records
            outputLine( outPrintFile , client );

        //reading next record from file
        readFromFile.read( reinterpret_cast< char  * > ( &client ) , sizeof( ClientData ) );
    }//end while
}//end of function createTextFile

//update balance in record
void updateRecord( fstream &updateFile )
{
    int accountNumber = getAccount ( "Enter account to update ");

    //move file position pointer to correct record in file
    updateFile.seekg( (accountNumber - 1 ) * sizeof( ClientData ) );

    //read first record from file
    ClientData client;
    updateFile.read( reinterpret_cast<char *>( &client ) , sizeof ( ClientData) );


    //update record
    if( client.getAccountNumber( ) != 0 )
    {
        //display the record
        outputLine ( cout , client );

        //user specify transaction
        cout << "\nEnter charge (+)  or payment ( - ) :";
        double transaction;
        cin >> transaction;

        //update record balance
        double oldBalance = client.getBalance( );
        client.setBalance( oldBalance + transaction );
        outputLine( cout , client );

        //moveFile position pointer to correct record in file
        updateFile.seekp( (accountNumber - 1 ) * sizeof(ClientData ) );

        //write updated record over old record in file
        updateFile.write (reinterpret_cast <char *>( &client)  , sizeof( ClientData ) );

    }//end if
    else
    {
        cerr << "Account no#" << accountNumber << "has no information." <<endl;
    }
}//end of function updateRecord

// create and insert record
void newRecord( fstream &insertInFile )
{
    int accountNumber = getAccount( "Enter new account number ");

    //moving file position pointer to correct record in file
    insertInFile.seekg( ( accountNumber  -  1 ) * sizeof(ClientData ) );

    //read record from file
    ClientData client;
    insertInFile.read(reinterpret_cast<char *>( &client ) , sizeof( ClientData ) );


    //create record , if record  doesn't exists in file
    if ( client.getAccountNumber( ) ==0 )
    {
        string lastName;
        string firstName;
        double balance;

        //user enters last name , first name and balance
        cout << "Enter last name , first name , balance\n?";
        cin >> setw( 15 ) >> lastName;
        cin >> setw( 10 ) >> firstName;
        cin>> balance;

        client.setLastName( lastName );
        client.setFirstName( firstName );
        client.setBalance( balance );
        client.setAccountNumber( accountNumber );

    // move file position pointer to correct record
    insertInFile.seekp( (accountNumber - 1 ) * sizeof( ClientData ) );

    //insert record in file
    insertInFile.write( reinterpret_cast <char *>( &client ), sizeof (ClientData ) );
    }//end of if
    else
    {
        cerr << "Account no#"  << accountNumber << " already contains information ." <<endl;
    }
}// end of function new record

void deleteRecord ( fstream &deleteFromFile )
{
    // obtain account number to be deleted
    int accountNumber = getAccount( "Enter Account to Delete ");

    //move file - position pointer to correct record in file
    deleteFromFile.seekg( (accountNumber - 1 ) * sizeof ( ClientData ) );

    //read record form file
    ClientData client;
    deleteFromFile.read( reinterpret_cast<char  *>( &client)  , sizeof ( ClientData ) );

    //delete record if it exits in file
    if( client.getAccountNumber( ) !=0 )
    {
        ClientData blankClient;

        //move file position pointer to correct record in file
        deleteFromFile.seekp( ( accountNumber - 1 )  * sizeof( ClientData ));

        //replace existing record with a blank record
        deleteFromFile.write( reinterpret_cast< char * > ( &blankClient ) , sizeof( ClientData ) );

        cout << "Account no#" << accountNumber << " deleted .\n";
    }//end if
    else
    {
        cerr << "Account no# " << accountNumber << "  is empty.\n";
    }
}//end of function delete Record

void outputLine( ostream &output , const ClientData &record )
{
    output << left <<setw( 10 ) << record.getAccountNumber( )
    << setw( 16 ) << record.getLastName( )
    <<setw( 11 ) << record.getFirstName( )
    <<setw( 10 ) << setprecision( 2 ) << right << fixed << showpoint
    <<record.getBalance( ) << endl;
}//end of function output line

//obtain account number value from user
int getAccount ( const char * const prompt )
{
    int accountNumber;

    //obtain account number value
    do
    {
        cout << prompt << " (1 - 100) : ";
        cin >> accountNumber;

    }
    while( accountNumber < 1  || accountNumber > 100);

    return accountNumber;
}//end of get account
