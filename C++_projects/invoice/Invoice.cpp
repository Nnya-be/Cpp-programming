#include "Invoice.h"
#include <iostream>

using namespace std;

 Invoice::Invoice(string number , string description , int quantity , int price)
    :numberOfItem(number), descriptionOfItem(description),quantityOfItem(quantity),priceOfItem(price)
{

}

void Invoice::setNumber(string number)
{
    numberOfItem = number;
}

string Invoice::getNumber()const
{
    return numberOfItem;
}

void Invoice::setDescription(string description)
{
    descriptionOfItem = description;
}

string Invoice::getDescription()const
{
    return descriptionOfItem;
}

void Invoice::setQuantity(int quantity)
{
    quantityOfItem = quantity;
}

int Invoice::getQuantity()const
{
    return quantityOfItem;
}

void Invoice::setPrice(int price)
{
    priceOfItem = price;
}

int Invoice::getPrice()const
{
    return priceOfItem;
}

int Invoice::getInvoiceAmount()
{
    return (priceOfItem * quantityOfItem);
}
