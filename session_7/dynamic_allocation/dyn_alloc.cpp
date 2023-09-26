#include<iostream>

int main()
{
    int*p=new int(7);
    std::cout<<"p = "<<*p<<std::endl;
    delete p;
    return 0;
}