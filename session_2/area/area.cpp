#include <iostream>
int main()
{
    float radius=0.0;
    float area =0.0;
    constexpr float pi=3.14159;

    std::cout <<"enter radius" << std::endl;
    std::cin >> radius;

    area=radius*radius*pi;

    std::cout << "area is " << area << std::endl;
    return 0;

}