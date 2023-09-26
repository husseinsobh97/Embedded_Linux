#include "employee.h"

int main()
{
    std::string profession("accountant");
    Employee employee1(1,25,15000,profession);

    Employee* emp_ptr = new Employee(2,23,25000,profession);
    emp_ptr->diplayInfo();
    Employee employee2(employee1);
    employee2.diplayInfo();

    delete emp_ptr;


    return 0;
}