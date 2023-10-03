#include<iostream>
#include"queue.h"
using namespace std;

int main()
{
    Queue<float>qu(2);
    float q=1.1;

    qu.push(3.2);
    qu.push(9.2);
    qu.pop(q);
    qu.push(2.2);
    qu.push(14);
    qu.push(27);
    qu.push(5);
    qu.push(7);
    qu.push(4);
    qu.pop(q);
    qu.pop(q);
    qu.pop(q);
    qu.pop(q);
    qu.pop(q);
    qu.push(4);
    qu.pop(q);

}

