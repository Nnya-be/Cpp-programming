#include <iostream>
#include <string >
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{

    ofstream soloClients( "data.txt" , ios::out );

    if( !soloClients){
        cerr << "File could not be opened "<<endl;
        exit( EXIT_FAILURE );
    }

    cout << "PLease Enter Clients name and amount paid ." <<endl
    << " Enter the end sequence to cut the programm/n";


    int amount;
    string name;
    while( cin>>name >> amount ){
        soloClients << name << amount  <<endl;
    }

}
