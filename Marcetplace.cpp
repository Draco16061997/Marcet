#include <iostream>
#include <vector>

using namespace std;

//клас описания продукта 
class Product {
private:
    string name;
    string ditription;
    float cost;
    int amount;
public:
    Product(string name, string ditription, float cost, int amount) : name {name}, ditription {ditription}, cost {cost}, amount {amount}{}

    string getname() {
        return name;
    };

    void setname(string name) 
    {
        this->name = name;
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
        cout << "Name product: " << name << endl << "discription: " << ditription << endl << "Cost: " << cost << endl << "Amount: " << amount << endl;
        cout << "========Product INFO==========" << endl;
    }

};




//Корзина покупателя :
class ShoppingCart
{
private:
    //айдишник пользевателя который мы наследуем с юзер лист 
    int userId; 
    
public:

    //списк продуктов у пользевателя 
    vector<Product> products;
    ShoppingCart(int userId, vector<Product> products) : userId{ userId }, products{ products }{}
    
};

//Учет заказов :
class OrderList{};


//Учет пользователей :
class UserList 
{
private:
    int userId;
public:
    vector<Person> user;
    UserList(int userId,vector<Person> user): userId {userId}, user {user}{}

};

class Person{};

//Оплата и доставка :
class PayAndDelivery{};

void main() {
    


    Product milk{ "Milk", "cool milk", 28.50, 100 };
    Product beer{ "beer", "Cool beer", 10.2,100 };
    Product drill{ "Drill", "Super Drill", 100.2, 10 };
   


    ShoppingCart Nikita{ 1, {milk, beer, drill} };
    Nikita.products.push_back(drill);
    for (int i = 0;
        i < Nikita.products.size();
        i++)
    {
        cout << "name product: " << Nikita.products[i].getname() << " | " << "cost: " << Nikita.products[i].getCost() << endl;
    }
    

   /* vector<Product> productList = {milk, beer, drill};*/

    

    /*
    for (int i = 0; i < productList.size(); i++)
    {
        cout<<productList[i].getname();
        cout<<productList[i].getCost()<<endl;
    }
   */
}