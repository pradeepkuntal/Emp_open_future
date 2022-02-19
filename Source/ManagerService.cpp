#include "..\Header\ManagerService.h"

bool ManagerService::ValidateManager(int manager_id)
{
    if(ManagerDB.find(manager_id)==ManagerDB.end())
    {
        cout<<"Invalid Manger id"<<endl;
        return 0;
    }
    return 1;
}
Manager ManagerService::Register(string name,int age,vector<Employee>arr)
{
    Manager m(name,age,arr);
    ManagerDB[m.GetManagerId()]=m;
    return m;
}
void ManagerService::UpdateManager(Manager manager)
{
    ManagerDB[manager.GetManagerId()]=manager;
}
map<int,Manager> ManagerService::GetManagerDB()
{
    return ManagerDB;
}
vector<Employee> ManagerService::GetEmployees(int manager_id)
{

    vector<Employee>vec;

    if(!ValidateManager(manager_id))return vec;
    
    vec=ManagerDB[manager_id].GetEmployeesList();
    return vec;
}