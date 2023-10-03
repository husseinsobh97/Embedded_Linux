#include<iostream>

template<typename T>
struct myVector
{
 myVector()
 {
    buffer=new T[default_size];
 }

  ~myVector()
 {
    delete [] buffer;
 }
 T *buffer;
 unsigned int default_size=4;
};





template<typename T,unsigned int N>
struct myArray
{

    myArray(T *pbuffer):buffer(pbuffer)
    {

    }
    T *buffer;
};

int buf[3]={1,2,3};
myArray<int,5>list(buf);
myVector<double>myvec;


template<class T>

T max(T var1,T var2)
{
    return var1 >var2? var1:var2;
}

int main()
{
    std::cout<<"max is = "<< max(5,3)<<std::endl;
    std::cout<<"max is = "<< max(5.2,3.1)<<std::endl;

    return 0;
}

