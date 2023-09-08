namespace calculator
{
    double n1=0.0;
    double n2=0.0;

 

    void input()
    {

    std::cout<<"please enter first number " ;
    std::cin>>n1;
    std::cout<<"please enter second number " ;
    std::cin>>n2;

    }

    double add()
    {
        return n1+n2;
    }

        double subtract()
    {
        return n1-n2;
    }


    double multiply()
    {
        return n1*n2;
    }

    double divide()
    {
         return n1/n2;
    }

     int remainder()
    {
        int x=n1;
        int y=n2;
        return x%y;
    }
}