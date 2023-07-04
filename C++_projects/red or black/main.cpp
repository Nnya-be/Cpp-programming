#include <iostream>
#include<random>
#include <ctime>
#include <string>

using namespace std;


int numberGenerator ( );

int main()
{
    unsigned int randomNumber;
    unsigned int prediction = 0;
    int counter;
    string hisPrediction = " red ";


    cout << " I have two colors can you guess the color I have ? " <<endl;
    cout << endl;
    cout <<  "  if you can then start by \" 1 : for red  and 0 for black \" ";

    while(counter <=5 ){

                cout << " try the number and lemi see : " << endl;
                cin >> prediction ;


                randomNumber = numberGenerator();

    counter++;
    }
}

int numberGenerator(){
    default_random_engine  engine ( static_cast<unsigned int>(time(0)));
    uniform_int_distribution <unsigned int>randomInt(0,1);


    unsigned int number = randomInt(engine);

    return number;

}

