// to reverse a stack 

#include<iostream>
#include<stack>
using namespace std ;

void insertBottom(stack<int>&s, int t)
{
    
    if(s.empty())
    {
        s.push(t);
        return ;
    }

    int temp = s.top();
    s.pop();

    insertBottom(s,t);

    s.push(temp);

}

void reverseStack(stack<int>&s)
{
    if(s.empty())
    {
        return ;
    }

    int target = s.top();
    s.pop();

    reverseStack(s);

    insertBottom(s ,target);
}

int main()
{
    stack<int>s ;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverseStack(s);

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0 ;
}