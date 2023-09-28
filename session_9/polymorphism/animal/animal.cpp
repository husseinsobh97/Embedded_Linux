 #include <iostream>
 #include<vector>


//abstracr class:that has one or more pure virtual function
 class Animal
 { public:

 virtual void MakeSound()=0;
 virtual ~Animal()=default;
};


class Dog:public Animal
{
    public:
    void MakeSound() override
    {
        std::cout<<"bark"<<std::endl;
    }
    virtual void Run()
    {
        std::cout<<"run"<<std::endl;
    }
};


class Cow:public Animal
{
    public:
    void MakeSound() override
    {
        std::cout<<"moooo"<<std::endl;
    }
};


class Cat:public Animal
{
    public:
    void MakeSound() override
    {
        std::cout<<"meow"<<std::endl;
    }
};
void Sound(std::vector<Animal*> animals)
{
for(auto animal:animals)
{
    animal->MakeSound();
    if(Dog *do_ptr=dynamic_cast<Dog*>(animal))
    {
        do_ptr->Run();
    }
}
}
int main()
{
Animal *animal=new Dog(); 
animal->MakeSound();
//animal.Run()//error ptr mn no3 animal yshof el functions el mwgoda fe animal bs 
((Dog*)animal)->Run();//method 1
Dog *do_ptr=dynamic_cast<Dog*>(animal);//method 2
do_ptr->Run();

Cow co;
animal=&co;
animal->MakeSound();
Cat ca;
animal=&ca;
animal->MakeSound();
    return 0;
}