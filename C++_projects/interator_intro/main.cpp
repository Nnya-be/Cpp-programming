#include <iostream>
#include <iterator>

using namespace std;

int main()
{

    //outputing a message to the user to enter intergers
    cout << "Enter two intergers :" ;

    //create istream_iterator for reading values from cin
    istream_iterator <int > inputInt ( cin );

    int number1  = *inputInt;//read int from the standard input
    ++inputInt;//moving iretator to next  value
    int number2 = *inputInt; //read int from the standard input

    //creating ostream_iterator for writing int values to cout
    ostream_iterator <int > outputInt ( cout );

    cout << "The sum of the numbers  is ";
    *outputInt = number1 + number2;// outputting results to the cout
    cout << endl;


}
