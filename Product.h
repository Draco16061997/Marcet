#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Product
{
private:
    string name;
    string ditription;
    float cost;
    int amount;

public:
    Product(string name, string ditription, float cost, int amount) : name{ name }, ditription{ ditription }, cost{ cost }, amount{ amount } {}

    string getname();
    void setname(string name);

    string getDistription();
    void setDistription(string name);

    int getCost();
    void setCost(float cost);

    int getAmount();
    void setAmount(float amount);

    void printInfo();
};

