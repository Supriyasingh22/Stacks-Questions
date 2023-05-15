// implementing Stacks operations 

#include<iostream>
using namespace std ;

class Stack{

    public : 
    int *arr ;
    int size ;
    int top ;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size ;
        top = -1 ;
    }

    void push(int data)
    {
        if(size-top >1)
        {
            top++;
            arr[top]=data;

        }
        else{
            cout<<"Stack Overflow "<<endl;
        }
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow "<<endl;
        }
        else{
            top--;
            
        }
    }

    void peek()
    {
        if(top==-1)
        {
            cout<<"no element inside stack "<<endl;
        }
        else{

            cout<<"Element at the top is : "<<arr[top]<<endl ;

        }
    }

    void getSize()
    {
        cout<<"Size of Stack is : "<<top+1<<endl ;
    }

    bool isEmpty()
    {
        if(top==-1)
        {
            return true ;
        }
        else 
        {
            return false ;
        }
    }

}   ;

int main()
{
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.getSize();

    s.pop();

    s.peek();

    s.getSize();

    

    while(! s.isEmpty() )
    {
        s.pop();
        s.getSize();
    }

return 0 ;


}