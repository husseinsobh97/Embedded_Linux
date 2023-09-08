#include<iostream>

int main()
{
    for(int i;i<5;i++)
    {
      std::cout<<"magic number "<<i<<" ";  
    }

    for(int n:{2,5,3,9})
    {
    std::cout<<"magic number "<<n<<" ";
    }
    return 0;
}