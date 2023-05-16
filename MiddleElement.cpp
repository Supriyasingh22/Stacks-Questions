// to middle element of stack without popping element 


#include<iostream>
#include<stack>
using namespace std ;

void middleEle(stack<int>&s,int t)
{
    if(s.size()==t/2+1)
    {
        cout<<"Middle Element is : "<<s.top()<<endl ;
    }

    int e = s.top();
    s.pop();

    middleEle(s,t);

    s.push(e);

}

int main()
{
    stack<int>s ;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    middleEle(s,s.size());

    return 0 ;
}