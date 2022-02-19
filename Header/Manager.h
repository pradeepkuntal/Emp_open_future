#pragma once
#include "Employee.h"

class Manager:public User
{
private:
    /* data */
public:
    int id;//manager id;
    vector<Employee>arr;///list of employees 
    Manager(/* args */):User()
    {
        //default
    }
    Manager(string name,int age,vector<Employee>arr): User(name,age)
    {
        this->id=GetUniqueId();
        this->arr=arr;
    }
    int GetManagerId();
    void AddEmployeesToList(Employee employee);
    vector<Employee> GetEmployeesList();
};



