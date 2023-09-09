#include <iostream>

void swap(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}



int main()
{
int var1 =5;
int *p=&var1;
*p=20;
std::cout<<" var1 value " << var1 << " ptr value "<< p <<std::endl;
std::cout<<" var1 address " << &var1 << std::endl;
std::cout<<" var1 address " << &var1 << std::endl;
int **p2=&p;
**p2=700;
std::cout<<" var value " << var1 << " ptr value "<< p <<std::endl;
int var2=900;
swap(&var1,&var2);

std::cout<<"var1 value after swapping "<<var1<<" var2 value after swapping "<<var2<<std::endl;
return 0;
}