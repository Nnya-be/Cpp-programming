#include <iostream>
#include "Invoice.h"


using namespace std;

int main()
{
    string description;
    string number;
    int quantity;
    int price;

    Invoice myList("Light " , "big" ,56 ,4);

    cout<<myList.getInvoiceAmount();
}
