#include<iostream>

class Transmission
{
    public:
   virtual void manual()
    {
      std::cout<<"manual"<<std::endl;
    }
    virtual void automatic()
    {
        std::cout<<"automatic"<<std::endl;
    }
};

class Car:public Transmission
{
    public:
    void manual() override
    {
      std::cout<<"car manual"<<std::endl;
    }

    void automatic() override
    {
      std::cout<<"car auto"<<std::endl;
    }
};

class Motorcycle:public Transmission
{
    public:
    void manual() override
    {
      std::cout<<"motorcycle manual"<<std::endl;
    }

    void automatic() override
    {
      std::cout<<"motorcycle auto"<<std::endl;
    }
};


int main()
{
    Transmission *transm;
    Car car;
    Motorcycle cyc;
    transm=&car;
    transm->automatic();
    transm->manual();
    transm=&cyc;
    transm->automatic();
    transm->manual();

    return 0;
}