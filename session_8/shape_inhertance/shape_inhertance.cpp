#include <iostream>

class Shape
{

public:
    Shape(float width=0,float height=0):mwidth(width),mheight(height)
    {

    }


float mwidth;
float mheight;
virtual float Area()
{

    return  mwidth*mheight;
}

private:
};

class Rectangle :public Shape
{

public:
    Rectangle(float width=0,float height=0):Shape(width,height)
    {

    }
    


    private:
};

class Circle:public Shape
{
    public:
    Circle(float radius=0.0):mRadius(radius)
    {

    }

    float Area() override
    {
        return mRadius*mRadius*PI;
    }


    
    private:
    const double PI=3.14;
    float mRadius;

};



int main()
{
 Shape *shape;
   Rectangle rect(10,5);
   auto result=rect.Area();
   Circle cir(5.0);
   shape=&cir;
   std::cout<<shape->Area()<<std::endl;

   std::cout<<"area "<<result<<std::endl;
   
    return 0;
}