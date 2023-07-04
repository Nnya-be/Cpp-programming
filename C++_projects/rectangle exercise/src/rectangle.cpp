#include "rectangle.h"
#include <iostream>
#include <stdexcept>

using namespace std;

rectangle::rectangle()
{
    setCoordinates();
    displayCalculation();
}

void rectangle::setCoordinates()
{
    //declaring variables to hold the user inputs temporary before verifivation
    float first = 0, second = 0;

    //Prompting the user for how to input the values

    cout << "Please enter input for the rectangle as indicated by the program" << endl;
    cout << endl;


    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




    //taking the input for the first coordinates of the x and y coordinates
    {
         cout << " Please enter coordinates for  ( x1  and y1)" << endl;
         cin >> first >> second ;
         //verifying the input range for validity of the x coordinate
         {
             if( first >0.0 && first <= 20.0)
                    x1= first;
                else
                throw invalid_argument(" invalid input for x1");
         }

         //verifying the input range for the validity of the y coordinate
        {
                if( second >0.0 && second <= 20.0)
                    y1= second;
                else
                throw invalid_argument(" invalid input for y1");
        }

    }

       //taking the input for the second coordinates of the x and y coordinates
    {
         cout << " Please enter coordinates for  ( x2  and y2)" << endl;
         cin >> first >> second ;
         //verifying the input range for validity of the x coordinate
         {
             if( first >0.0 && first <= 20.0)
                    x2= first;
                else
                throw invalid_argument(" invalid input for x2");
         }

         //verifying the input range for the validity of the y coordinate
        {
                if( second >0.0 && second <= 20.0)
                    y2= second;
                else
                throw invalid_argument(" invalid input for y2");
        }

    }


       //taking the input for the third coordinates of the x and y coordinates
    {
         cout << " Please enter coordinates for  ( x3  and y3)" << endl;
         cin >> first >> second ;
         //verifying the input range for validity of the x coordinate
         {
             if( first >0.0 && first <= 20.0)
                    x3= first;
                else
                throw invalid_argument(" invalid input for x3");
         }

         //verifying the input range for the validity of the y coordinate
        {
                if( second >0.0 && second <= 20.0)
                    y3= second;
                else
                throw invalid_argument(" invalid input for y3");
        }

    }


       //taking the input for the fouth coordinates of the x and y coordinates
    {
         cout << " Please enter coordinates for  ( x4  and y4)" << endl;
         cin >> first >> second ;
         //verifying the input range for validity of the x coordinate
         {
             if( first >0.0 && first <= 20.0)
                    x4= first;
                else
                throw invalid_argument(" invalid input for x4");
         }

         //verifying the input range for the validity of the y coordinate
        {
                if( second >0.0 && second <= 20.0)
                    y4= second;
                else
                throw invalid_argument(" invalid input for y4");
        }

    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // checking the values if the coordinates are for a rectangle

    if( ((x2 - x1 ) == ( x4 - x3 ) )  && ((y1-y3) == (y2 - y4)))
        cout << " The values are that of a rectangle " <<endl;
    else
        throw invalid_argument( " the coordinates are not that of a rectangle");


        setLength();
        setWidth();
        setPerimeter();
        setArea();
        square();

}


void rectangle::setLength()
{
    //declaring temporary storage for the difference of the sides of the rectangle
    float l , b ;

    l = x2 - x1;
    b = y2 - y3;

    //verrifying to pass the longest side as length;
    if( l > b )
        length =l;
    else
        length = b;
}

float rectangle::getLength()const
{
    return length;
}


void rectangle::setWidth()
{
    //declaring temporary storage for the difference of the sides of the rectangle
    float l , b ;

    l = x2 - x1;
    b = y2 - y3;

    //verrifying to pass the longest side as width;
    if( l < b )
        width =l;
    else
        width = b;
}

float rectangle::getWidth()const
{
    return width;
}

float rectangle::setPerimeter()
{
    float l  = length;
    float b = width;
    float p;

    p = (( 2 * l ) + ( 2 * b));

    perimeter = p;
    return perimeter;
}

float rectangle::setArea()
{
    float l = length;
    float b = width;
    float a;

    a = l * b;

    area = a;

    return area;
}

void rectangle::square()
{

    if(length == width)
        cout << "The coordinate indicates the polygon is a square instead" <<endl;
}

void rectangle::displayCalculation()const
{
    cout << " length :" << getLength() << " \nWidth :" <<getWidth() << endl;
    cout <<endl;

    cout << "The area of the rectangle is :" << area << "\nThe perimeter of the rectangle is :" << perimeter <<endl;
}
