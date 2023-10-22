
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
class ShoppingCart
{private:
    int userId;
    vector<string> products;

public:
    




    }

};

//Учет заказов :
class OrderList{};


//Учет пользователей :
class UserList {
public: 



};

//Оплата и доставка :
class PayAndDelivery{};

void main() {
    


    Product milk{ "Milk", "cool milk", 28.50, 100 };
    Product beer{ "beer", "Cool beer", 10.2,100 };
    milk.printInfo();

    vector<Product> productList;

    productList.push_back(milk);
    productList.push_back(beer);
    
    for (int i; i < productList.size(), i++) 
    {
        cout << i << endl;
    }
   
}
