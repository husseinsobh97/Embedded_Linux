#include<vector>
#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;


class Graphic
{
    public:
    virtual void draw() const=0;
    virtual void remove(Graphic *g){}
    virtual void add(Graphic*g){}
    virtual void getChild(int){}
    virtual ~Graphic(){}
};

class Line:public Graphic{
    public:
    void draw() const{
        cout<<"line draw"<<endl; 
    }
};
class Rectangle:public Graphic{
    public:
    void draw() const{
        cout<<"Rectangle draw"<<endl; 
    }
};

class Text:public Graphic{
    public:
    void draw() const{
        cout<<"Text+ draw"<<endl; 
    }
};

class Picture :public Graphic{
    public:
    void draw() const{
        for_each(gList.begin(),gList.end(), mem_fun(&Graphic::draw));
    }
    void add(Graphic *aGraphic){
        gList.push_back(aGraphic);
    }
    private:
    vector<Graphic*>gList;
};


int main()
{
    Line line;
    line.draw();
    Rectangle rec;
    rec.draw();
    Text text;
    text.draw();

    Picture pic;
    pic.add(&line);
    pic.add(&rec);
    pic.add(&text);
    pic.draw();
    return 0;
    
}