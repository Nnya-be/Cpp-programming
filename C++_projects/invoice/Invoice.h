#include <string>


class Invoice
{
    public:
       explicit Invoice(std::string , std::string ,int ,int);

       void setNumber(std::string);
       std::string getNumber()const;

       void setDescription(std::string);
       std::string getDescription()const;

       void setQuantity(int);
       int getQuantity ()const;

       void setPrice(int);
       int  getPrice()const;

       int getInvoiceAmount();
    private:
        std::string numberOfItem;
        std::string descriptionOfItem;
        int quantityOfItem;
        int priceOfItem;

};

