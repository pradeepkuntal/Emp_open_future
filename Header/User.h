#pragma once
#include "Helper.h"

class User
{
private:
    /* data */
public:
    string name;
    int age;
    User(/* args */)
    {
        //Default const
    }
    User(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    string GetName();
    int GetAge();

};


