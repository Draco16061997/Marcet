
#include <iostream>

#include <vector>

using namespace std;

//клас описания продукта 
class Product {
private:
    string nameProduct;
    string ditription;
    float cost;
    int amount;
public:
    Product(string nameProduct, string ditription, float cost, int amount) : nameProduct{ nameProduct }, ditription{ ditription }, cost{ cost }, amount{ amount } {}

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
//class ShoppingCart{};

//Учет заказов :
class OrderList {};

//інформація про одного користувача


class Person
{
public:
    string namePerson;
    string email;
    string cartNumber;//джерело для shopingcart
    Person(string namePerson, string email, string cartNumber) : namePerson{ namePerson }, email{ email }, cartNumber{ cartNumber } {}
    string getnamePerson()
    {
        return namePerson;
    };

    void setnamePerson(string name)
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

    string getcartNumber()
    {
        return cartNumber;
    };

    void setcartNumber(string cartNumber)
    {
        this->cartNumber = cartNumber;
    }

};

//Учет пользователей :
template<class Person>
class UserList
{

};
//Оплата и доставка :
class PayAndDelivery {};

int main() {
    // Person a("Antony", "ghjklh@gmail", "123456");
    // Person b("Antony", "ghh@gmail", "1234567");
    vector<Person> UserList{
        {"Antony", "ghjklh@gmail", "123456"},
        {"Antony", "ghh@gmail", "1234567"},
    };
    int size = UserList.size();

    cout << "Elements of the vector array:" << endl;

    for (const Person& person : UserList)
        cout << person.namePerson << " " << person.email << " " << person.cartNumber << endl;

    Product milk{ "Milk", "cool milk", 28.50, 100 };
    milk.printInfo();
};