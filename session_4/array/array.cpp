#include <iostream>



int main()
{

    char word[6] = {'h','e','l','l','o'};

    for(char element:word)
    {
      std::cout<<element<<std::endl;
    }


    for(char &element:word)
    {
    element='M';
    }

    for(char element:word)
    {
      std::cout<<element<<std::endl;
    }
    return 0;
}