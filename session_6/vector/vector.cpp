#include<iostream>
#include <vector>

void inputvector(std::vector<int>&vec)
{
    for (int &item:vec)
    {
      std::cin>>item;
    }
}

void outputvector(const std::vector<int>&vec)
{
    for (int temp:vec)
    {
      std::cout<<temp<<std::endl;
    }
}


int main()
{
    std::vector<int> v(3,0);//vector with 3 elements (mmkn azwd b3d keda br7ty) value bta3t el elements 0//
    inputvector(v);
    v.push_back(9);
    v.push_back(9);

    outputvector(v);

    std::cout<< "size= "<<v.size() << " capacity= " <<v.capacity()<<std::endl;


    return 0;
}