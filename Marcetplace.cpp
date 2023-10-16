
#include <iostream>

using namespace std;

//клас описания продукта 
class Product {
private:
    string nameProduct;
    string ditription;
    float cost;
    int amount;
public:
    Product(string nameProduct, string ditription, float cost, int amount) : nameProduct {nameProduct}, ditription {ditription}, cost {cost}, amount {amount}{}

    string getNameProduct() {
        return nameProduct;
    };

    void setNameProduct(string name) 
    {
        this->nameProduct = name;
    }



    string getDistription() {
        return ditription;
    };


    void setDistription(string name)
    {
        this->ditription = name;
    }



    int getCost() {
        return cost;
    };


    void setCost(float cost)
    {
        this->cost = cost;
    }

    int getAmount() {
        return amount;
    };

    void setAmount(float amount)
    {
        this->amount = amount;
    }

    void printInfo() {
        cout << "========Product INFO==========" << endl;
        cout << "Name product: " << nameProduct << endl << "discription: " << ditription << endl << "Cost: " << cost << endl << "Amount: " << amount << endl;
        cout << "========Product INFO==========" << endl;
    }

};


//Корзина покупателя :
class ShoppingCart: public Product, public UserList
{};

//Учет заказов :
class OrderList{};


//Учет пользователей :
class UserList 
{
private:
    string namePerson;
    string email;
    int cartNumber;
public:
    Person(string namePerson, string email, int cartNumber) : namePerson {namePerson}, email{email}, cartNumber {cartNumber}{}
    string getNamePerson() 
    {
        return namePerson;
    };

    void setNamePerson(string name) 
    {
        this->namePerson = name;
    }

    string getemail() {
        return email;
    };

    void setemail(string email) 
    {
        this->email = email;
    }

    int getcartNumber()
    {
        return cartNumber;
    };

    void setcartNumber(int cartNumber)
    {
        this->cartNumber = cartNumber;
    }

};

//Оплата и доставка :
class PayAndDelivery{};

void main() {
    cout << "Hello World";

    Product milk{ "Milk", "cool milk", 28.50, 100 };
    milk.printInfo();
};
