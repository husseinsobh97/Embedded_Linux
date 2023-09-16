#include <iostream>
#include <array>
#include <functional>


void calculate(const std :: array<int,10>& list_num, const std::function<void (int)> &calculate_square,
                                                     const std::function<void (int)>&calculate_cube)
{
    for (const auto& num :list_num)
    {
        if (num %2==0)
        {
            calculate_square(num);
        }
        else
        {
            calculate_cube(num);
        }
    }
}

int main()
{
    std::array<int,10>list_num;

    for(int i=0; i<10;i++)
    {
        list_num[i]=i;
    }

    auto lambda_square =[] (int num)->void{std ::cout <<"Number : "<<num<<" square : "<<num*num<<std::endl;};
    auto lambda_cube   =[] (int num)->void{std ::cout <<"Number : "<<num<<" cube : "<< num*num*num<<std::endl;};

    calculate (list_num,lambda_square,lambda_cube);

    return 0;
}