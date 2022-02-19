//#include<bits/stdc++.h>

//using namespace std;

#include "..\Header\Helper.h"
#include "..\Header\User.h"
#include "..\Header\Employee.h"
#include "..\Header\EmployeeService.h"
#include "..\Header\Manager.h"
#include "..\Header\ManagerService.h"


void Print(vector<Employee>vec)
{
    cout<<"EMployees :"<<endl;
   for(int i=0;i<vec.size();i++){
       cout<<vec[i].GetName()<<endl;
   }
   cout<<endl;
}

int main()
{
     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout<<"Hello world"<<endl;

    ManagerService managerservice;
    vector<Employee>arr;
    Manager m1=managerservice.Register("kk",34,arr);
    Manager m2=managerservice.Register("lk",33,arr);
    Manager m3=managerservice.Register("kjk",38,arr);
    Manager m4=managerservice.Register("khk",37,arr);

    EmployeeService employeeservice;
    Employee emp1= employeeservice.Register("pk",22,1);
    Employee emp2= employeeservice.Register("ck",29,2);
    Employee emp3= employeeservice.Register("vk",26,3);
    Employee emp4= employeeservice.Register("dk",24,4);

    m1.AddEmployeesToList(emp1);
    m2.AddEmployeesToList(emp2);
    m3.AddEmployeesToList(emp3);
    m4.AddEmployeesToList(emp4);

    managerservice.UpdateManager(m1);managerservice.UpdateManager(m2);managerservice.UpdateManager(m3);
    managerservice.UpdateManager(m4);

   int mang_id= employeeservice.GetManagerId(emp1.GetEmpId());//2nd API
   map<int,Manager>MDB=managerservice.GetManagerDB();
   cout<<MDB[mang_id].GetName()<<endl;

   vector<Employee>vec=managerservice.GetEmployees(m1.GetManagerId());/// 1st API

   Print(vec);

   vec=employeeservice.GetEmployeesWithAge(26);///3rd API
   Print(vec);

}