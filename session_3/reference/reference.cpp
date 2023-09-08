#include<iostream>


void swap(int &n1,int &n2)
{
    printf(" inside addres of n1 = %x \n",&n1);
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
}




int main()
{
    int x =8;
    int y=5;
    printf("outside address of x = %x \n",&x);
    swap(x,y);
    std::cout<<"swapped x with y, then x = "<< x << " and y= " << y;
    return 0;
}