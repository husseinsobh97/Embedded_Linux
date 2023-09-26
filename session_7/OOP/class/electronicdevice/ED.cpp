#include<iostream>

class ElectronicDevice
{
public:
//deafult constructor
ElectronicDevice()
{
std::cout<<"constructor is called"<<std::endl;
}

//destructor
~ElectronicDevice()
{
std::cout<<"destructor is called"<<std::endl;
}



void setPrice(std::uint16_t price)
{
    this->price=price;
}
std::uint16_t getPrice()
{
    return this->price;
}
void setModel(std::string model)
{
    this->model=model;
}

std::string getModel()
{
    return this->model;
}

void setBrand(std::string brand)
{
this->brand=brand;
}

std::string getBrand()
{
return this->brand;
}

private:
std::string model;
std::uint16_t price;
std::string brand;
};

void useElectronics()
{
     ElectronicDevice mobile;
    mobile.setPrice(10000);
    mobile.setModel("S22");
    mobile.setBrand("samsung");
       std::cout<<mobile.getModel()<<std::endl;
    std::cout<<mobile.getPrice()<<std::endl;
    std::cout<<mobile.getBrand()<<std::endl;
}


int main()
{

    useElectronics();
 
    return 0;
}