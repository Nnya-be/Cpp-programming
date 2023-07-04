#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

const size_t  contraceptives = 10;
const size_t  outlet = 25;

int main()
{

    array< array <int , contraceptives>, outlet> manufactures = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,1,4,3,2,5,6,3,2} ;


  for ( int row = 1 ; row <=25 ; row ++)
    {

        for ( int column = 1 ; column <= 10; column++ )
        {
            cout << " Enter the amount of contraceptive " << row << " sold for outlet " << column << endl;
            cin >> manufactures[row ][column];
        }
        cout << endl;
    }



  cout << " \t \t ";
  for (int i = 1; i <= 10;  i ++)
  {
      cout <<  "   Outlet"  <<  i;
  }
  cout << "\t Total" <<endl;

    for ( int row = 1; row <=25 ; row ++)
    {
        unsigned int totalCont = 0;

            cout << " Contraceptive " << row << " :  ";
        for ( int column = 1; column <= 10; column++ )
        {
            totalCont += manufactures[row][column];

            cout  <<setw(3)  << manufactures[row][column]<< "       ";
        }
        cout <<setw(5) << totalCont <<endl;
    }
    cout <<endl;
    cout << " Total by  outlets : " << " ";

     for ( int column = 1 ; column <=10 ; column ++)
    {
        unsigned int totalOutlet = 0;
        for ( int row = 1 ; row <= 25; row++ )
        {
            totalOutlet += manufactures[row][column];
        }
                     cout << setw(3) << totalOutlet << "       ";
    }
cout<<endl;
cout << endl;
cout <<endl;
     int highest  = 0;
  for ( auto row : manufactures)
  {
      for ( auto column : row )
      {
          if ( column > highest)
                {
                    highest = column;
                }
    }
  }
  cout << " The highest contraceptive sold was :" << highest << endl;

}
