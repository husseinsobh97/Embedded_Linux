#include<string>

class Employee
{
    
    public:
    Employee();

    Employee(int id,int age,int salary,std::string title);//parmatrised constructor//
 

    Employee(const Employee& other_employee);//copy constructor//

    ~Employee();

    void diplayInfo(); 
    
    private:
    int m_id;
    int m_age;
    int m_salary;
    std::string m_title;
    

};

