#include <iostream>

class Polygon
{
public:
virtual void Show()
{

    std::cout<<"polygon"<<std::endl;
}
};

class Rectangle :public Polygon
{

public:
     void Show() override
    {
        std::cout<<"Rec"<<std::endl;
    }

};

class Circle:public Polygon
{
    public:
    void Show() override
    {
        std::cout<<"cir"<<std::endl;
    }

};

class Square :public Polygon
{

public:
    void Show() override
    {
        std::cout<<"square"<<std::endl;
    }
    
};



int main()
{

    Polygon pol;
    Rectangle rec;
    Circle cir;
    Square squ;
    pol.Show();
    rec.Show();
    cir.Show();
    squ.Show();
   
    return 0;
}