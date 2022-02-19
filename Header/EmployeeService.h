#pragma once

#include "Manager.h"

class EmployeeService
{
private:
    /* data */
public:
    map<int,Employee>EmployeeDB;///{empl_id,Emplyee}
    EmployeeService(/* args */)
    {
        //default
    }
    Employee Register(string name,int age,int manager_id);
    int GetManagerId(int employee_id);
    vector<Employee> GetEmployeesWithAge(int x);
    map<int,Employee> GetEmployeeDB();
};




