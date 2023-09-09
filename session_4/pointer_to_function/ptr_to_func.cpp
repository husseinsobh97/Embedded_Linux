#include <iostream>

void welcome(std::string str)
{
    std::cout<<str<<std::endl;
}


void fun2(int var)

{
    std::cout<<"var="<<var<<std::endl;
}


void fun1(void (*callback)(std::string ))
{
    callback("data");
}



int main()
{
void(*fptr)(void (*fptr)(std::string))=nullptr;

fptr=fun1;

void(*fptr_2)(int)=fun2;

fptr(welcome);

void(*f_ptr)(std::string)=&welcome;


    return 0;
}