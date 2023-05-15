#include<iostream>
#include<stack>
using namespace std ;

int main()
{
    stack<char>st ;

    string s ;
    cout<<"Enter the string : ";
    cin>>s ;

    for(int i = 0 ;i<s.size();i++)
    {
        st.push(s[i]);
    }

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0 ;

}