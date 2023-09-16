#include <iostream>
#include <array>
#include<algorithm>

int main()
{
    //define a lambda

    int n1=8;
    int n2 =5;

    std::array<int,100>list;
    list.fill(0);
    auto lambda=[&]()->void{ //& pass all above variable by refrence ,,=pass all above variables by value//
        for(auto element:list)
        {
            std::cout <<element<<std::endl;
        }
    };

     auto print_num= [=]()->void {
           std::cout << n1 << n2 <<"\n";

    };

    auto edit_n1 = [&n1]()->void{
        n1=7;
        std::cout <<n1<<"\n";
    };

    auto print_n1 = [n1]()->void{
        std::cout <<n1<<"\n";
    };
    std::for_each(list.begin(),list.end(),[](int &element)->void
    {
        element+=2;
    }
    );


    //lambda();
    print_num();
    edit_n1();
    print_n1();

    return 0;
}