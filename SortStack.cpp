// to sort a stack 

#include<iostream>
#include<stack>
using namespace std ;

void insertedStack(stack<int>&s,int t)
{
    if(s.empty())
    {
        s.push(t);
        return ;
    }

    if(s.top()>=t)
    {
        s.push(t);
    }

    int topE = s.top();
    s.pop();

    insertedStack(s,t);

    s.push(topE);

}

void sortStack(stack<int>&s)
{
    if(s.empty())
    {
        return ;
    }

    int target = s.top();
    s.pop();

    sortStack(s);

    insertedStack(s,target);
}

int main()
{
    stack<int>s ;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    sortStack(s);

    cout<<"After sorting ";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
        
    }
    return 0 ;
}