#include<iostream>

struct Fruit
{
 float price;
 std::uint16_t  weight;


float getTotalPrice()
{
    return price*weight;
}


};

int main()
{
    Fruit orange;
    orange.price=10.2;
    orange.weight=5;

    std::cout<<"Orange total price "<<orange.getTotalPrice()<<std::endl;

    return 0;


}