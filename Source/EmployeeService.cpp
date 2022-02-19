#include "..\Header\EmployeeService.h"

Employee EmployeeService::Register(string name,int age,int manager_id)
{
    Employee emp(name,age,manager_id);
    EmployeeDB[emp.GetEmpId()]=emp;
    return emp;
}
int EmployeeService::GetManagerId(int employee_id)
{
    Employee emp=EmployeeDB[employee_id];
    return emp.GetMangerId();
}
vector<Employee> EmployeeService::GetEmployeesWithAge(int x)
{
    vector<Employee>vec;
    for(auto it:EmployeeDB)
    {
        if(it.second.GetAge()<x)vec.push_back(it.second);
    }
    return vec;
}
map<int,Employee> EmployeeService::GetEmployeeDB()
{
    return EmployeeDB;
}
