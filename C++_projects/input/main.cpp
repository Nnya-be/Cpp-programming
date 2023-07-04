#include <iostream>

using namespace std;

int main()
{

  /*  const  char  *const  word  = " again";

    cout <<"the value of word " <<  word << endl
    << static_cast < const void * >(word) << endl;

    cout << endl
    <<endl;

    cout.put( 165);

    cout <<endl;
    int character ;

    cout << " Enter a very nice sentence "<<endl;

    while ( ( character = cin.get() ) != EOF)
        cout.put( character );


    cout << endl;
    cout << cin.eof() <<endl;


    ///////////////////////////////////////////////////////////////////////////
*/

    const int SIZE = 80 ;

    char buffer1[ SIZE ];
    char buffer2 [SIZE ];

    cout << "Write another sentence :" <<endl;
    cin >> buffer1;

    cout << "This is buffer1 :" <<buffer1 << endl <<endl;

    cin.get( buffer2 , SIZE);

    cout << "This is buffer2 : " << buffer2 <<endl;
}
