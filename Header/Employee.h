#pragma once
#include "User.h"

class Employee:public User
{
private:
    /* data */
public:
    int emp_id;
    int manager_id;
    Employee(/* args */)
    {
        //default cons
    }
    Employee(string name,int age,int manager_id):User(name,age)
    {
        this->emp_id=GetUniqueId();
        this->manager_id=manager_id;
    }
    int GetEmpId();
    int GetMangerId();
};



