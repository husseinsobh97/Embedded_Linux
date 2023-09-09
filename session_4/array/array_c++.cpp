#include <iostream>
#include <array>

int main()

{
    std::array<int,3>list;//fixed size array (size known at compile time)
    std::array<int,3>nums={8,9,10};

    //how to create iterator method 1
    std::array<int,3>::iterator it;//iterator creates pointer of the same data type as array

    for(it=nums.begin();it!=nums.end();++it)
    {
        *it=100;
    }

    //how to create iterator method 2
    //creates iterator of the same data type as the first elemet in nums
    //can also be used with anything ex: auto x=5;  for(auto i=0;i<list.size();i++)
    //auto is best practice recommended by autosar
   //always use it unless you need a specific type (such as function overloading(check session 3))
    for(auto it=nums.begin();it!=nums.end();++it)
    {
        *it=100;
    }





  //solution 1 to write into element 
   /* for(int &element:list)
    {
       std::cin>>element;
    }*/
//solution 2 to write into element 
   /*for(int i=0;i<list.size();i++)
    {
        std::cin>>list[i];
    }*/ 
//solution 3 to write into element 
    list.fill(0);

    nums.swap(list);


    for(int element:list)
    {
        std::cout<<element<<std::endl;
    }
     return 0;
}