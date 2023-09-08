#include <iostream>

#include"calculator.h"


int main()
{
    std::uint16_t n1=0;
    std::uint16_t n2=0;

   calculator::input();
   std::cout<<"adding = " <<calculator::add()<<"\n";
   std::cout<<"subtract = " <<calculator::subtract()<<"\n";
   std::cout<<"multiply = " <<calculator::multiply()<<"\n";
   std::cout<<"divide = " <<calculator::divide()<<"\n";
   std::cout<<"remainder = " <<calculator::remainder()<<"\n";
   
    return 0;
}