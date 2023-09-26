#include <iostream>


class Complex
{
    public:
    Complex(float real=0,float img=0):mReal(real),mImg(img)
    {

    }


Complex operator+(const Complex&other)
{
    Complex result;
    result.mReal=this->mReal+other.mReal;
    result.mImg=this->mImg+other.mImg; 
    return result;

}
void display()
{
    std::cout<<"Real "<<mReal<<" img "<<mImg<<std::endl;
}
private:
float mReal;
float mImg;
};



int main()
{
Complex c1(5,3);
Complex c2(10,7);
Complex c3=c1+c2;
c3.display();
    return 0;
}