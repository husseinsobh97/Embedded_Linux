#include<iostream>
#include"employee.h"


    Employee::Employee()//default constructor//
    {

    }

    Employee::Employee(int id,int age,int salary,std::string title)//parmatrised constructor//
    :m_id(id),m_age(age),m_salary(salary),m_title(title)
    {

    }

    Employee::Employee(const Employee& other_employee)//copy constructor//
    {
        this->m_id=other_employee.m_id;
        this->m_age=other_employee.m_age;
        this->m_salary=other_employee.m_salary;
        this->m_title=other_employee.m_title;
    }
    void Employee::diplayInfo()
    {
        std::cout<<"id:"<<m_id<<" age: "<<m_age <<" salary: "<<m_salary<<" title= "<<m_title<<std::endl;
    }
    
  Employee::~Employee()
  {

  }

