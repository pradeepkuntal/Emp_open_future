#include "..\Header\Manager.h"

int Manager::GetManagerId()
{
    return id;
}
void Manager::AddEmployeesToList(Employee employee)
{
    arr.push_back(employee);
}
vector<Employee> Manager::GetEmployeesList()
{
    return arr;
}
