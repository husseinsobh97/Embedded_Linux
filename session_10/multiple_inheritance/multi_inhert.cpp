#include <iostream>


class Transmission{
    public:
    void setAutoTransmission(bool transmissionType)
    {
    this->transmissionType=transmissionType;
    std::cout<<"transmission is "<<transmissionType<<std::endl;
    }
    bool transmissionType;

};

class Vehicle{
    public:

Vehicle()
{

}
void Start()
{
std::cout<<"start engine"<<std::endl;
}
void Stop()
{
 std::cout<<"stop engine"<<std::endl;
}
};

class Car:public Vehicle,public Transmission
{
    public:

    ~Car()
{
    Stop();
}

};


class Motorbike:public Vehicle,public Transmission
{
    public:
    ~Motorbike()
{
    Stop();
}

};

class MotorBike{

};

int main()
{
    Car car;
    car.setAutoTransmission(true);
    car.Start();

    Motorbike bike;
    bike.setAutoTransmission(false);
    bike.Start();

     
    return 0;  
}