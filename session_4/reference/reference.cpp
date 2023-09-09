#include <iostream>

int main()
{
    int x=5;
    int &ref =x;
    int &r2=ref;
    int &r3=r2;

    printf(" address of = %x \n",&x);
    printf(" address of = %x \n",&ref);
    printf(" address of = %x \n",&r2);
    printf(" address of = %x \n",&r3);
    return 0;
}