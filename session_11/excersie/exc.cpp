#include <iostream>
#include <vector>
#include<array>
using namespace std;

class PageObject
{
    public:
    virtual void add(PageObject a) { }
    virtual void remove() { }
     virtual void display(PageObject a) { }

};


class Page: public PageObject
{
    public:
     void add(PageObject a) 
    {
        std::cout<<"add Page"<<std::endl;
    }
     void remove()
    {
        std::cout<<"remove Page"<<std::endl;
    }
     void display(PageObject a)
    {
        std::cout<<"display Page"<<std::endl;
    }

};


class Copy: public PageObject
{
    vector<PageObject>copyPages;
    public:
    void addElement(PageObject a) 
    {
       copyPages.push_back(a);
    }
    void add(PageObject a){
         std::cout<<"add copy"<<std::endl;
    }

    void remove()
    {
         std::cout<<"remove copy"<<std::endl;
    }
    void display(PageObject a)
    {
         std::cout<<"diplay copy"<<std::endl;
    }
    
};

int main() {
   Page p1;
   Page p2;

   Copy myCopy;

   myCopy.addElement(p1);
   myCopy.addElement(p2);

   myCopy.add(p1);

   p1.add(p2);
   
   myCopy.remove();
   p2.remove();
}