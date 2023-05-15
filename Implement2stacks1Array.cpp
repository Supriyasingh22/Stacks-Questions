
#include<iostream>
#include <cstring>
using namespace std ;

class Stacks{

    public : 
    int* arr ;
    int size ;
    int top1 ;
    int top2 ;

    Stacks(int size)
    {
        arr = new int[size];
       
       for(int i = 0 ;i<size;i++)
       {
        arr[i]=0 ;
       }
        this->size = size ;
        top1=-1 ;
        top2=size ;
    }

    void push1(int data)
    {
        if(top2 - top1 >1)
        {
            top1++;
            arr[top1]=data ;
        }
        else{
            cout<<"Stack1 Overflow ";
        }
    }

    void push2(int data)
    {
        if(top2 - top1 >1)
        {
            top2--;
            arr[top2]=data ;
        }
        else{
            cout<<"Stack2 Overflow ";
        }
    }

    void pop1()
    {
        if(top1==-1)
        {
            cout<<"No element to pop  ";
        }
        else{
            top1-- ;
        }
    }

     void pop2()
    {
        if(top2==size)
        {
            cout<<"No element to pop  ";
        }
        else{
            top2++ ;
        }
    }

    void print()
    {
        for(int i = 0 ;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl ;
    }

};

int main(){

    Stacks s(10);

    s.push1(10);
    s.push1(20);

    s.print();

    s.push2(110);
    s.push2(120);

    s.print();

    s.push1(30);
    s.push1(40);
    s.push1(50);
    s.push1(60);

    s.push2(130);
    s.push2(140);

    s.print();

    s.push2(150);

    s.pop2();
    s.pop2();
    s.pop2();
    s.pop2();
    s.print();
    s.pop2();

    return 0 ;

}