template <class T>
class Queue
{
    public:
    Queue(int=10);
    ~Queue(){delete [] QueuePtr; }
    int push(const T&);
    int pop(T&);
    int isEmpty()const{return front==rear;}
    int isFUll() const {return rear==size;}

    private:
    int size;
    int front;
    int rear;
    T* QueuePtr;
};
template <class T>
Queue<T>::Queue(int s)
{
    size=s>0&&s<1000?s:10;
    front=0;
    rear=0;
    QueuePtr=new T [size];
}

template <class T>
int Queue<T>::push(const T& item)
{
    if(!isFUll())
    {
        QueuePtr[rear++]=item;
        
        return 1;
    }
    else{
 std::cout<<"queu is full"<<std::endl;
 return 0;
    }
   
    

};

template <class T>
int Queue<T>::pop(T& popValue)
{
    if(!isEmpty())
    {

        popValue=QueuePtr[front];
        std::cout<<popValue<<std::endl;
        for(int i=0 ;i<rear-1;i++)
        {
            QueuePtr[i]=QueuePtr[i+1];

        }
        rear--;

        return 1;
    }
    else{
std::cout<<"queu is empty"<<std::endl;
return 0;
    }
    
    

};