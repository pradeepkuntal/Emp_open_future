#pragma once

#include "EmployeeService.h"

class ManagerService
{
private:
    /* data */
public:
    map<int,Manager>ManagerDB; ///{manager_id,manger}

    ManagerService(/* args */)
    {
        //default
    }
    Manager Register(string name,int age,vector<Employee>arr);
    void UpdateManager(Manager manager);
    map<int,Manager> GetManagerDB();
    vector<Employee> GetEmployees(int manager_id);
    bool ValidateManager(int manager_id);

};




